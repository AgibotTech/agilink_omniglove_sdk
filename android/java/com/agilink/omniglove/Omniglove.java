package com.agilink.omniglove;

import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.usb.UsbDevice;
import android.hardware.usb.UsbDeviceConnection;
import android.hardware.usb.UsbManager;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.RejectedExecutionException;

/**
 * Android USB host and device SDK. Own one instance per application.
 * initialize, device operations and close may block: call them off the UI thread.
 * Callbacks share a serial worker by default; isolated stream workers are opt-in.
 * USB events use the main thread.
 */
public final class Omniglove implements AutoCloseable {
    static { System.loadLibrary("omniglove"); }
    public static final int POSE = 2, POST = 3, REMOTE = 4;
    public static final int TACTILE_COMPONENT = 1, POSE_COMPONENT = 2, ALL_COMPONENTS = 3;
    public static final int DEFAULT_MODE = 0, TACTILE_POSITION_MODE = 1;
    public static final int LEFT = 1, RIGHT = 2;

    public enum UsbEvent { AUTHORIZED, PERMISSION_DENIED, DETACHED, ERROR }
    public interface UsbListener {
        void onUsbEvent(UsbDevice device, UsbEvent event, RuntimeException error);
    }
    public interface StreamListener { void onSample(StreamSample sample); }

    private final Context context;
    private final UsbManager usbManager;
    private final String permissionAction;
    private final CallbackDispatcher callbacks = new CallbackDispatcher(
            error -> Log.e("Omniglove", "Stream callback failed", error));
    private final Handler usbEvents = new Handler(Looper.getMainLooper());
    private final ExecutorService usbOperations = Executors.newSingleThreadExecutor(runnable -> {
        Thread thread = new Thread(runnable, "omniglove-usb-host");
        thread.setDaemon(true); return thread;
    });
    private final Map<String, Long> registrations = new HashMap<>();
    private final Map<String, UsbDevice> pendingPermissions = new HashMap<>();
    private volatile UsbListener usbListener;
    private volatile boolean closed;
    private long handle;
    private InitializationReport initializationReport;
    private List<Device> devices = Collections.emptyList();

    public Omniglove(Context context) {
        this.context = context.getApplicationContext();
        usbManager = (UsbManager) this.context.getSystemService(Context.USB_SERVICE);
        if (usbManager == null) throw new IllegalStateException("USB host is unavailable");
        permissionAction = this.context.getPackageName() + ".omniglove.USB_PERMISSION." + UUID.randomUUID();
        IntentFilter filter = new IntentFilter(permissionAction);
        filter.addAction(UsbManager.ACTION_USB_DEVICE_ATTACHED);
        filter.addAction(UsbManager.ACTION_USB_DEVICE_DETACHED);
        if (Build.VERSION.SDK_INT >= 33) this.context.registerReceiver(receiver, filter, Context.RECEIVER_NOT_EXPORTED);
        else this.context.registerReceiver(receiver, filter);
    }

    public void setUsbListener(UsbListener listener) { usbListener = listener; }

    /** Hardware candidates only; native protocol handshake confirms identity. */
    public synchronized List<UsbDevice> usbCandidates() {
        requireAlive();
        List<UsbDevice> result = new ArrayList<>();
        for (UsbDevice device : usbManager.getDeviceList().values()) {
            if (nativeUsbCandidate(device.getVendorId(), device.getProductId())) result.add(device);
        }
        return Collections.unmodifiableList(result);
    }

    /** Requests Android permission asynchronously. Listen for AUTHORIZED/denial. */
    public synchronized void requestUsbPermissions() {
        for (UsbDevice device : usbCandidates()) authorize(device);
    }

    private synchronized void authorize(UsbDevice device) {
        if (closed || registrations.containsKey(device.getDeviceName())) return;
        if (usbManager.hasPermission(device)) { register(device); return; }
        if (pendingPermissions.containsKey(device.getDeviceName())) return;
        Intent intent = new Intent(permissionAction).setPackage(context.getPackageName());
        int flags = PendingIntent.FLAG_UPDATE_CURRENT;
        if (Build.VERSION.SDK_INT >= 31) flags |= PendingIntent.FLAG_MUTABLE;
        PendingIntent permission = PendingIntent.getBroadcast(context, device.getDeviceId(), intent, flags);
        pendingPermissions.put(device.getDeviceName(), device);
        try { usbManager.requestPermission(device, permission); }
        catch (RuntimeException e) { pendingPermissions.remove(device.getDeviceName()); notifyUsb(device, UsbEvent.ERROR, e); }
    }

