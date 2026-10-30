# Omniglove Public Stream Layouts

This is the complete public stream layout contract. POSEDATA/REMOTEDATA use
DIRECT layout version 3 and UDP schema `omniglove.stream.v4`; POSTDATA uses
DIRECT layout version 5 and UDP schema `omniglove.stream.v6`. ROS 2 uses typed
messages documented in [ROS2_STREAM_DATA_V1.md](./ROS2_STREAM_DATA_V1.md).

DIRECT C structures and UTF-8 UDP JSON share field semantics
and named hand directories. JSON strings such as `"uint8[38]"` below are type
descriptions, not literal network values.

Device UTC fields are compatibility placeholders and may be zero. Do not use
them for synchronization, ordering, or latency; use `sample_monotonic_ns`.

## 1. Outputs and public streams

| C ABI `kind` | UDP `stream` | Meaning | DIRECT member |
|---|---|---|---|
| `OMNIGLOVE_STREAM_POSE_DATA` | `posedata` | device-solved pose, tactile, or both | `data.posedata` |
| `OMNIGLOVE_STREAM_POST_DATA` | `postdata` | device post-processing/IK joints and poses | `data.postdata` |
| `OMNIGLOVE_STREAM_REMOTE_DATA` | `remotedata` | remote hand, dual-axis ADC, and three buttons | `data.remotedata` |

DIRECT is the zero-valued default and is mutually exclusive with UDP for one
device/kind. DIRECT callbacks are serialized, and UDP publishing does not run on
the DIRECT callback thread.

## 2. DIRECT C ABI

