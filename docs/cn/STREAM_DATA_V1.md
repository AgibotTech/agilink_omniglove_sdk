# Omniglove 三类公开数据流完整 layout

本文档是 Omniglove SDK 公开数据流的完整布局契约。POSEDATA/REMOTEDATA 使用 DIRECT
layout version 3 和 UDP `omniglove.stream.v4`；POSTDATA 使用 DIRECT layout version 5 和
UDP `omniglove.stream.v6`。ROS 2 使用独立的强类型消息，
完整 topic 与 `.msg` 布局见 [ROS2_STREAM_DATA_V1.md](./ROS2_STREAM_DATA_V1.md)。

DIRECT 和 UDP 共享同一字段语义与手部具名目录，但使用不同承载：DIRECT 为 C ABI 结构体，UDP
为 UTF-8 JSON。下文 JSON 中形如 `"uint8[38]"` 的值是类型说明，不是实际网络值。

设备 UTC 字段是预留兼容字段，值允许为 0；应用不得依赖该字段进行时间同步、排序或延迟
计算，应使用 `sample_monotonic_ns`。

## 1. 输出方式与三类公开流

| C ABI `kind` | UDP `stream` | 含义 | DIRECT 成员 |
|---|---|---|---|
| `OMNIGLOVE_STREAM_POSE_DATA` | `posedata` | 设备同步解算的 pose、tactile 或二者 | `data.posedata` |
| `OMNIGLOVE_STREAM_POST_DATA` | `postdata` | 设备后处理/IK 的关节与位姿 | `data.postdata` |
| `OMNIGLOVE_STREAM_REMOTE_DATA` | `remotedata` | 遥感端手别、双轴 ADC 和 3 bit 按键 | `data.remotedata` |

DIRECT 为零值默认模式；同一 device/kind 的 DIRECT 与 UDP 互斥。DIRECT 回调串行执行，
UDP 发布不会占用 DIRECT 回调线程。

## 2. DIRECT C ABI 完整入口

POSEDATA 和 REMOTEDATA DIRECT 回调使用
`OMNIGLOVE_STREAM_LAYOUT_VERSION=3`；POSTDATA 使用
`OMNIGLOVE_STREAM_POST_LAYOUT_VERSION=5`：

```text
omniglove_stream_sample_t
├── uint32 struct_size
├── uint32 kind
├── uint32 hand
├── uint32 flags
├── uint32 layout_version
├── uint32 device_sequence
├── uint64 device_id
├── uint64 connection_generation
├── uint64 source_sequence
├── uint64 sample_monotonic_ns
├── uint64 gap_count
├── omniglove_stream_data_t data
    ├── const omniglove_pose_data_t   *posedata
    ├── const omniglove_post_data_t   *postdata
│   └── const omniglove_remote_data_t *remotedata
├── uint64 device_time_ms
└── uint16 device_time_us
```

`data` 是判别 union，每次回调只能读取 `kind` 指定的成员。`flags` 定义：

- `OMNIGLOVE_STREAM_SAMPLE_DEVICE_ID_OPAQUE_TOKEN_HASH`：`device_id` 是 opaque token hash；
- `OMNIGLOVE_STREAM_SAMPLE_DEVICE_SEQUENCE_VALID`：`device_sequence` 含有有效的设备数据帧
  sequence。
- `OMNIGLOVE_STREAM_SAMPLE_DEVICE_TIME_VALID`：设备时间字段有效；
  该字段仅作兼容预留，即使置位也不得据此假定 UTC 已同步。

`device_sequence` 是设备提供的数据序号；
`source_sequence` 是 SDK 主机端 64 bit 源事件序号。`gap_count` 是该消费者与上一次
成功交付之间未交付的源事件数。

sample、union 指针以及结构内的 tactile/unmapped 指针都是回调期借用；跨回调保存
必须由调用方深拷贝。

### 2.1 触觉公共结构

```text
omniglove_tactile_region_t
├── uint32 rows
├── uint32 columns
├── uint32 count
└── const uint8 *data[count]

omniglove_tactile_finger_t
├── omniglove_tactile_region_t tip
├── omniglove_tactile_region_t pad
├── omniglove_tactile_region_t middle
└── omniglove_tactile_region_t root

omniglove_tactile_data_t
├── uint32 mapped
├── uint32 count
├── omniglove_tactile_finger_t thumb/index/middle/ring/pinky
├── omniglove_tactile_region_t palm_surface
├── const uint8 *unmapped_data
└── uint32 unmapped_size
```