    private void register(UsbDevice device) {
        UsbDevice current = usbManager.getDeviceList().get(device.getDeviceName());
        if (current == null || !usbManager.hasPermission(current)) return;
        UsbDeviceConnection connection = null;
        try {
            connection = usbManager.openDevice(current);
            if (connection == null) throw new OmnigloveException("USB permission or open", 10);
            String[] location = current.getDeviceName().split("/");
            if (location.length < 2) throw new IllegalArgumentException("USB device location is unavailable");
            int bus = Integer.parseInt(location[location.length - 2]);
            int address = Integer.parseInt(location[location.length - 1]);
            long id = nativeRegisterUsb(connection.getFileDescriptor(), current.getVendorId(), current.getProductId(), bus, address);
            registrations.put(current.getDeviceName(), id);
            notifyUsb(current, UsbEvent.AUTHORIZED, null);
        } catch (RuntimeException e) { notifyUsb(current, UsbEvent.ERROR, e); }
        finally { if (connection != null) connection.close(); }
    }

    private final BroadcastReceiver receiver = new BroadcastReceiver() {
        @Override public void onReceive(Context ignored, Intent intent) {
            UsbDevice device = intent.getParcelableExtra(UsbManager.EXTRA_DEVICE);
            if (device == null) return;
            // Android delivers broadcasts on the main thread. Queue the work
            // before taking the lifecycle lock, which native operations hold.
            try { usbOperations.execute(() -> handleUsbEvent(device, intent.getAction())); }
            catch (RejectedExecutionException closedExecutor) { }
        }
    };

    private void handleUsbEvent(UsbDevice device, String action) {
            synchronized (Omniglove.this) {
                if (closed) return;
                if (permissionAction.equals(action)) {
                    if (pendingPermissions.remove(device.getDeviceName()) == null) return;
                    if (usbManager.hasPermission(device)) register(device);
                    else notifyUsb(device, UsbEvent.PERMISSION_DENIED, null);
                } else if (UsbManager.ACTION_USB_DEVICE_DETACHED.equals(action)) {
                    pendingPermissions.remove(device.getDeviceName());
                    Long id = registrations.remove(device.getDeviceName());
                    if (id != null) { nativeUnregisterUsb(id); notifyUsb(device, UsbEvent.DETACHED, null); }
                } else if (UsbManager.ACTION_USB_DEVICE_ATTACHED.equals(action) &&
                        nativeUsbCandidate(device.getVendorId(), device.getProductId())) {
                    authorize(device);
                }
            }
    }

    private void notifyUsb(UsbDevice device, UsbEvent event, RuntimeException error) {
        usbEvents.post(() -> { UsbListener listener = usbListener; if (listener != null && !closed) listener.onUsbEvent(device, event, error); });
    }

