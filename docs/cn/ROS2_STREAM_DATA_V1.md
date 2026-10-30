# Omniglove ROS 2 数据流

ROS 2 接口把 DIRECT 回调数据复制到由 ROS 消息持有的内存中。接口提供 POSEDATA 和
POSTDATA；REMOTEDATA 不通过该 ROS 接口提供：

```text
<topic_root>/uid_<16位十六进制UID>/posedata
<topic_root>/uid_<16位十六进制UID>/posedata_tactile_position_v1
<topic_root>/uid_<16位十六进制UID>/postdata
```

| topic 后缀 | 消息类型 | 数据字段 |
|---|---|---|
| `posedata` | `omniglove_interfaces/msg/PoseSample` | `PoseData data` |
| `posedata_tactile_position_v1` | `omniglove_interfaces/msg/PoseTactilePositionSample` | `PoseData data` + `TactilePositionData tac_pos` |
| `postdata` | `omniglove_interfaces/msg/PostSample` | `PostData data` |

`PoseSample` 与 `PostSample` 包含公共 `StreamMetadata metadata` 和一个 `data` 字段；
`PoseTactilePositionSample` 还包含 `tac_pos`。metadata 对应公开的 hand、flags、layout
version、device sequence、device/source ID、generation、主机 source sequence、收包单调
时刻及 gap count。
`PostData.reserved` 原样保留设备 8 bit 数值，不把其当前设备侧临时含义固化为 ROS 契约。

`PoseData.components` 使用 bit0 tactile、bit1 pose。未选择区段的 ROS 字段保持消息默认值，
消费者必须先检查该 mask。默认配置为 `pose_components: 3`，即同帧发布位姿与触觉；也可
通过参数或 `SetStreamConfig.pose_components` 选择 1 或 2。非 POSE 流该值必须为 0。
`PoseData.tactile` 中每个触觉点都是 `uint8`，范围 `0..255`，单位
`1 g/LSB`；数值 `n` 表示 `n g`。
当 `tactile.mapped` 为真且 `tactile.count=746` 时，按 SDK 的 15 个子区域读取。
每个区域的 `data` 只包含有效点，矩阵空位不占元素；图中的局部编号 `k` 对应
该区域 `data[k-1]`，有效点的测量值为 0 时仍保留。左右手按 `metadata.hand` 选择
点位矩阵，区域点数和全局切片相同。POSE mode 1 中，全局切片 `[a,b)` 内的
局部编号 `k` 对应 `tac_pos.points[a+k-1]`，例如 `tactile.index.pad.data[0]`
对应 `tac_pos.points[104]`；手掌字段为 `tactile.palm_surface`。

公开流均通过 `stream_mode` 选择一套完整、互斥的 stream profile。mode 0 使用标准 POSE 与
POST topic；POSE mode 1 要求 `pose_components=3`，改发版本化 tactile-position topic，
其中 746 个 XYZ 点以米为单位、位于腕坐标系，索引与触觉值数组一致；
空间坐标的米制单位不改变触觉值的 `1 g/LSB` 单位。其他流的 mode 1 返回
unsupported。

节点参数前缀为：

```text
streams.posedata.*
streams.postdata.*
```

每类包含 `enabled`、`stream_mode`、`source_interval_ms`、`source_timeout_ms` 和
`callback_queue_capacity`；POSE 额外包含 `pose_components`。`source_interval_ms` 为必填
字段，但不改变设备数据速率。`GetStreamStatus` 返回当前选择 mask 及公开订阅/队列连续性
统计。

ROS publisher 使用节点配置的 QoS。发布消息持有复制后的数据，不保留 callback 借用指针；
设备 sequence 缺口和 callback queue 丢帧通过 metadata/status 公开。