POSEDATA and REMOTEDATA DIRECT callbacks use
`OMNIGLOVE_STREAM_LAYOUT_VERSION=3`. POSTDATA uses
`OMNIGLOVE_STREAM_POST_LAYOUT_VERSION=5`:

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
│   ├── const omniglove_pose_data_t   *posedata
│   ├── const omniglove_post_data_t   *postdata
│   └── const omniglove_remote_data_t *remotedata
├── uint64 device_time_ms
└── uint16 device_time_us
```

`data` is a discriminated union; read only the member selected by `kind`.
`flags` are:

- `OMNIGLOVE_STREAM_SAMPLE_DEVICE_ID_OPAQUE_TOKEN_HASH`: `device_id` is an
  opaque-token hash;
- `OMNIGLOVE_STREAM_SAMPLE_DEVICE_SEQUENCE_VALID`: `device_sequence` contains a
  valid device data-frame sequence;
- `OMNIGLOVE_STREAM_SAMPLE_DEVICE_TIME_VALID`: device time is valid. This does
  not mean device UTC is synchronized.

`device_sequence` is the device-provided data sequence.
`source_sequence` is the SDK's 64-bit host source-event sequence. `gap_count` is
the number of source events not delivered since this consumer's previous
successful delivery. Samples, union pointers, tactile pointers, and unmapped
pointers are borrowed during the callback and must be deep-copied to retain them.

### 2.1 Common tactile structures

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

When `mapped=1`, read named regions. Nonapplicable regions remain zero, such as
thumb `middle/root`. When `mapped=0`, named regions remain zero and raw bytes are
in `unmapped_data[unmapped_size]`. `count` is total tactile bytes.

Each tactile point is a `uint8` in the range `0..255` with a resolution of
`1 g/LSB`: a numeric value `n` represents `n g`, so the per-point range is
`0..255 g`. This applies to both named-region `data` and unmapped
`unmapped_data`. Here `g` denotes the gram scale for tactile load, not
gravitational acceleration.

`device_time_ms` is reserved for milliseconds since 1970-01-01 00:00:00 UTC;
`device_time_us` is reserved for the `0..999` microsecond remainder. Both may be
zero, and applications must not use their values.

## 3. UDP envelope

Each datagram contains one complete sample. POSEDATA and REMOTEDATA use
`omniglove.stream.v4`; POSTDATA uses `omniglove.stream.v6`:

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

| Metadata | Semantics |
|---|---|
| `hand` | glove product hand; distinct from REMOTEDATA `remote_hand` |
| `device_id` | protocol UID or SDK hash of an opaque token |
| `device_id_type` | identifies the source of `device_id` |
| `connection_generation` | reset consumer continuity state when this changes |
| `source_sequence` | 64-bit SDK host source-event sequence |
| `sample_monotonic_ns` | host monotonic time after receive/validation, not UTC |
| `gap_count` | source events missing since the previous delivered sample |
| `device_sequence` | integer when valid, otherwise JSON `null` |
| `device_time_ms/us` | reserved UTC values; zero is allowed when valid, otherwise JSON `null` |
| `source_payload_format` | source-format trace ID, not a JSON decoder switch |
| `publish_sequence` | UDP publisher sequence |
| `publish_monotonic_ns` | host monotonic time when preparing the datagram |

Nonfinite floats encode as JSON `null`, never `NaN` or `Infinity`. One JSON
datagram must not exceed the UDP payload maximum of 65,507 bytes.

| Stream/source | `source_payload_format` |
|---|---:|
| POSEDATA pose+tactile | `0x54315007` |
| POSEDATA pose-only | `0x54315008` |
| POSEDATA tactile-only | `0x54315009` |
| POSTDATA | `0x54314B02` |
| REMOTEDATA | `0x54314D02` |

JSON carries these as unsigned decimal integers; hexadecimal is shown only for
recognition.

## 4. 746-point tactile layout

The SDK applies this frozen slicing only for `T=746`; it does not guess regions
for other valid lengths `0<=T<=800`.
All 746 points use the per-point `0..255`, `1 g/LSB` value contract.
They are output contiguously through these 15 regions, each with local indices
starting independently at 1:

| Region | Count | Global half-open range |
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

UDP `data.tactile` is:

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

Rows and columns bound a sparse physical matrix; they need not multiply to
`count`. Zero matrix cells are empty; a positive number `k` is the one-based
local index in the current region, read as `data[k-1]`. Output arrays contain
only valid points, with no elements for empty cells. Valid sensors whose
measurement is zero are retained. For a global slice `[a,b)`, local index `k`
has global index `a+k-1`, paired with `tac_pos.points[a+k-1]` in POSE mode 1.
For example, `index.pad.data[0]` has global index 104.
Use the sample's `hand` to select the left or right matrix in
[TACTILE_LAYOUT_V1.md](./TACTILE_LAYOUT_V1.md). Both hands share region counts
and slices; use their respective indices for placement without reordering
the output array. See [Tactile-Point Mapping Images](./TACTILE_POINT_MAPPING_IMAGES.md)
for physical placement. This concatenation order is a public SDK output contract.

For `T!=746`, DIRECT sets `tactile.mapped=0` and exposes
`unmapped_data/unmapped_size`; UDP uses:

```json
{"unmapped": {"count": "T", "data": "uint8[T]"}}
```

## 6. POSEDATA

### 6.1 Data-section selection

`components` bit 0 is tactile and bit 1 is pose. Unselected sections are absent
from UDP JSON and must not be read from the DIRECT discriminated structure.
Combined selection gives pose and tactile the same `device_tick_ms`, so clients
need no cross-stream synchronization.

### 6.2 Pose nodes

```text
omniglove_pose_emf_t
├── int16 position_mm[3]
├── int16 yaw_pitch_roll_cdeg[3]
├── uint16 confidence_milli
├── uint8 valid
└── uint8 reserved

omniglove_pose_imu_t
├── int16 roll_pitch_yaw_cdeg[3]
├── uint8 flags
└── uint8 reserved

