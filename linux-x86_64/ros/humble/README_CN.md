[English README](README.md)

# Omniglove ROS 2 Overlay

本目录是预编译 ROS 2 overlay，适用的 ROS 发行版和架构记录在 `BUILD_INFO.txt`。其中包含：

- `omniglove_interfaces`：公开消息和服务；
- `omniglove_node`：可组合生命周期组件和独立的 `ros2 run` 可执行入口。

组件通过强类型 ROS 消息提供 POSEDATA 和 POSTDATA；REMOTEDATA 不通过该 ROS 接口提供。

## 前置条件

使用 overlay 前，先把同一发行交付中匹配的 Omniglove SDK 安装到 `/usr/local`：

```bash
cd /path/to/release/linux-<arch>
sudo ./install.sh /usr/local
```

所需 ROS 发行版、架构和 SDK 版本以 `BUILD_INFO.txt` 为准。组件会拒绝不兼容的 SDK 运行库。

## 环境设置与启动

将 `<distro>` 替换为 `BUILD_INFO.txt` 中的 `ros_distro`：

```bash
source /opt/ros/<distro>/setup.bash
source /path/to/overlay/setup.bash
ros2 launch omniglove_node omniglove.launch.py
```

每个新终端都需要 source 上述两个文件。overlay 可以作为一个整体移动；移动后 source 新位置
中的 `setup.bash`。不要 source `setup.sh`。

launch 文件启动多线程组件容器并启用 ROS intra-process。相同组件也可以作为独立进程运行：

```bash
ros2 run omniglove_node omniglove_node --ros-args \
  --params-file /absolute/path/to/omniglove.yaml
```

随包默认配置位于 `share/omniglove_node/config/default.yaml`。先复制再编辑，并把副本传给
launch 文件：

```bash
cp share/omniglove_node/config/default.yaml /path/to/omniglove.yaml
ros2 launch omniglove_node omniglove.launch.py \
  parameters_file:=/path/to/omniglove.yaml
```

`autostart: true` 时节点自动 configure 和 activate。没有所选设备时，节点保持
unconfigured，并按 `discovery_retry_ms` 周期重试。省略 `device_uids` 表示选择所有发现的
设备。不要填写空序列 `device_uids: []`，因为 ROS 2 YAML 无法推断其元素类型。

需要手动控制生命周期时：

```bash
ros2 run omniglove_node omniglove_node --ros-args -p autostart:=false

ros2 lifecycle get /omniglove_node
ros2 lifecycle set /omniglove_node configure
ros2 lifecycle set /omniglove_node activate
ros2 lifecycle set /omniglove_node deactivate
ros2 lifecycle set /omniglove_node cleanup
```

## Topic

每个设备使用 16 位十六进制 UID 组成 topic namespace：

```text
<topic_root>/uid_<16位十六进制UID>/posedata
<topic_root>/uid_<16位十六进制UID>/posedata_tactile_position_v1
<topic_root>/uid_<16位十六进制UID>/postdata
```

| topic 后缀 | 消息类型 | 数据字段 |
|---|---|---|
| `posedata` | `omniglove_interfaces/msg/PoseSample` | `metadata`、`data` |
| `posedata_tactile_position_v1` | `omniglove_interfaces/msg/PoseTactilePositionSample` | `metadata`、`data`、`tac_pos` |
| `postdata` | `omniglove_interfaces/msg/PostSample` | `metadata`、`data` |

可使用以下命令检查 topic：

```bash
ros2 topic list | grep omniglove
ros2 topic echo /omniglove/uid_0123456789abcdef/posedata --once
ros2 topic hz /omniglove/uid_0123456789abcdef/posedata
```

## 服务

服务位于节点私有命名空间。后续请求应使用 `list_devices` 返回的 UID。

列出设备：

```bash
ros2 service call \
  /omniglove_node/list_devices \
  omniglove_interfaces/srv/ListDevices \
  '{}'
```

查询 POSE 信息（`timeout_ms: 0` 表示使用 `control_timeout_ms`）：

```bash
ros2 service call \
  /omniglove_node/get_pose_info \
  omniglove_interfaces/srv/GetPoseInfo \
  '{device_uid: 81985529216486895, info_type: 0, timeout_ms: 500}'
```

配置并启用 POSEDATA：

```bash
ros2 service call \
  /omniglove_node/set_stream_config \
  omniglove_interfaces/srv/SetStreamConfig \
  '{device_uid: 81985529216486895, stream_kind: 2, stream_mode: 0, enabled: true, source_interval_ms: 20, source_timeout_ms: 100, callback_queue_capacity: 64, pose_components: 3}'
```

`source_interval_ms` 是必填兼容字段，不改变设备数据速率。启用 stream 时，该字段、
`source_timeout_ms` 和 `callback_queue_capacity` 都必须非零。重新配置只影响指定 stream。

查询 POSEDATA 状态：

```bash
ros2 service call \
  /omniglove_node/get_stream_status \
  omniglove_interfaces/srv/GetStreamStatus \
  '{device_uid: 81985529216486895, stream_kind: 2}'
```

`actual_source_rate_millihz` 的单位是毫赫兹，例如 `100000` 表示约 `100 Hz`。

## 参数

启动参数为只读参数，应通过 YAML 或 launch 参数提供；运行时 stream 调整使用
`set_stream_config`。

```bash
ros2 param list /omniglove_node
ros2 param get /omniglove_node device_uids
ros2 param get /omniglove_node streams.posedata.stream_mode
```

## 文档

- [ROS 2 消息](docs/cn/ROS2_STREAM_DATA_V1.md)
- [已安装组件说明](share/omniglove_node/README_CN.md)

匹配的平台 SDK 包中提供公开 C API 与 DIRECT/UDP 数据流布局文档。

## 许可证与第三方组件

Omniglove 自有 ROS 2 代码和文档依据 [MulanPSL-2.0](LICENSE) 授权。生成的 overlay 辅助文件
及外部运行依赖见 [第三方声明](THIRD_PARTY_NOTICES.md)。