    /** Call after USB permission has been granted. null selects every confirmed device. */
    public List<Device> initialize(String opaqueToken) {
        DeviceSelector selector = opaqueToken == null ? DeviceSelector.all() : DeviceSelector.byToken(opaqueToken);
        InitializationResult result = initializeWithReport(selector);
        if (!result.report.succeeded()) throw new OmnigloveException(
                result.report.message.isEmpty() ? "initialize" : result.report.message, result.report.error);
        return result.devices;
    }
    public List<Device> initialize() { return initialize((String) null); }
    public InitializationResult initializeWithReport() { return initializeWithReport(DeviceSelector.all()); }
    /** Returns ordinary discovery failures as reports. JVM/native failures still throw.
     * The returned devices belong to this SDK instance; the report owns its data. */
    public synchronized InitializationResult initializeWithReport(DeviceSelector selector) {
        requireAlive();
        if (selector == null) throw new IllegalArgumentException("selector is required");
        if (handle != 0) throw new IllegalStateException("Session is already initialized");
        for (UsbDevice device : usbCandidates()) {
            if (usbManager.hasPermission(device) && !registrations.containsKey(device.getDeviceName())) register(device);
        }
        NativeOpenResult opened = nativeOpen(selector.opaqueToken, selector.hasDeviceUid, selector.deviceUid);
        try {
            InitializationReport report = new InitializationReport(opened.report);
            List<Device> result = new ArrayList<>();
            if (opened.handle != 0) {
                int count = nativeDeviceCount(opened.handle);
                for (int i = 0; i < count; ++i) result.add(new Device(this, i, nativeDeviceInfo(opened.handle, i)));
            }
            List<Device> owned = Collections.unmodifiableList(result);
            InitializationResult initialization = new InitializationResult(report, owned);
            initializationReport = report; devices = owned; handle = opened.handle;
            return initialization;
        } catch (RuntimeException | Error error) { nativeClose(opened.handle); throw error; }
    }
    public synchronized InitializationReport initializationReport() { return initializationReport; }
    public synchronized List<Device> devices() { requireAlive(); return devices; }
    public long droppedCallbackCount() { return callbacks.droppedCount(); }
    public static final class InitializationResult {
        public final InitializationReport report;
        public final List<Device> devices;
        private InitializationResult(InitializationReport report, List<Device> devices) {
            this.report = report; this.devices = devices;
        }
    }
    // Instantiated by JNI; one owner for the native session until Java adopts it.
    private static final class NativeOpenResult {
        final long handle;
        final byte[] report;
        private NativeOpenResult(long handle, byte[] report) { this.handle = handle; this.report = report; }
    }
    public static native int abiVersion();
    public static native String sdkVersion();

    private void requireAlive() { if (closed) throw new IllegalStateException("SDK is closed"); }
    private void requireSession() { requireAlive(); if (handle == 0) throw new IllegalStateException("Initialize the SDK first"); }
    private static void checkStream(String operation, int result) { if (result != 0) throw new OmnigloveException(operation, result); }

    // Called on a native callback worker; never acquires the SDK lifecycle monitor.
    private void onNativeSample(int index, long[] metadata, byte[] payload) {
        callbacks.submit(index * 8 + (int) metadata[0], metadata, payload);
    }

    /** Joins native producers, releases authorization leases, and drops queued callbacks.
     * A user callback already in progress can finish after close returns. */
    @Override public synchronized void close() {
        if (closed) return;
        closed = true;
        context.unregisterReceiver(receiver);
        if (handle != 0) { nativeClose(handle); handle = 0; }
        for (long id : registrations.values()) nativeUnregisterUsb(id);
        registrations.clear(); pendingPermissions.clear(); devices = Collections.emptyList();
        callbacks.close();
        usbOperations.shutdownNow();
        usbEvents.removeCallbacksAndMessages(null);
    }

    public static final class Device {
        private final Omniglove sdk;
        private final int index;
        public final String uid, productKey, opaqueToken;
        public final int hand, nominalSourceRateHz;
        private Device(Omniglove sdk, int index, String[] info) {
            this.sdk = sdk; this.index = index;
            uid = info[0]; productKey = info[1]; opaqueToken = info[2];
            hand = Integer.parseInt(info[3]); nominalSourceRateHz = Integer.parseInt(info[4]);
        }