`mapped=1` 时读取具名区域；不适用于某根手指的 region 保持全零，例如 thumb 的
`middle/root`。`mapped=0` 时具名区域保持零值，并从
`unmapped_data[unmapped_size]` 读取未解释字节。`count` 是当前触觉字节总数。

每个触觉点的值为 `uint8`，范围是 `0..255`，单位为 `1 g/LSB`：数值 `n`
表示 `n g`，因此单点量程为 `0..255 g`。该规则同时适用于具名区域的 `data`
和未映射的 `unmapped_data`。此处 `g` 表示触觉载荷的克刻度，不表示重力加速度。

`device_time_ms` 预留为距 1970-01-01 00:00:00 UTC 的毫秒数，`device_time_us` 预留为该
毫秒内的微秒余数 `0..999`。二者允许为 0，业务不得使用其数值。

## 3. UDP envelope

每个 UDP 数据报只承载一个完整 sample，不跨报文拼接。POSEDATA/REMOTEDATA 使用
`omniglove.stream.v4`，POSTDATA 使用 `omniglove.stream.v6`：

```json
{
  "schema": "omniglove.stream.v4 | omniglove.stream.v6",
  "stream": "posedata | postdata | remotedata",
  "metadata": {
    "hand": "left | right | unknown",
    "device_id": 0,
    "device_id_type": "protocol_uid | opaque_token_hash",
    "connection_generation": 0,
    "source_sequence": 0,
    "sample_monotonic_ns": 0,
    "gap_count": 0,
    "device_sequence": null,
    "device_time_ms": 0,
    "device_time_us": 0,
    "source_payload_format": 0,
    "publish_sequence": 0,
    "publish_monotonic_ns": 0
  },
  "data": {}
}
```

| metadata 字段 | 语义 |
|---|---|
| `hand` | 手套产品手别，不等于 REMOTEDATA 内的 `remote_hand` |
| `device_id` | 协议设备 ID，或 opaque token 的 SDK hash |
| `device_id_type` | 明确 `device_id` 的来源 |
| `connection_generation` | 连接代次；变化后消费者应重置连续性状态 |
| `source_sequence` | SDK 主机端 64 bit 源事件序号 |
| `sample_monotonic_ns` | SDK 完成收包和校验的主机单调时间，不是 UTC |
| `gap_count` | 与前一个已交付 sample 之间未交付的 source event 数 |
| `device_sequence` | 设备 sequence 有效时为整数，无效时为 JSON `null` |
| `device_time_ms` | 预留设备 UTC 毫秒；当前置位时允许为 0，时间 flag 无效时为 JSON `null` |
| `device_time_us` | 预留毫秒内微秒余数 `0..999`；当前置位时允许为 0，时间 flag 无效时为 JSON `null` |
| `source_payload_format` | 源格式追溯标识，不是 JSON 解码开关 |
| `publish_sequence` | UDP publisher 的发布序号 |
| `publish_monotonic_ns` | 主机准备发布该数据报的单调时间 |

SDK UDP publisher 会输出两个 publish 字段。非有限 float 编码为 JSON `null`，不生成
非法的 `NaN`/`Infinity`。单个 JSON 数据报不得超过 UDP 最大有效载荷 65507 B。

`source_payload_format` 值为：

| stream | 值 |
|---|---:|
| POSEDATA pose+tactile | `0x54315007` |
| POSEDATA pose-only | `0x54315008` |
| POSEDATA tactile-only | `0x54315009` |
| POSTDATA | `0x54314B02` |
| REMOTEDATA | `0x54314D02` |

JSON 中该字段以无符号十进制整数出现；表中十六进制只用于便于识别。

## 4. 746 点触觉 layout

SDK 仅当 `T=746` 时按本节冻结的连续切片解释触觉数据；其他 `0<=T<=800` 长度不猜测区域。
下列 746 个点均遵循 `0..255`、`1 g/LSB` 的单点值契约。

746 点按以下 15 个子区域连续输出；每个子区域独立从 1 编号：

