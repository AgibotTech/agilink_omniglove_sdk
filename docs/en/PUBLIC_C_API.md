# Omniglove SDK Public C API

This document describes the API declared by `include/omniglove/omniglove.h`.
The only public boundary is the C ABI. Device discovery and connection are
automatic; applications do not provide connection parameters or platform
handles.

## Initialization and ownership

- Zero-initialize every caller-provided structure, then set
  `struct_size=sizeof(struct)`.
- `omniglove_initialize(NULL, ...)` discovers and initializes every device that
  is supported by the SDK.
- `omniglove_device_selector_t.opaque_token_size` is a fixed-width `uint32_t`
  byte count, excluding a trailing NUL, and must not exceed 256.
- A session owns its devices; `omniglove_session_device_at()` returns a borrowed
  pointer.
- Release reports with `omniglove_init_report_destroy()` and sessions with
  `omniglove_session_destroy()`. Destroying a session stops all streams.
- `_monotonic_ns` values use the host monotonic clock. `device_tick_ms` is MCU
  uptime in milliseconds and wraps modulo 2^32.
- `omniglove_stream_sample_t.device_time_ms/device_time_us` contain device UTC
  milliseconds and the microsecond remainder within that millisecond. They are
  valid only when `OMNIGLOVE_STREAM_SAMPLE_DEVICE_TIME_VALID` is set.

Before initialization, applications should compare `omniglove_abi_version()`
with the compile-time `OMNIGLOVE_ABI_VERSION`. Incompatible ABI generations are
not interchangeable.

## Three public streams

| `kind` | Meaning | DIRECT data pointer |
|---|---|---|
| `OMNIGLOVE_STREAM_POSE_DATA` | Device-solved synchronized data: pose, tactile, or both | `data.posedata` |
| `OMNIGLOVE_STREAM_POST_DATA` | Device post-processing/IK data | `data.postdata` |
| `OMNIGLOVE_STREAM_REMOTE_DATA` | Remote-control buttons and joystick events | `data.remotedata` |

The lifecycle is:

```text
UNCONFIGURED --configure--> STOPPED --start--> RUNNING --stop--> STOPPED
```

Use:

- `omniglove_device_stream_configure()` to configure one stream and exactly one
  output while stopped.
- `omniglove_device_stream_start()` to start the configured stream. A failure or
  timeout does not enter the running state.
- `omniglove_device_stream_stop()` to stop the stream. Repeated stops are
  idempotent.
- `omniglove_device_stream_status()` to read the configured `stream_mode`, source
  events, sequences, rates, queues, and error counters.

Samples are delivered only after a stream starts successfully. The SDK reports
continuity through stream status and `gap_count`. `source_timeout_ms` applies to
start/stop waits and runtime silence detection. After a silence timeout, the SDK
records the condition and automatically restores the stream.

`source_interval_ms` is a required, nonzero compatibility field. Device data is
fixed at 125 Hz; this field does not change the rate.

### Configuration fields

Zero-initialize `omniglove_stream_config_t`, then fill the fields required by
the selected output:

| Field | Meaning and rule |
|---|---|
| `struct_size` | Set to `sizeof(config)` for structure compatibility validation. |
| `kind` | Select POSE, POST, or REMOTE. |
| `stream_mode` | Select the complete profile for that kind; normally `OMNIGLOVE_STREAM_MODE_DEFAULT`. |
| `output_mode` | DIRECT delivers to an in-process callback; UDP sends JSON datagrams to a destination. |
| `source_interval_ms` | Required nonzero compatibility field; the examples use 8 without changing the device's 125 Hz rate. |
| `source_timeout_ms` | Required nonzero milliseconds for start/stop waits and runtime silence detection; the examples use 1000. |
| `pose_components` | POSE requires pose, tactile, or both; POST/REMOTE require 0. |
| `reserved` | Reserved; must be 0. |

### POSE selection

`pose_components` is valid only for `POSE_DATA`:

- `OMNIGLOVE_POSE_COMPONENT_TACTILE`: tactile only;
- `OMNIGLOVE_POSE_COMPONENT_POSE`: pose only;
- `OMNIGLOVE_POSE_COMPONENT_ALL`: pose and tactile from the same device frame.

Other streams must set this field to zero. `omniglove_pose_data_t.components`
describes the sections actually present in a frame; do not read an unselected
section. Selecting both gives tactile and pose at the same device tick without
client-side cross-stream synchronization.
Each tactile point is a `uint8` in the range `0..255` with a resolution of
`1 g/LSB`; a numeric value `n` represents `n g`.

### Exclusive stream profiles and tactile spatial coordinates

`omniglove_stream_config_t.stream_mode` selects an exclusive profile shared by
POSEDATA, POSTDATA, and REMOTEDATA. Interpret the mode together with `kind`; the
same number may define different complete profiles for different streams:

- `OMNIGLOVE_STREAM_MODE_DEFAULT` (0) is the default supported mode.
  POSEDATA/REMOTEDATA use DIRECT layout v3 and UDP `omniglove.stream.v4`;
  POSTDATA uses DIRECT layout v5 and UDP `omniglove.stream.v6`. POSEDATA always
  sets `omniglove_pose_data_t.tac_pos` to `NULL`.
- `OMNIGLOVE_STREAM_MODE_1` (1) is available only for POSEDATA and requires
  `OMNIGLOVE_POSE_COMPONENT_ALL`. It returns live tactile-point coordinates.
  Other stream kinds return
  `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED` for this mode.

A mode defines source/configuration semantics and the matching DIRECT, UDP, and
ROS 2 formats. Outputs do not select modes independently and modes cannot be
combined. Mode values are extensible, and callers must not treat the listed enum
constants as a closed set. Unknown values, undefined kind/mode combinations, and
unsupported modes return `OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`.

Mode 1 returns `omniglove_tactile_position_data_t` containing 746
`omniglove_tactile_point_position_t {x,y,z}` values. `points[i]` corresponds
one-to-one with global tactile index `i` in
[Tactile-Point Layout v1](./TACTILE_LAYOUT_V1.md). Read the existing 15 regions:
local index `k` in a global slice `[a,b)` reads the region's `data[k-1]` and
corresponds to `points[a+k-1]`. Select the layout matrix using the sample's `hand`.
The object and its data are borrowed for the callback duration; deep-copy them to retain
them. The structure reserves `coordinate_frame`, `unit`, and `reserved`. Mode 1
uses a right-handed wrist frame and meters. Invalid or unpaired frames are
dropped and counted instead of publishing zero or NaN placeholders.

`(POSEDATA, OMNIGLOVE_STREAM_MODE_1)` uses DIRECT layout v4 and UDP
`omniglove.stream.v5`, adding `data.tac_pos` beside `tactile` without changing
v4. ROS 2 mode 1 uses
`PoseTactilePositionSample` on the separate
`posedata_tactile_position_v1` topic.

## DIRECT output

`OMNIGLOVE_STREAM_OUTPUT_DIRECT` is the zero-valued default. Set a callback and
nonzero `callback_queue_capacity`, and leave all UDP fields zero. Callbacks are
serialized and do not occupy the device-data reception context. The sample,
discriminated-union pointers, and borrowed arrays are valid only during the
callback; deep-copy anything retained afterward.

### Configure and start a DIRECT stream

This example subscribes to pose and tactile from the same frame. `device` is a
borrowed handle obtained with `omniglove_session_device_at()` from an initialized
session. `on_sample` is an application-provided `omniglove_stream_callback_t`.