        public void configure(int kind, int mode, int poseComponents, int timeoutMs, int queueCapacity, StreamListener listener) {
            configure(StreamConfig.direct(kind).mode(mode).poseComponents(poseComponents)
                    .sourceTimeoutMs(timeoutMs).queueCapacity(queueCapacity).build(), listener);
        }
        public void configure(int kind, StreamListener listener) { configure(StreamConfig.direct(kind).build(), listener); }
        /** DIRECT configuration; isolatedCallbacks explicitly enables per-stream concurrency. */
        public void configure(StreamConfig config, StreamListener listener) {
            if (config == null || config.isUdp() || listener == null) throw new IllegalArgumentException("DIRECT configuration and listener are required");
            synchronized (sdk) {
                sdk.requireSession();
                checkStream("configure stream", nativeConfigure(sdk.handle, index, config.nativeSettings(), null, 0));
                sdk.callbacks.configure(index * 8 + config.kind, (metadata, payload) ->
                        listener.onSample(new StreamSample(metadata, payload)), config.isolatedCallbacks, config.callbackQueueCapacity);
            }
        }
        public void configureUdp(int kind, int mode, int poseComponents, String ipv4, int port) {
            configureUdp(StreamConfig.udp(kind, ipv4, port).mode(mode).poseComponents(poseComponents).build());
        }
        public void configureUdp(StreamConfig config) {
            if (config == null || !config.isUdp()) throw new IllegalArgumentException("UDP configuration is required");
            synchronized (sdk) {
                sdk.requireSession();
                checkStream("configure UDP", nativeConfigure(sdk.handle, index, config.nativeSettings(), config.ipv4, config.port));
                sdk.callbacks.remove(index * 8 + config.kind);
            }
        }
        public void start(int kind) { synchronized (sdk) { sdk.requireSession(); checkStream("start stream", nativeStreamAction(sdk.handle, index, kind, true)); } }
        public void stop(int kind) {
            synchronized (sdk) {
                sdk.requireSession(); checkStream("stop stream", nativeStreamAction(sdk.handle, index, kind, false));
                sdk.callbacks.invalidate(index * 8 + kind);
            }
        }
        public StreamStatus streamStatus(int kind) { synchronized (sdk) { sdk.requireSession(); return new StreamStatus(nativeStreamStatus(sdk.handle, index, kind)); } }
        public CallbackStatistics callbackStatistics(int kind) {
            synchronized (sdk) { sdk.requireSession(); return sdk.callbacks.statistics(index * 8 + kind); }
        }
        public FirmwareInfo firmwareInfo(int timeoutMs) { synchronized (sdk) { sdk.requireSession(); return new FirmwareInfo(nativeFirmwareInfo(sdk.handle, index, positive(timeoutMs))); } }
        public ControlResult control(int kind, int poseInfoType, float[] calibrationBlob, int timeoutMs) {
            synchronized (sdk) { sdk.requireSession(); return new ControlResult(nativeControl(sdk.handle, index, kind, poseInfoType, calibrationBlob, positive(timeoutMs))); }
        }
        public BoneResult readBone(int timeoutMs) { synchronized (sdk) { sdk.requireSession(); return new BoneResult(nativeBone(sdk.handle, index, null, positive(timeoutMs))); } }
        public BoneResult writeBone(byte[] bone, int timeoutMs) {
            if (bone == null || bone.length != 547) throw new IllegalArgumentException("BONE must contain 547 bytes");
            synchronized (sdk) { sdk.requireSession(); return new BoneResult(nativeBone(sdk.handle, index, bone, positive(timeoutMs))); }
        }
        private static int positive(int value) { if (value <= 0) throw new IllegalArgumentException("timeout must be positive"); return value; }
    }

    /** Complete native status; existing field names remain available. */
    public static final class StreamStatus extends StreamStatistics {
        private StreamStatus(long[] values) { super(values); }
    }

    private static native boolean nativeUsbCandidate(int vid, int pid);
    private static native long nativeRegisterUsb(int fd, int vid, int pid, int bus, int address);
    private static native void nativeUnregisterUsb(long registration);
    private native NativeOpenResult nativeOpen(String token, boolean hasUid, long uid);
    private static native void nativeClose(long handle);
    private static native int nativeDeviceCount(long handle);
    private static native String[] nativeDeviceInfo(long handle, int index);
    private static native int nativeConfigure(long handle, int index, int[] settings, String ipv4, int port);
    private static native int nativeStreamAction(long handle, int index, int kind, boolean start);
    private static native long[] nativeStreamStatus(long handle, int index, int kind);
    private static native byte[] nativeFirmwareInfo(long handle, int index, int timeout);
    private static native byte[] nativeControl(long handle, int index, int kind, int poseType, float[] blob, int timeout);
    private static native byte[] nativeBone(long handle, int index, byte[] input, int timeout);
}