| 区域 | 点数 | 全局半开区间 |
|---|---:|---:|
| `thumb.tip` | 38 | `[0,38)` |
| `thumb.pad` | 28 | `[38,66)` |
| `index.tip` | 38 | `[66,104)` |
| `index.pad` | 28 | `[104,132)` |
| `index.root` | 28 | `[132,160)` |
| `middle.tip` | 37 | `[160,197)` |
| `middle.pad` | 28 | `[197,225)` |
| `middle.root` | 28 | `[225,253)` |
| `ring.tip` | 37 | `[253,290)` |
| `ring.pad` | 28 | `[290,318)` |
| `ring.root` | 28 | `[318,346)` |
| `pinky.tip` | 39 | `[346,385)` |
| `pinky.middle` | 28 | `[385,413)` |
| `pinky.root` | 25 | `[413,438)` |
| `palm.surface` | 308 | `[438,746)` |

UDP `data.tactile` 的完整布局为：

```json
{
  "thumb": {
    "tip": {"rows": 8, "columns": 7, "data": "uint8[38]"},
    "pad": {"rows": 4, "columns": 7, "data": "uint8[28]"}
  },
  "index": {
    "tip": {"rows": 8, "columns": 7, "data": "uint8[38]"},
    "pad": {"rows": 4, "columns": 7, "data": "uint8[28]"},
    "root": {"rows": 4, "columns": 7, "data": "uint8[28]"}
  },
  "middle": {
    "tip": {"rows": 8, "columns": 7, "data": "uint8[37]"},
    "pad": {"rows": 4, "columns": 7, "data": "uint8[28]"},
    "root": {"rows": 4, "columns": 7, "data": "uint8[28]"}
  },
  "ring": {
    "tip": {"rows": 8, "columns": 7, "data": "uint8[37]"},
    "pad": {"rows": 4, "columns": 7, "data": "uint8[28]"},
    "root": {"rows": 4, "columns": 7, "data": "uint8[28]"}
  },
  "pinky": {
    "tip": {"rows": 8, "columns": 7, "data": "uint8[39]"},
    "middle": {"rows": 4, "columns": 7, "data": "uint8[28]"},
    "root": {"rows": 4, "columns": 7, "data": "uint8[25]"}
  },
  "palm": {
    "surface": {"rows": 30, "columns": 20, "data": "uint8[308]"}
  }
}
```

`rows/columns` 是稀疏物理矩阵的外框，不代表 `rows*columns=count`。矩阵中的 0 是空位，
正整数 `k` 是当前子区域 `data` 的 1-based 局部编号，读取 `data[k-1]`。
输出数组仅包含有效点，不为矩阵空位增加元素；有效传感器的测量值为 0 时仍保留。
局部编号 `k` 在全局切片 `[a,b)` 中的索引为 `a+k-1`，POSE mode 1 的
`tac_pos.points[a+k-1]` 与其配对。例如 `index.pad.data[0]` 对应全局索引 104。
按样本 `hand` 选择 [TACTILE_LAYOUT_V1.md](./TACTILE_LAYOUT_V1.md) 中的左手或右手矩阵；
左右手区域点数和切片相同，二维分布使用各自编号，不重排输出数组。
物理位置见 [触觉点位映射图片](./TACTILE_POINT_MAPPING_IMAGES.md)。

该映射已固化在 `TACTILE_LAYOUT_V1.md`；上述区域串联顺序是 SDK 公共输出契约。
当触觉长度不是 746 时，DIRECT 设置 `tactile.mapped=0` 并使用
`unmapped_data/unmapped_size`；UDP 输出：

```json
{
  "unmapped": {
    "count": "T",
    "data": "uint8[T]"
  }
}
```

## 6. POSEDATA 完整 layout

### 6.1 数据区段选择

`components` bit0 是 tactile，bit1 是 pose。未选区段不会出现在 UDP JSON 中，也不得从
DIRECT 判别结构读取。选择二者时，pose 与 tactile 具有相同的 `device_tick_ms`，客户不需
自行对两条流做时间同步。

### 6.2 pose 节点

DIRECT 复用结构：

```text
omniglove_pose_emf_t
├── int16 position_mm[3]             # x/y/z，mm
├── int16 yaw_pitch_roll_cdeg[3]    # yaw/pitch/roll，0.01°
├── uint16 confidence_milli         # 0..1000
├── uint8 valid
└── uint8 reserved

omniglove_pose_imu_t
├── int16 roll_pitch_yaw_cdeg[3]    # roll/pitch/yaw，0.01°
├── uint8 flags
└── uint8 reserved

omniglove_pose_node_t
├── omniglove_pose_emf_t emf
└── omniglove_pose_imu_t imu
```

结构中的六个具名节点对应五指和手腕，`back_of_hand_imu` 对应手背。IMU flags bit0 表示
本拍有样本，bit1 表示 yaw 已锁定。`omniglove_pose_emf_t.reserved` 原样保留协议字节用于
诊断且不参与拒帧；IMU 的 `reserved` 成员仍是固定为零的 ABI 填充。

