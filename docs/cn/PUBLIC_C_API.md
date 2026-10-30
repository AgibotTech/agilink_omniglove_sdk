# Omniglove SDK 公开 C API

本文描述 `include/omniglove/omniglove.h` 声明的公开 API。公开边界只有 C ABI。设备发现和
连接由 SDK 自动完成，应用不提供连接参数或平台句柄。

## 初始化与所有权

- 所有调用方提供的结构体先清零，再设置 `struct_size=sizeof(struct)`。
- `omniglove_initialize(NULL, ...)` 自动发现并初始化全部受支持设备。
- `omniglove_device_selector_t.opaque_token_size` 是固定宽度的 `uint32_t` 字节数，不包含末尾
  NUL，且不得超过 256。
- session 拥有 device；`omniglove_session_device_at()` 返回借用指针。
- report 用 `omniglove_init_report_destroy()` 释放，session 用
  `omniglove_session_destroy()` 释放。销毁 session 会停止全部数据流。
- `_monotonic_ns` 是主机单调时钟；`device_tick_ms` 是 MCU 上电毫秒并按 2^32 回绕。
- `omniglove_stream_sample_t.device_time_ms/device_time_us` 是设备 UTC 毫秒和该毫秒内的
  微秒余数；仅当 `OMNIGLOVE_STREAM_SAMPLE_DEVICE_TIME_VALID` 置位时有效。

应用应在初始化前比较 `omniglove_abi_version()` 与编译期
`OMNIGLOVE_ABI_VERSION`；不兼容的 ABI 代际不得混用。

## 三类公开数据流

| `kind` | 含义 | DIRECT 数据指针 |
|---|---|---|
| `OMNIGLOVE_STREAM_POSE_DATA` | 设备同步解算数据，可选位姿、触觉或二者 | `data.posedata` |
| `OMNIGLOVE_STREAM_POST_DATA` | 设备后处理/IK 数据 | `data.postdata` |
| `OMNIGLOVE_STREAM_REMOTE_DATA` | 遥感按键/摇杆事件 | `data.remotedata` |

生命周期为：

```text
UNCONFIGURED --configure--> STOPPED --start--> RUNNING --stop--> STOPPED
```

使用：

- `omniglove_device_stream_configure()`：停止状态下配置一种流和唯一输出方式。
- `omniglove_device_stream_start()`：启动已配置的数据流；失败或超时不会进入运行态。
- `omniglove_device_stream_stop()`：停止数据流；重复停止幂等。
- `omniglove_device_stream_status()`：读取已配置 `stream_mode`、源事件、序号、速率、队列和
  错误统计。

数据流启动成功后才交付 sample。SDK 通过状态和 `gap_count` 报告连续性；
`source_timeout_ms` 用于启动/停止等待和运行期静默检测。发生静默超时时会记录状态并自动
恢复数据流。

`source_interval_ms` 为公共配置兼容字段，必须非零；设备数据频率固定为 125 Hz，不会据此
改变发送频率。

### 配置字段要点

`omniglove_stream_config_t` 先整体清零，再填写当前输出方式需要的字段：

| 字段 | 含义与填写规则 |
|---|---|
| `struct_size` | 设置为 `sizeof(config)`，用于结构体兼容性校验。 |
| `kind` | 选择 POSE、POST 或 REMOTE 数据流。 |
| `stream_mode` | 选择该 kind 的完整数据 profile；通常使用 `OMNIGLOVE_STREAM_MODE_DEFAULT`。 |
| `output_mode` | DIRECT 将数据交给进程内回调；UDP 向指定地址发送 JSON 数据报。 |
| `source_interval_ms` | 非零兼容字段；示例填 8，不改变设备的 125 Hz 频率。 |
| `source_timeout_ms` | 非零毫秒值，用于启动/停止等待及运行期静默检测；示例填 1000。 |
| `pose_components` | POSE 必须选择位姿、触觉或二者；POST/REMOTE 必须为 0。 |
| `reserved` | 保留字段，必须为 0。 |

### POSE 选择

`pose_components` 只允许用于 `POSE_DATA`：

- `OMNIGLOVE_POSE_COMPONENT_TACTILE`：只订阅触觉；
- `OMNIGLOVE_POSE_COMPONENT_POSE`：只订阅位姿；
- `OMNIGLOVE_POSE_COMPONENT_ALL`：订阅同一设备帧中的位姿与触觉。