omniglove_pose_node_t
├── omniglove_pose_emf_t emf
└── omniglove_pose_imu_t imu
```

The six named nodes represent the five fingers and wrist;
`back_of_hand_imu` represents the back of the hand. IMU flag bit 0 means a
sample exists this tick; bit 1 means yaw is locked. `omniglove_pose_emf_t.reserved`
retains the protocol byte for diagnostics and never gates frame acceptance;
the IMU `reserved` member remains zero ABI padding.

### 6.3 DIRECT POSEDATA

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

`components` is a validity gate. Without pose, do not read six nodes or
back-of-hand IMU; without tactile, do not read `tactile`. Stable default mode
always sets `tac_pos=NULL`.

### 6.4 UDP POSEDATA

A pose node is:

```json
{
  "emf": {
    "position_mm": "int16[3]",
    "yaw_pitch_roll_cdeg": "int16[3]",
    "confidence_milli": "uint16",
    "valid": "boolean"
  },
  "imu": {"roll_pitch_yaw_cdeg": "int16[3]", "flags": "uint8"}
}
```

Combined data contains `device_tick_ms`, `components`, named
`thumb/index/middle/ring/pinky/wrist` PoseNodes, `back_of_hand.imu`, and the
section-4 `tactile` object. Tactile-only contains tick, components, and tactile;
pose-only omits tactile. For `T!=746`, only tactile falls back to unmapped. When
a complete named result cannot be formed safely, section 9 fallback applies.

### 6.5 Tactile spatial coordinates

Default mode keeps DIRECT `tac_pos=NULL` and omits UDP v4 `data.tac_pos`.
`(POSEDATA, OMNIGLOVE_STREAM_MODE_1)` requires `pose_components=ALL` and provides
746 `{x,y,z}` values. `points[i]` corresponds to flattened tactile point `i` in
section 4. Coordinates use meters in a right-handed wrist frame. DIRECT uses
layout v4; UDP uses `omniglove.stream.v5` and adds `data.tac_pos` beside tactile
without changing v4. Mode 1 is unsupported for other streams.

## 7. POSTDATA

`Pose6` contains `position_m:float32[3]` and
`quaternion_xyzw:float32[4]`. Joint order is five thumb joints, then four each
for index, middle, ring, and little fingers. Landmark order is Wrist, thumb
CMC..TIP, then MCP..TIP for each other finger. RX tip targets run thumb to little.

Named DIRECT/UDP semantics are:

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

`omniglove_post_data_t` also contains `mapped`, `device_tick_ms`, `flags`,
`frame_id`, `unmapped_data`, `unmapped_size`, and the raw 8-bit `reserved`
value. UDP has matching `thumb/index/middle/ring/pinky/wrist` objects plus tick,
flags, reserved, and frame ID;
`PostFinger` in examples denotes the object above, not a literal output string.

Flag bit 0 is IK converged, bit 1 wrist pose valid, and bit 2 skeleton model
valid. Flags guide field validity; the SDK does not drop an otherwise valid
sample only because a flag is clear. Undefined bits are preserved. `frame_id` is
the POST sample's 32-bit frame number and is distinct from metadata
`device_sequence`. `reserved` is preserved without assigning its current
device-side temporary interpretation to the stable API; every value is valid.
See [IK Data](./IK_DATA_DESCRIPTION.md) for coordinate,
joint, landmark, and handedness semantics.

## 8. REMOTEDATA

DIRECT `omniglove_remote_data_t` contains `mapped`, tick, `remote_hand`,
`button_bits`, unmapped pointer/size, and 32-bit `x_raw/y_raw`. UDP data contains
the same tick, `left|right`, buttons, and 16-bit axes. `metadata.hand` is the
glove product hand; `data.remote_hand` is the remote endpoint in this frame.
Protocol-reserved button bits 3..7 are retained and never gate frame acceptance.

## 9. Mapped/unmapped fallback

The SDK never guesses a named layout from current values or device identity.
When safe mapping is impossible, DIRECT sets `mapped=0`, points
`unmapped_data` at the complete uninterpreted source payload, and sets its
length. UDP uses:

```json
{"unmapped": {"count": "payload_size", "data": "uint8[payload_size]"}}
```

Top-level fallback applies whenever a named POSEDATA, POSTDATA, or REMOTEDATA
result cannot be formed safely. POSEDATA has a narrower
fallback: if the outer pose decodes but tactile length is not 746, only tactile
is unmapped and named pose nodes remain.

## 10. Lifecycle, queues, and platforms

```text
UNCONFIGURED --configure--> STOPPED --start--> RUNNING --stop--> STOPPED
```

- Samples are delivered only after start succeeds; a successful stop ends
  delivery, and repeated stops are idempotent.
- `source_timeout_ms` detects runtime silence; timeout is counted and the SDK
  restores the stream automatically.
- DIRECT and UDP use bounded queues. Status reports full-queue drops, callback
  discontinuities, publish failures, and high-water marks.
- `OMNIGLOVE_PUBLISH_ON_NEW_SAMPLE` publishes each selected new sample once.
  `OMNIGLOVE_PUBLISH_FIXED_RATE_LATEST` repeats the newest sample on a schedule,
  so datagrams may share source sequence/time but differ in publish sequence.
- Consumers should key continuity by
  `(device_id, connection_generation, stream)`.

Linux provides DIRECT and UDP. Windows provides DIRECT only; configuring UDP
consistently returns
`OMNIGLOVE_STREAM_ERROR_UNSUPPORTED` before source or publisher startup and is
not enabled network output. ROS 2 maps POSEDATA and POSTDATA, not REMOTEDATA.