### 6.3 DIRECT `omniglove_pose_data_t`

```text
omniglove_pose_data_t
├── uint32 mapped
├── uint32 components
├── uint32 device_tick_ms
├── omniglove_pose_node_t thumb/index/middle/ring/pinky/wrist
├── omniglove_pose_imu_t back_of_hand_imu
├── omniglove_tactile_data_t tactile
├── const uint8 *unmapped_data
├── uint32 unmapped_size
└── const omniglove_tactile_position_data_t *tac_pos
```

`components` 是有效性门：没有 pose bit 时不得读取六节点和手背 IMU；没有 tactile bit
时不得读取 `tactile`。默认模式中 `tac_pos` 固定为 `NULL`。

### 6.4 UDP `data`

pose 节点的 JSON 结构为：

```json
{
  "emf": {
    "position_mm": "int16[3]",
    "yaw_pitch_roll_cdeg": "int16[3]",
    "confidence_milli": "uint16",
    "valid": "boolean"
  },
  "imu": {
    "roll_pitch_yaw_cdeg": "int16[3]",
    "flags": "uint8"
  }
}
```

pose+tactile 时完整目录为：

```json
{
  "device_tick_ms": "uint32",
  "components": 3,
  "thumb": "PoseNode",
  "index": "PoseNode",
  "middle": "PoseNode",
  "ring": "PoseNode",
  "pinky": "PoseNode",
  "wrist": "PoseNode",
  "back_of_hand": {
    "imu": {
      "roll_pitch_yaw_cdeg": "int16[3]",
      "flags": "uint8"
    }
  },
  "tactile": "第 4 节的 Tactile746 或 TactileUnmapped"
}
```

tactile-only 只输出 `device_tick_ms`、`components` 和 `tactile`；pose-only 完全省略
`tactile`。`T!=746` 时，只有 `data.tactile` 使用局部 `unmapped`，pose 节点仍保留具名
目录。无法安全形成完整具名数据时，使用第 9 节的顶层回退。

### 6.5 触觉空间坐标预留

`stream_mode=OMNIGLOVE_STREAM_MODE_DEFAULT` 保持 DIRECT `tac_pos=NULL`，UDP v4 不出现
`data.tac_pos`。`(POSEDATA, OMNIGLOVE_STREAM_MODE_1)` 已实现触觉空间位置输出，且要求
`pose_components=ALL`；其他流的 mode 1 返回 `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`。

该 mode 使用 746 个 `{x,y,z}`，`points[i]` 与第 4 节扁平 tactile 点 `i` 一一对应；
坐标为右手系腕坐标、单位米。DIRECT 使用 layout v4，UDP 使用
`omniglove.stream.v5` 并在 `data.tactile` 同级增加 `data.tac_pos`，没有修改 v4。

## 7. POSTDATA 完整 layout

`Pose6` 为：

```json
{
  "position_m": "float32[3]",
  "quaternion_xyzw": "float32[4]"
}
```

21 关节顺序为拇指 5 关节，再按食指、中指、无名指、小指各 4 关节排列。21 landmark
顺序为 `Wrist`，拇指 `CMC..TIP`，其余四指各自 `MCP..TIP`。5 个 RX tip target
按拇指到小指排列。

DIRECT 使用 `omniglove_post_data_t`，其中拇指为 `omniglove_post_thumb_t`，其余四指为
`omniglove_post_finger_t`，手腕为 `omniglove_post_wrist_t`。DIRECT 与 UDP 共享的具名
语义为：

```text
PostThumb
├── joints_rad: cmc_rotation/cmc_abduction/cmc_flexion/mcp_flexion/ip_flexion
├── landmarks: cmc/mcp/ip/tip
└── rx_tip_target: Pose6

PostFinger  # index/middle/ring/pinky
├── joints_rad: mcp_abduction/mcp_flexion/pip_flexion/dip_flexion
├── landmarks: mcp/pip/dip/tip
└── rx_tip_target: Pose6

PostWrist
├── landmark: Pose6
└── quaternion_xyzw: float32[4]
```

`omniglove_post_data_t` 还在这些具名对象外提供 `mapped`、`device_tick_ms`、`flags`、
`frame_id`、`unmapped_data`、`unmapped_size` 和原始 8 bit `reserved`。`reserved` 的设备侧
临时含义不固化为公开 API 语义，`0..255` 的任何取值都原样输出且不参与拒帧。