其他流必须将该字段置零。`omniglove_pose_data_t.components` 表示当前帧实际包含的区段；
未选择区段不应读取。选择二者可直接获得同一设备 tick 下的触觉与位姿，无需客户自行做
跨流时间同步。
触觉区段中每个点的值为 `uint8`，范围 `0..255`，单位 `1 g/LSB`；
数值 `n` 表示 `n g`。

### 互斥 stream profile 与触觉空间坐标

`omniglove_stream_config_t.stream_mode` 为 POSEDATA、POSTDATA 和 REMOTEDATA
共同的互斥 profile 选择。mode 编号必须和 `kind` 一起解释，同一个编号可在不同数据流下
定义不同的完整 profile：

- `OMNIGLOVE_STREAM_MODE_DEFAULT`（0）：默认支持模式。POSEDATA/REMOTEDATA 使用 DIRECT
  layout v3 和 UDP `omniglove.stream.v4`；POSTDATA 使用 DIRECT layout v5 和 UDP
  `omniglove.stream.v6`。POSEDATA 的 `omniglove_pose_data_t.tac_pos` 固定为 `NULL`。
- `OMNIGLOVE_STREAM_MODE_1`（1）：只适用于 POSEDATA，必须选择
  `OMNIGLOVE_POSE_COMPONENT_ALL`；返回实时触觉点空间坐标。其他 kind 使用该
  mode 返回 `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`。

一个 mode 同时定义数据源与配置语义，以及 DIRECT、UDP、ROS 2 的对应格式；三种输出不
分别选择 mode，也不能叠加多个 mode。mode 值允许扩展，调用方不得把已列出的枚举常量视为
封闭集合。未知值、kind 未定义的组合和不受支持的 mode 均返回
`OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`。

mode 1 返回的 `omniglove_tactile_position_data_t` 使用 746 个
`omniglove_tactile_point_position_t {x,y,z}`。`points[i]` 与
[触觉点位布局 v1](./TACTILE_LAYOUT_V1.md) 中的全局触觉索引 `i` 一一对应。
按现有 15 个子区域读取：全局切片 `[a,b)` 内的局部编号 `k` 对应区域 `data[k-1]`
和 `points[a+k-1]`，左右手按样本 `hand` 选择布局矩阵。
坐标对象和其中数据均为回调期借用，
调用方需要跨回调保存时必须深拷贝。结构同时预留 `coordinate_frame`、`unit` 和
`reserved`。mode 1 固定使用右手系腕坐标、米；无效或未配对帧被丢弃并计入状态统计，
不会输出零值或 NaN 占位。

`(POSEDATA, OMNIGLOVE_STREAM_MODE_1)` 使用 DIRECT layout v4；UDP 使用
`omniglove.stream.v5`，在 `tactile` 同级输出 `data.tac_pos`，未修改现有 v4。ROS 2 的现有
`PoseData.msg` 保持不变，mode 1 使用 `PoseTactilePositionSample` 和独立的
`posedata_tactile_position_v1` topic。

## DIRECT 输出

`OMNIGLOVE_STREAM_OUTPUT_DIRECT` 是零值默认模式。必须设置 callback 和非零
`callback_queue_capacity`，并保持 UDP 字段为零。回调串行执行，不占用设备数据接收上下文。
sample、判别联合体指针及借用数组只在回调期间有效；跨回调
使用必须深拷贝。

### 配置并启动 DIRECT 数据流

以下示例订阅同一帧的位姿与触觉。`device` 是已初始化 session 中通过
`omniglove_session_device_at()` 获取的借用句柄；`on_sample` 是应用提供的
`omniglove_stream_callback_t` 回调。

| DIRECT 字段 | 含义与填写规则 |
|---|---|
| `callback` | 必填的数据接收函数，参数为 `(sample, user_data)`。 |
| `callback_user_data` | 可选的应用上下文指针，原样传给回调的第二个参数；无需上下文时填 `NULL`。SDK 不复制或释放它指向的对象。 |
| `callback_queue_capacity` | 等待回调的 sample 数量上限，必须非零；满载时丢弃新 sample，并计入 `callback_dropped_full`。 |

