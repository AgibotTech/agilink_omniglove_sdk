[English README](README.md)

# Omniglove ROS 2 组件

本安装包提供可组合生命周期组件和独立的 `ros2 run` 可执行入口。组件自动发现受支持的
手套，并在每个设备 UID 对应的命名空间下发布已启用的 POSEDATA 与 POSTDATA。

overlay 设置、启动、生命周期控制、服务示例和参数配置见
[overlay 使用说明](../../README_CN.md)。

## Topic

```text
<topic_root>/uid_<16位十六进制UID>/posedata
<topic_root>/uid_<16位十六进制UID>/posedata_tactile_position_v1
<topic_root>/uid_<16位十六进制UID>/postdata
```

`PoseSample` 与 `PostSample` 包含 `metadata` 和 `data`；
`PoseTactilePositionSample` 还包含 `tac_pos`，其中 746 个 XYZ 点使用米和腕坐标系，
索引与触觉值数组一致。每个触觉值是 `uint8`，范围 `0..255`，单位
`1 g/LSB`；空间坐标单位仍为米。发布后的消息持有自身数据。

## 配置与服务

启动参数为只读 ROS 参数，包括设备 UID 选择、topic 根路径、QoS、发现和控制超时，以及每路
stream 的启用状态、`stream_mode`、必填的 `source_interval_ms`、source timeout 和 callback
队列容量。`source_interval_ms` 不改变设备数据速率。POSEDATA 还提供 `pose_components`。

节点私有命名空间下提供以下运行时服务：

- `~/list_devices`
- `~/get_pose_info`
- `~/set_stream_config`
- `~/get_stream_status`

重新配置只影响指定 stream；单路失败不会停止另一数据流。

## 数据文档

- [ROS 2 消息](../../docs/cn/ROS2_STREAM_DATA_V1.md)

匹配的平台 SDK 包中提供公开 C API 与数据流布局文档。
