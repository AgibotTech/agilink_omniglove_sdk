# Android API 与生命周期

导入 `com.agilink.omniglove.Omniglove` 和 `StreamSample`。一个 SDK 实例持有 USB
授权 receiver 和 native registry，结束使用时显式关闭。

```java
Omniglove sdk = new Omniglove(applicationContext);
sdk.setUsbListener((usb, event, error) -> {
    // USB 事件在 Android 主线程交付。
    // 授权完成后，由应用后台线程调用 initialize。
});
sdk.requestUsbPermissions();

// 等待所有需要的设备授权完成后，在后台线程执行。
for (Omniglove.Device device : sdk.initialize()) {
    device.configure(Omniglove.POST, sample -> {
        float[] positionM = sample.post.index.landmarks[3].positionM;
    });
    device.start(Omniglove.POST);
}
// 结束使用时，在后台线程执行。
sdk.close();
```

系统授权异步完成；拒绝时报告 `PERMISSION_DENIED`，允许再次申请。SDK 复制已授权 USB
fd，关闭原始 connection，把复制 fd 独占租给 transport；只枚举已授权设备。应用无需
提供 VID/PID、端点、串口或连接参数。

`initialize()` 初始化所有已授权且产品握手成功的候选，一台失败不影响其他成功设备。
`initialize(opaqueToken)` 选择以前发现的设备。session 创建后新连接的其他设备需要新
session；同一设备重新插入并重新授权后，由透明重连恢复原 handle。

初始化、启停、查询、控制和 close 在应用后台线程执行。DIRECT 回调由独立 Java worker
串行交付，UI 更新须切回主线程。Java 样本持有自己的数组，可跨回调保存。回调队列容量
64，满时丢弃新样本，`droppedCallbackCount()` 查询此层丢弃；`streamStatus()` 分别报告
native 队列丢弃与源错误。慢回调不阻塞 USB reader。

stop 使旧队列样本失效，后续 start 保留配置。close 汇合 native producer，释放 native
handle、JNI 引用与 USB fd，并丢弃待交付样本；已经执行中的应用回调可在 close 返回后
结束。session 关闭后，其设备对象不能继续使用。native 应用自建的 C session 必须先
销毁，再关闭 Java SDK。

POSE 的 EMF 位置为毫米，角度为 0.01°；触觉 byte 用 `value & 255` 解释，1 g/LSB。
POST 位置为米，关节角为弧度，四元数为 xyzw，reserved 原样保留。REMOTE 含按键原始
位和 0..4095 摇杆 ADC。样本保留 layout、generation、sequence、gap 和主机单调时间；
仅当 `hasDeviceTime()` 为真时使用设备 UTC 时间。

POSE mode 1 使用
`configure(POSE, TACTILE_POSITION_MODE, ALL_COMPONENTS, 1000, 64, listener)`，
返回 746 个米制腕坐标系 XYZ 点。`configureUdp()` 使用共享的版本化 UDP schema，目标
由显式 IPv4/端口指定。启用 UDP 的应用须声明 `android.permission.INTERNET`。

`firmwareInfo(timeoutMs)` 只读查询手别、固件/硬件版本、产品名和完整 32 B SN。
`control(...)` 提供公开 POSE 信息、标定 blob/phase、REMOTE 操作，检查 `succeeded()`。
标定 blob 含 TX 9、RX 54、三组距离数组各 6 和 `dist_valid`。
`readBone`/`writeBone` 使用完整 547 B v4 payload，写入由应用显式调用。SN 为只读，
不提供原始命令透传。错误码沿用对应公开 C API 操作的枚举。

公开 Java 源码见 `../../java/`，共享契约见发行根 `docs/cn/`。
授权、拔插恢复、真实手套数据和后台性能须在目标 Android 实机验证。