```c
#include "omniglove/omniglove.h"

omniglove_stream_error_t start_pose_direct(
    omniglove_device_t* device, omniglove_stream_callback_t on_sample,
    void* app_context) {
    omniglove_stream_config_t config = {0};
    config.struct_size = sizeof(config);
    config.kind = OMNIGLOVE_STREAM_POSE_DATA;
    config.stream_mode = OMNIGLOVE_STREAM_MODE_DEFAULT;
    config.output_mode = OMNIGLOVE_STREAM_OUTPUT_DIRECT;
    config.source_interval_ms = 8;
    config.source_timeout_ms = 1000;
    config.pose_components = OMNIGLOVE_POSE_COMPONENT_ALL;
    config.callback = on_sample;
    config.callback_user_data = app_context; /* 原样传回，可为 NULL。 */
    config.callback_queue_capacity = 32;
    /* UDP 专用字段保持清零。 */

    omniglove_stream_error_t error =
        omniglove_device_stream_configure(device, &config);
    if (error != OMNIGLOVE_STREAM_ERROR_NONE) return error;
    return omniglove_device_stream_start(device, config.kind);
}
```

函数返回 `OMNIGLOVE_STREAM_ERROR_NONE` 后，SDK 在该流的工作线程串行调用 `on_sample`。
停止时由应用线程调用 `omniglove_device_stream_stop(device, OMNIGLOVE_STREAM_POSE_DATA)`
并检查返回值；上下文须在流运行和回调执行期间有效，重启仍沿用原配置。回调应尽快返回；
多个流共享上下文或主线程同时访问时，由应用同步访问。

订阅 POST/REMOTE 时，修改 `kind`，将 `pose_components` 设为 0，并在回调中读取对应的
`data.postdata`/`data.remotedata`。POSE 只需位姿或触觉时修改 `pose_components`；需要实时
触觉空间坐标时，使用 `OMNIGLOVE_STREAM_MODE_1` 并保留 `OMNIGLOVE_POSE_COMPONENT_ALL`。

`omniglove_stream_sample_t` 的主要连续性字段：

- `source_sequence`：SDK 64 位主机事件序号；
- `device_sequence`：设备提供的数据序号，flags 含
  `OMNIGLOVE_STREAM_SAMPLE_DEVICE_SEQUENCE_VALID` 时有效；
- `connection_generation`：连接代次；
- `gap_count`：自该消费者上次成功交付后的缺失数量；
- `sample_monotonic_ns`：SDK 完成接收/校验时刻。
- `device_time_ms/device_time_us`：设备 UTC 毫秒和毫秒内 `0..999` 微秒余数。

POST 的 `frame_id` 保留在 `omniglove_post_data_t.frame_id`，不与 `device_sequence` 混用。
`omniglove_post_data_t.reserved` 原样保留设备的 8 bit 数值；其当前设备侧临时含义不属于
公开 API 语义，`0..255` 的任何取值都合法。
REMOTE 的 `device_tick_ms` 来自设备上电毫秒，`remote_hand` 为左右遥感端，`x_raw/y_raw`
是范围 `0..4095` 的双轴 ADC；`button_bits` 的 bit0 为摇杆按下、bit1 为 SW2、bit2 为
SW3。协议保留的 bit3..7 原样交付用于诊断，不会使其他字段有效的数据帧被拒绝。

## UDP 输出

显式选择 `OMNIGLOVE_STREAM_OUTPUT_UDP`，设置 IPv4、端口、publisher queue 和发布策略，
并保持 callback 字段为零。每个数据报是一个完整的 UTF-8
JSON 对象：POSE/REMOTE 使用 `omniglove.stream.v4`，POST 使用
`omniglove.stream.v6` 并包含 `data.reserved`。UDP 与 DIRECT 对同一 device/kind 互斥。完整字段见
[STREAM_DATA_V1.md](./STREAM_DATA_V1.md)。

编号 `OMNIGLOVE_STREAM_RESERVED_1` 为保留项且不受支持。公开 configure/start/stop/status
均返回 `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`，不得用作数据流能力。

平台可用性：Linux 提供 DIRECT 与 UDP；Windows 只提供 DIRECT，并保留
`OMNIGLOVE_STREAM_OUTPUT_UDP` 枚举，但配置 UDP 时稳定返回
`OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`，不得将其视为已启用网络输出。

### 配置并启动 UDP 数据流（Linux）

以下示例将 POSE 位姿与触觉发布到本机 `127.0.0.1:45550`；应用另行在该地址接收数据报。
UDP 专用字段如下：