UDP `data` 完整目录：

```json
{
  "device_tick_ms": "uint32",
  "flags": "uint8",
  "reserved": "uint8",
  "frame_id": "uint32",
  "thumb": {
    "joints_rad": {
      "cmc_rotation": "float32",
      "cmc_abduction": "float32",
      "cmc_flexion": "float32",
      "mcp_flexion": "float32",
      "ip_flexion": "float32"
    },
    "landmarks": {"cmc": "Pose6", "mcp": "Pose6", "ip": "Pose6", "tip": "Pose6"},
    "rx_tip_target": "Pose6"
  },
  "index": "PostFinger",
  "middle": "PostFinger",
  "ring": "PostFinger",
  "pinky": "PostFinger",
  "wrist": {
    "landmark": "Pose6",
    "quaternion_xyzw": "float32[4]"
  }
}
```

JSON 中 `PostFinger` 为上述四个具名关节、四个具名 landmark 和一个
`rx_tip_target` 的对象，不是实际输出的字符串。

`flags` bit0 表示 IK 收敛，bit1 表示腕姿有效，bit2 表示骨骼模型有效。flags 只是字段
有效性参考，SDK 不因已成功解码的 flags 未置位而丢弃整帧；未定义 bit 原样保留。
`frame_id` 是 POST sample 的 32 bit 帧号，不与 metadata 中的 `device_sequence`
混用。关节、关键点、左右手规则与坐标系语义见
[IK 解算数据描述](./IK_DATA_DESCRIPTION.md)。

## 8. REMOTEDATA 完整 layout

DIRECT：

```text
omniglove_remote_data_t
├── uint32 mapped
├── uint32 device_tick_ms
├── uint32 remote_hand    # omniglove_hand_t
├── uint32 button_bits
├── const uint8 *unmapped_data
├── uint32 unmapped_size
├── uint32 x_raw
└── uint32 y_raw
```

UDP `data`：

```json
{
  "device_tick_ms": "uint32",
  "remote_hand": "left | right",
  "button_bits": "uint8",
  "x_raw": "uint16",
  "y_raw": "uint16"
}
```

`metadata.hand` 是手套设备的产品手别，`data.remote_hand` 是该帧遥感端的手别，两者是
独立字段。协议保留的 `button_bits` bit3..7 原样交付，不参与拒帧。

## 9. mapped/unmapped 回退规则

当 SDK 不能安全形成具名结构时，不根据当前设备或实测值猜测布局。

DIRECT 对应结构使用：

```text
mapped = 0
unmapped_data = 完整未解释的源 payload
unmapped_size = payload 长度
```

UDP 的顶层 `data` 使用：

```json
{
  "unmapped": {
    "count": "payload_size",
    "data": "uint8[payload_size]"
  }
}
```

顶层回退适用于无法安全形成具名 POSEDATA、POSTDATA 或 REMOTEDATA 的情况。

POSEDATA 存在一个更精细的局部回退：外层 pose 解码成功但触觉长度不是 746 时，
仅 `data.tactile`/`posedata->tactile` 使用 `unmapped`，不丢失已解码的 pose 节点。

## 10. 生命周期、队列与平台边界

流状态为：

```text
UNCONFIGURED --configure--> STOPPED --start--> RUNNING --stop--> STOPPED
```

- start 成功后才交付 sample；stop 成功后停止交付，重复 stop 幂等。
- 运行期源静默使用 `source_timeout_ms` 检测，超时后记录 source timeout 并自动恢复数据流。
- DIRECT 和 UDP 都使用有界队列；满载丢弃、回调不连续、发布失败和高水位通过
  `omniglove_stream_status_t` 统计字段观测。
- `OMNIGLOVE_PUBLISH_ON_NEW_SAMPLE` 每个入选新 sample 发布一次；
  `OMNIGLOVE_PUBLISH_FIXED_RATE_LATEST` 按发布节拍重复最新 sample，因此多个 UDP 报文可共享
  `source_sequence/sample_monotonic_ns`，但有不同 `publish_sequence`。
- 消费者建议以 `(device_id, connection_generation, stream)` 为连续性状态键。

Linux 提供 DIRECT 和 UDP。Windows 仅提供 DIRECT；配置 UDP
时会在启动 source 或 publisher 前稳定返回 `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`，不能视为
已启用网络输出。ROS 2 映射 POSEDATA 和 POSTDATA，不映射 REMOTEDATA。
