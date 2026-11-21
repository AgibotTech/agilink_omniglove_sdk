# Android API and lifecycle

Import `com.agilink.omniglove.Omniglove` and `StreamSample`. One SDK instance owns
the USB permission receiver and native registry. Explicitly close it when done.

```java
Omniglove sdk = new Omniglove(applicationContext);
sdk.setUsbListener((usb, event, error) -> {
    // USB events arrive on the Android main thread.
    // After permission completes, initialize on an application worker.
});
sdk.requestUsbPermissions();

// Run on a worker after all required devices have been authorized.
for (Omniglove.Device device : sdk.initialize()) {
    device.configure(Omniglove.POST, sample -> {
        float[] positionM = sample.post.index.landmarks[3].positionM;
    });
    device.start(Omniglove.POST);
}
// Run on a worker when the application finishes using the SDK.
sdk.close();
```

Permission requests are asynchronous. Rejected permission reports
`PERMISSION_DENIED` and may be requested again. The SDK duplicates the authorized
USB fd, closes the original connection and leases the duplicated fd exclusively
to the transport. It only enumerates authorized devices. Applications do not
provide VID/PID, endpoints, serial ports or connection parameters.

`initialize()` initializes all authorized candidates that pass the product
handshake. Failure of one candidate does not prevent other successes.
`initialize(opaqueToken)` selects a previously discovered device. A new device
connected after session creation requires a new session; reconnecting the same
device uses transparent recovery of its original handle after USB reauthorization.

Initialization, start/stop, queries, controls and close run on application workers.
DIRECT samples arrive serially on a separate Java worker. Switch to the main
thread for UI updates. Java samples own their arrays and may be retained.
The callback queue has capacity 64 and drops new samples when full;
`droppedCallbackCount()` reports these drops. `streamStatus()` reports native
queue loss and source errors separately. Slow callbacks do not block USB reads.

`stop` invalidates queued old samples; a later start retains stream configuration.
`close` joins native producers, releases native handles/JNI references/USB fds and
discards queued samples. An already running application callback can finish after
close returns. Device objects cannot be used after their session closes. Native
consumers must destroy any C sessions they created before closing the Java SDK.

POSE EMF positions use millimeters and angles use 0.01 degrees. Tactile bytes are
unsigned (`value & 255`), 1 g/LSB. POST positions use meters, joint angles use
radians and quaternions use xyzw; reserved bytes are preserved. REMOTE contains
raw button bits and 0..4095 joystick ADC values. Samples retain layout,
generation, sequence, gaps and monotonic host time. Use device UTC time only when
`hasDeviceTime()` is true.

POSE mode 1 uses
`configure(POSE, TACTILE_POSITION_MODE, ALL_COMPONENTS, 1000, 64, listener)` and
returns 746 XYZ points in meters in the wrist frame. `configureUdp()` uses the
shared versioned UDP schema and an explicit IPv4 address/port. Declare
`android.permission.INTERNET` in applications that enable UDP.

`firmwareInfo(timeoutMs)` reads hand, firmware/hardware versions, product name,
and the complete 32-byte SN. `control(...)` exposes POSE information,
calibration blob/phase and REMOTE operations; check `succeeded()`. Calibration
blobs contain TX 9, RX 54, three distance arrays of 6 and `dist_valid`.
`readBone`/`writeBone` use the complete 547-byte v4 payload. Writes require an
explicit application call. SN is read-only and raw protocol commands are not
exposed. Error codes follow the corresponding public C API operation.

Public Java source is in `../../java/`; shared contracts are in the release root
`docs/en/`. USB authorization, replug recovery, real glove data and background
performance must be validated on the target Android device.