| 字段 | 含义与填写规则 |
|---|---|
| `destination_ipv4` / `destination_ipv4_size` | 目标 IPv4 文本及其字节数，长度不含末尾 NUL，最大 15。 |
| `destination_port` | 接收方端口，必须非零。 |
| `publisher_queue_capacity` | 发布队列的 sample 容量，必须非零；满载丢弃计入 `dropped_full`。 |
| `process_interval_ms` | 0 表示不按处理间隔筛选；非零表示仅选择至少间隔这么多毫秒的新 sample，不改变设备频率。 |
| `publish_policy` | `OMNIGLOVE_PUBLISH_ON_NEW_SAMPLE` 每个入选新 sample 发布一次；`OMNIGLOVE_PUBLISH_FIXED_RATE_LATEST` 按节拍发布最新 sample，可能重复。 |
| `publish_interval_ms` | ON_NEW_SAMPLE 必须为 0；FIXED_RATE_LATEST 必须为非零的发布间隔（毫秒）。 |

```c
#include "omniglove/omniglove.h"

omniglove_stream_error_t start_pose_udp(omniglove_device_t* device) {
    static const char destination[] = "127.0.0.1";
    omniglove_stream_config_t config = {0};
    config.struct_size = sizeof(config);
    config.kind = OMNIGLOVE_STREAM_POSE_DATA;
    config.stream_mode = OMNIGLOVE_STREAM_MODE_DEFAULT;
    config.output_mode = OMNIGLOVE_STREAM_OUTPUT_UDP;
    config.source_interval_ms = 8;
    config.source_timeout_ms = 1000;
    config.pose_components = OMNIGLOVE_POSE_COMPONENT_ALL;
    config.process_interval_ms = 0;
    config.publish_policy = OMNIGLOVE_PUBLISH_ON_NEW_SAMPLE;
    config.publish_interval_ms = 0;
    config.destination_ipv4 = destination;
    config.destination_ipv4_size = sizeof(destination) - 1; /* 不含 NUL。 */
    config.destination_port = 45550;
    config.publisher_queue_capacity = 32;
    /* callback、callback_user_data、callback_queue_capacity 保持清零。 */

    omniglove_stream_error_t error =
        omniglove_device_stream_configure(device, &config);
    if (error != OMNIGLOVE_STREAM_ERROR_NONE) return error;
    return omniglove_device_stream_start(device, config.kind);
}
```

返回值与停止方式同 DIRECT 示例。默认 mode 下若希望每 20 ms 发布最新数据，设置
`publish_policy=OMNIGLOVE_PUBLISH_FIXED_RATE_LATEST`、`publish_interval_ms=20`。
POSE mode 1 的 UDP 配置仅支持 ON_NEW_SAMPLE，且处理间隔与发布间隔均须为 0。

## 同步控制与 BONE

`omniglove_device_control()` 用于 POSE_INFO 和标定 blob/phase 等一次性控制，
这些操作与 stream 订阅变更串行执行。调用线程等待终态，既要检查返回的
`omniglove_control_status_t`，也要检查设备 `return_code`。

只读固件信息查询接口如下：

```c
omniglove_firmware_info_t info = {0};
info.struct_size = sizeof(info);
omniglove_control_status_t status =
    omniglove_device_firmware_info(device, 1000, &info);
```

返回 `OMNIGLOVE_CONTROL_COMPLETE` 且 `info.return_code == 0` 后，可读取公开结构定义的
固件版本分量、16 B 硬件版本、16 B 产品名和 32 B 设备 SN。后三项是固定宽度字节字段，
可能含 NUL padding，不保证以 NUL 结尾；打印或转成字符串时必须按公开长度常量有界复制。
该调用遵循同步控制的超时规则。发行包的
`examples/firmware_info` 是只调用公开 C API 的完整示例。

设备 SN 仅支持读取；SDK 公开 API 不提供 SN 写入功能。

`OMNIGLOVE_CONTROL_REMOTE_DATA` 是保留枚举，调用返回 unsupported；
REMOTE_DATA stream 使用公开结构中定义的数据布局。

BONE 接口规则如下：

- `omniglove_device_bone_read()` 读取固定 547 B BONE v4；
- `omniglove_device_bone_write()` 只接受完整 547 B；
- buffer 所有权始终属于调用方。

推荐关闭顺序为：停止所需流（可省略）→ `omniglove_session_destroy(session)`。销毁前，
所有并发 stop 和借用 device 的调用都必须返回。
