package com.agilink.omniglove.sample;

import android.app.Activity;
import android.app.AlertDialog;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.Switch;
import android.widget.TextView;

import com.agilink.omniglove.BoneResult;
import com.agilink.omniglove.Omniglove;
import com.agilink.omniglove.StreamSample;

import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/** Display one selected glove using its wrist-local POST landmarks. */
public final class MainActivity extends Activity {
    private Omniglove sdk;
    private HandModelView handView;
    private TextView status, poseStatus, postLabel, comparisonLabel, pressureLegend;
    private Switch tactileToggle, comparisonToggle;
    private Button authorize, start, stop;
    private final Handler ui = new Handler(Looper.getMainLooper());
    private final ExecutorService operations = Executors.newSingleThreadExecutor();
    private volatile boolean destroyed;
    private volatile long sessionEpoch;
    private volatile Omniglove.Device selectedDevice;
    private boolean attemptedBone;
    private long attemptedBoneGeneration, attemptedBoneEpoch;

    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        LinearLayout layout = new LinearLayout(this); layout.setOrientation(LinearLayout.VERTICAL);
        int padding = (int) (12 * getResources().getDisplayMetrics().density);
        layout.setPadding(padding, padding, padding, padding);
        poseStatus = new TextView(this); poseStatus.setTextSize(20);
        poseStatus.setText("连接手套后自动显示左手或右手"); layout.addView(poseStatus);
        LinearLayout toggles = new LinearLayout(this);
        tactileToggle = new Switch(this); tactileToggle.setText("触觉点位");
        comparisonToggle = new Switch(this); comparisonToggle.setText("抗磁对比");
        toggles.addView(tactileToggle, new LinearLayout.LayoutParams(0, -2, 1));
        toggles.addView(comparisonToggle, new LinearLayout.LayoutParams(0, -2, 1)); layout.addView(toggles);
        LinearLayout labels = new LinearLayout(this);
        postLabel = new TextView(this); postLabel.setText("POST · SDK 输出");
        comparisonLabel = new TextView(this); comparisonLabel.setText("POSE · 独立解算"); comparisonLabel.setVisibility(android.view.View.GONE);
        labels.addView(postLabel, new LinearLayout.LayoutParams(0, -2, 1));
        labels.addView(comparisonLabel, new LinearLayout.LayoutParams(0, -2, 1)); layout.addView(labels);
        handView = new HandModelView(this);
        layout.addView(handView, new LinearLayout.LayoutParams(-1, 0, 1));
        tactileToggle.setOnCheckedChangeListener((button, checked) -> {
            handView.setTactile(checked);
            pressureLegend.setVisibility(checked ? android.view.View.VISIBLE : android.view.View.GONE);
        });
        comparisonToggle.setOnCheckedChangeListener((button, checked) -> {
            handView.setComparison(checked);
            if (checked) tactileToggle.setChecked(false);
            tactileToggle.setEnabled(!checked);
            comparisonLabel.setVisibility(checked ? android.view.View.VISIBLE : android.view.View.GONE);
            resetBoneAttempt();
        });
        TextView hint = new TextView(this); hint.setText("拖动旋转 · 双指/滚轮缩放 · 对比视角同步"); layout.addView(hint);
        pressureLegend = new TextView(this); pressureLegend.setText("压力 0–255 g：灰 → 蓝 → 绿 → 黄 → 红；无有效数据时灰色");
        pressureLegend.setTextSize(11); pressureLegend.setVisibility(android.view.View.GONE); layout.addView(pressureLegend);
        TextView credit = new TextView(this); credit.setText("骨骼模型：BodyParts3D · CC BY-SA 2.1 JP"); credit.setTextSize(11);
        credit.setOnClickListener(view -> new AlertDialog.Builder(this).setTitle("骨骼模型来源")
                .setMessage("BodyParts3D，© The Database Center for Life Science。\n\n许可：Creative Commons Attribution-Share Alike 2.1 Japan。\n\n模型由 OmniGlove Toolbox 转换和适配。\n\nhttp://dbarchive.biosciencedbc.jp/en/bodyparts3d/lic.html")
                .setPositiveButton("关闭", null).show());
        layout.addView(credit);
        LinearLayout buttons = new LinearLayout(this);
        authorize = button("Authorize USB", buttons); start = button("Start streams", buttons); stop = button("Stop", buttons);
        stop.setEnabled(false); layout.addView(buttons);
        status = new TextView(this); status.setText("通过 USB OTG 连接手套，授权后点击开始。");
        layout.addView(status); setContentView(layout);
        sdk = createSdk();
        authorize.setOnClickListener(view -> operations.execute(() -> {
            try { sdk.requestUsbPermissions(); }
            catch (RuntimeException error) { show(error.getMessage()); }
        }));
        start.setOnClickListener(view -> { controls(true, false); operations.execute(this::startStreams); });
        stop.setOnClickListener(view -> {
            controls(true, true);
            operations.execute(() -> {
                long epoch = ++sessionEpoch; selectedDevice = null; sdk.close(); sdk = createSdk();
                handView.select(0, epoch);
                show("已停止，点击开始可重新识别连接的手套。"); controls(false, false);
            });
        });
    }
    private Button button(String text, LinearLayout layout) {
        Button button = new Button(this); button.setText(text);
        layout.addView(button, new LinearLayout.LayoutParams(0, -2, 1)); return button;
    }
    private Omniglove createSdk() {
        Omniglove result = new Omniglove(this);
        result.setUsbListener((device, event, error) -> show(event + (error == null ? "" : ": " + error.getMessage())));
        return result;
    }
    private void startStreams() {
        if (destroyed) return;
        long epoch = ++sessionEpoch;
        try {
            List<Omniglove.Device> devices = sdk.initialize();
            // Subscribe only the first confirmed device. Never mix two gloves in one model.
            Omniglove.Device selected = devices.get(0);
            selectedDevice = selected; resetBoneAttempt();
            handView.select(selected.hand, epoch);
            for (int kind : new int[]{Omniglove.POSE, Omniglove.POST, Omniglove.REMOTE}) {
                selected.configure(kind, sample -> sample(sample, epoch)); selected.start(kind);
            }
            show((selected.hand == Omniglove.LEFT ? "左手" : selected.hand == Omniglove.RIGHT ? "右手" : "手别等待识别")
                    + " · " + selected.uid + (devices.size() > 1 ? "（已连接多只，仅显示首只）" : ""));
            controls(false, true);
        } catch (RuntimeException error) {
            long closedEpoch = ++sessionEpoch; selectedDevice = null; sdk.close(); sdk = createSdk();
            handView.select(0, closedEpoch); show(error.getMessage()); controls(false, false);
        }
    }
    private void sample(StreamSample sample, long epoch) {
        if (destroyed || sessionEpoch != epoch) return;
        if (sample.kind == Omniglove.POST || sample.kind == Omniglove.POSE) handView.submit(sample, epoch);
        if ((sample.kind == Omniglove.POSE || sample.kind == Omniglove.POST) && handView.needsBone(sample.connectionGeneration))
            queueBone(sample.connectionGeneration, epoch);
    }
    private synchronized void resetBoneAttempt() { attemptedBone = false; }
    private synchronized void queueBone(long generation, long epoch) {
        if (destroyed || sessionEpoch != epoch || selectedDevice == null ||
                (attemptedBone && attemptedBoneGeneration == generation && attemptedBoneEpoch == epoch)) return;
        attemptedBone = true; attemptedBoneGeneration = generation; attemptedBoneEpoch = epoch;
        Omniglove.Device device = selectedDevice;
        handView.boneError("正在读取设备标定", epoch);
        operations.execute(() -> {
            if (destroyed || sessionEpoch != epoch) return;
            try {
                BoneResult bone = device.readBone(1000);
                if (!bone.succeeded()) throw new IllegalArgumentException("读取设备标定失败，可重新开启对比重试");
                if (bone.connectionGeneration != generation) return;
                handView.bindBone(bone.data, device.hand, generation, epoch);
            } catch (RuntimeException error) { handView.boneError(error.getMessage(), epoch); }
        });
    }
    private final Runnable updatePoseStatus = new Runnable() {
        @Override public void run() {
            if (destroyed) return;
            SingleHandModel.Snapshot frame = handView.snapshot();
            String hand = frame.hand == Omniglove.LEFT ? "左手" : frame.hand == Omniglove.RIGHT ? "右手" : "";
            if (frame.hand == 0) poseStatus.setText("连接手套后自动显示左手或右手");
            else if (frame.isFresh(System.nanoTime())) poseStatus.setText(hand + " · 实时姿态");
            else if (frame.state == SingleHandModel.State.INVALID) poseStatus.setText(hand + (frame.hasPose ? " · 姿态无效，保留上一帧" : " · 等待有效姿态（示意模型）"));
            else if (frame.hasPose) poseStatus.setText(hand + " · 数据暂停，等待重连");
            else poseStatus.setText(hand + " · 等待有效姿态（示意模型）");
            postLabel.setText("POST · SDK 输出 · " + displayState(frame));
            SingleHandModel.Snapshot pose = handView.poseSnapshot();
            comparisonLabel.setText("POSE · 独立解算 · " + (handView.poseError().isEmpty() ? displayState(pose) : handView.poseError()));
            handView.requestRender(); ui.postDelayed(this, 250);
        }
    };
    private String displayState(SingleHandModel.Snapshot frame) {
        if (frame.isFresh(System.nanoTime())) return "实时";
        if (frame.state == SingleHandModel.State.INVALID) return frame.hasPose ? "无效，保留上一帧" : "等待有效姿态";
        return frame.hasPose ? "数据暂停" : "等待数据";
    }
    private void controls(boolean busy, boolean running) {
        Runnable update = () -> {
            if (destroyed) return;
            authorize.setEnabled(!busy && !running); start.setEnabled(!busy && !running); stop.setEnabled(!busy && running);
        };
        if (Looper.myLooper() == Looper.getMainLooper()) update.run(); else ui.post(update);
    }
    private void show(String text) { ui.post(() -> { if (!destroyed) status.setText(text); }); }
    @Override public void onResume() { super.onResume(); handView.onResume(); ui.post(updatePoseStatus); }
    @Override public void onPause() { ui.removeCallbacks(updatePoseStatus); handView.onPause(); super.onPause(); }
    @Override public void onDestroy() {
        destroyed = true; ++sessionEpoch; ui.removeCallbacksAndMessages(null);
        operations.execute(() -> sdk.close()); operations.shutdown(); super.onDestroy();
    }
}