| DIRECT field | Meaning and rule |
|---|---|
| `callback` | Required data receiver with arguments `(sample, user_data)`. |
| `callback_user_data` | Optional application context passed unchanged as the callback's second argument; use `NULL` when unnecessary. The SDK neither copies nor frees the pointed-to object. |
| `callback_queue_capacity` | Required nonzero limit on samples waiting for the callback; new samples are dropped when full and counted in `callback_dropped_full`. |

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
    config.callback_user_data = app_context; /* Passed unchanged; may be NULL. */
    config.callback_queue_capacity = 32;
    /* Leave UDP-only fields zero. */

    omniglove_stream_error_t error =
        omniglove_device_stream_configure(device, &config);
    if (error != OMNIGLOVE_STREAM_ERROR_NONE) return error;
    return omniglove_device_stream_start(device, config.kind);
}
```

After the function returns `OMNIGLOVE_STREAM_ERROR_NONE`, the SDK calls
`on_sample` serially on that stream's worker thread. Stop from an application
thread with `omniglove_device_stream_stop(device, OMNIGLOVE_STREAM_POSE_DATA)`
and check its result. Keep the context alive while the stream or a callback is
active; restarting uses the existing configuration. Return promptly from
callbacks and synchronize any context shared across streams or with another thread.

For POST/REMOTE, change `kind`, set `pose_components=0`, and read the matching
`data.postdata`/`data.remotedata` in the callback. For pose-only or tactile-only
POSE, change `pose_components`. For live tactile coordinates, select
`OMNIGLOVE_STREAM_MODE_1` and retain `OMNIGLOVE_POSE_COMPONENT_ALL`.

Important continuity fields in `omniglove_stream_sample_t` are:

- `source_sequence`: SDK 64-bit host event sequence;
- `device_sequence`: device-provided data sequence, valid when
  `OMNIGLOVE_STREAM_SAMPLE_DEVICE_SEQUENCE_VALID` is set;
- `connection_generation`: connection generation;
- `gap_count`: items missing since this consumer's previous successful delivery;
- `sample_monotonic_ns`: host time when SDK reception and validation completed;
- `device_time_ms/device_time_us`: device UTC milliseconds and the `0..999`
  microsecond remainder.

POST keeps its `frame_id` in `omniglove_post_data_t.frame_id`; it is distinct
from `device_sequence`. `omniglove_post_data_t.reserved` preserves the raw
8-bit device value. Its current device-side interpretation is intentionally not
part of the API contract, and any value `0..255` is valid. REMOTE
`device_tick_ms` is device uptime.
`remote_hand` identifies the left or right remote, and `x_raw/y_raw` are 12-bit
ADC values in `0..4095`. In `button_bits`, bit 0 is joystick press, bit 1 is SW2,
and bit 2 is SW3. Protocol-reserved bits 3..7 are preserved for diagnostics and
never cause an otherwise valid frame to be rejected.

## UDP output

Select `OMNIGLOVE_STREAM_OUTPUT_UDP`, set IPv4, port, publisher queue, and
publish policy, and leave callback fields zero. Every datagram is one complete
UTF-8 JSON object: POSE/REMOTE use `omniglove.stream.v4`, while POST uses
`omniglove.stream.v6` and includes `data.reserved`. UDP and DIRECT are mutually exclusive
for a given device/kind. See [STREAM_DATA_V1.md](./STREAM_DATA_V1.md) for every
field.

`OMNIGLOVE_STREAM_RESERVED_1` is reserved and unsupported. Public
configure/start/stop/status return
`OMNIGLOVE_STREAM_ERROR_UNSUPPORTED`; do not use it as a stream capability.

Platform availability: Linux supports DIRECT and UDP. Windows supports DIRECT
only; the UDP enum is present, but configuring UDP consistently returns
`OMNIGLOVE_STREAM_ERROR_UNSUPPORTED` without starting data output.
This is not enabled network output.

### Configure and start a UDP stream (Linux)

This example publishes POSE pose and tactile to `127.0.0.1:45550`. The application
receives datagrams separately at that address. UDP-only fields are:

| Field | Meaning and rule |
|---|---|
| `destination_ipv4` / `destination_ipv4_size` | Destination IPv4 text and byte count, excluding the trailing NUL; at most 15 bytes. |
| `destination_port` | Required nonzero receiver port. |
| `publisher_queue_capacity` | Required nonzero sample capacity of the publishing queue; full-queue drops are counted in `dropped_full`. |
| `process_interval_ms` | 0 disables interval selection; a nonzero value selects new samples at least this many milliseconds apart without changing the device rate. |
| `publish_policy` | `OMNIGLOVE_PUBLISH_ON_NEW_SAMPLE` publishes each selected new sample once; `OMNIGLOVE_PUBLISH_FIXED_RATE_LATEST` publishes the latest sample on a schedule and can repeat it. |
| `publish_interval_ms` | Must be 0 for ON_NEW_SAMPLE or nonzero milliseconds for FIXED_RATE_LATEST. |

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
    config.destination_ipv4_size = sizeof(destination) - 1; /* Exclude NUL. */
    config.destination_port = 45550;
    config.publisher_queue_capacity = 32;
    /* Leave callback, callback_user_data, and callback_queue_capacity zero. */

    omniglove_stream_error_t error =
        omniglove_device_stream_configure(device, &config);
    if (error != OMNIGLOVE_STREAM_ERROR_NONE) return error;
    return omniglove_device_stream_start(device, config.kind);
}
```

Check the result and stop as in the DIRECT example. In default mode, to publish
the latest data every 20 ms, set
`publish_policy=OMNIGLOVE_PUBLISH_FIXED_RATE_LATEST` and `publish_interval_ms=20`.
POSE mode 1 supports only ON_NEW_SAMPLE for UDP, with both processing and
publishing intervals set to 0.

## Synchronous control and BONE

`omniglove_device_control()` performs one-shot operations such as POSE_INFO and
calibration blob/phase requests. These operations are serialized with stream
subscription changes. The calling thread waits for a terminal state and
must check both `omniglove_control_status_t` and the device `return_code`.

Read-only firmware information is available through:

```c
omniglove_firmware_info_t info = {0};
info.struct_size = sizeof(info);
omniglove_control_status_t status =
    omniglove_device_firmware_info(device, 1000, &info);
```

After `OMNIGLOVE_CONTROL_COMPLETE` with `info.return_code == 0`, callers may
read the firmware version components defined by the public structure, 16-byte
hardware version, 16-byte product name, and 32-byte device serial number. The final three are
fixed-width byte fields. They may contain NUL padding and need not end
in NUL; copy them using the public length constants before printing or converting
to strings. This call follows the timeout rules for synchronous controls.
`examples/firmware_info` is a complete example
using only the public C API.

The device serial number is read-only through the public API; the SDK provides
no public serial-number write operation.

`OMNIGLOVE_CONTROL_REMOTE_DATA` is reserved and always returns unsupported. The
REMOTE_DATA stream uses the layout defined
by the public structures.

BONE interface rules are:

- `omniglove_device_bone_read()` reads exactly 547 bytes of BONE v4;
- `omniglove_device_bone_write()` accepts exactly 547 bytes;
- the caller always owns the buffer.

Recommended shutdown order: stop the required streams (optional), then call
`omniglove_session_destroy(session)`. Before destruction, all concurrent stop
operations and calls using borrowed devices must have returned.
