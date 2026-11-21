/*
 * Copyright (c) 2025 Agibot Co., Ltd.
 * Omniglove SDK is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 * PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *     http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 * NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE. See the
 * Mulan PSL v2 for more details. SPDX-License-Identifier: MulanPSL-2.0
 */

#ifndef AGILINK_OMNIGLOVE_PUBLIC_API_H
#define AGILINK_OMNIGLOVE_PUBLIC_API_H

#include <stddef.h>
#include <stdint.h>

#if defined(_WIN32)
#if defined(OMNIGLOVE_API_BUILD)
#define OMNIGLOVE_API __declspec(dllexport)
#else
#define OMNIGLOVE_API __declspec(dllimport)
#endif
#define OMNIGLOVE_CALL __cdecl
#else
#define OMNIGLOVE_API __attribute__((visibility("default")))
#define OMNIGLOVE_CALL
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct omniglove_session omniglove_session_t;
typedef struct omniglove_device omniglove_device_t;
typedef struct omniglove_init_report omniglove_init_report_t;

typedef enum omniglove_error {
    OMNIGLOVE_ERROR_NONE = 0,
    OMNIGLOVE_ERROR_INVALID_CONFIGURATION,
    OMNIGLOVE_ERROR_INVALID_ARGUMENT,
    OMNIGLOVE_ERROR_OPEN_FAILED,
    OMNIGLOVE_ERROR_NOT_OPEN,
    OMNIGLOVE_ERROR_READ_TIMEOUT,
    OMNIGLOVE_ERROR_READ_FAILED,
    OMNIGLOVE_ERROR_WRITE_FAILED,
    OMNIGLOVE_ERROR_CLOSE_FAILED,
    OMNIGLOVE_ERROR_DEVICE_NOT_FOUND,
    OMNIGLOVE_ERROR_PERMISSION_DENIED,
    OMNIGLOVE_ERROR_BUSY,
    OMNIGLOVE_ERROR_CLAIM_FAILED,
    OMNIGLOVE_ERROR_DEVICE_REMOVED,
    OMNIGLOVE_ERROR_TRANSFER_STALL,
    OMNIGLOVE_ERROR_UNSUPPORTED,
    OMNIGLOVE_ERROR_WRITE_TIMEOUT,
    OMNIGLOVE_ERROR_PROBE_TIMEOUT,
    OMNIGLOVE_ERROR_PROTOCOL_MISMATCH,
    OMNIGLOVE_ERROR_INITIALIZATION_FAILED,
    OMNIGLOVE_ERROR_CANCELLED,
    OMNIGLOVE_ERROR_OUT_OF_RANGE,
} omniglove_error_t;

typedef enum omniglove_init_outcome {
    OMNIGLOVE_INIT_SUCCESS = 0,
    OMNIGLOVE_INIT_PARTIAL_SUCCESS,
    OMNIGLOVE_INIT_NO_DEVICE,
    OMNIGLOVE_INIT_ALL_FAILED,
    OMNIGLOVE_INIT_CANCELLED,
} omniglove_init_outcome_t;

typedef enum omniglove_probe_status {
    OMNIGLOVE_PROBE_MATCH = 0,
    OMNIGLOVE_PROBE_REJECTED,
    OMNIGLOVE_PROBE_MALFORMED,
    OMNIGLOVE_PROBE_TIMEOUT,
    OMNIGLOVE_PROBE_TRANSPORT_ERROR,
    OMNIGLOVE_PROBE_PROTOCOL_ERROR,
    OMNIGLOVE_PROBE_INVALID_ARGUMENT,
} omniglove_probe_status_t;

typedef enum omniglove_hand {
    OMNIGLOVE_HAND_UNKNOWN = 0,
    OMNIGLOVE_HAND_LEFT = 1,
    OMNIGLOVE_HAND_RIGHT = 2,
} omniglove_hand_t;

typedef enum omniglove_stream_kind {
    /* Reserved stream identifier. Public calls return UNSUPPORTED. */
    OMNIGLOVE_STREAM_RESERVED_1 = 1,
    OMNIGLOVE_STREAM_POSE_DATA = 2,
    OMNIGLOVE_STREAM_POST_DATA = 3,
    OMNIGLOVE_STREAM_REMOTE_DATA = 4,
} omniglove_stream_kind_t;

#define OMNIGLOVE_POSE_COMPONENT_TACTILE (1u << 0u)
#define OMNIGLOVE_POSE_COMPONENT_POSE (1u << 1u)
#define OMNIGLOVE_POSE_COMPONENT_ALL \
    (OMNIGLOVE_POSE_COMPONENT_TACTILE | OMNIGLOVE_POSE_COMPONENT_POSE)

typedef enum omniglove_publish_policy {
    OMNIGLOVE_PUBLISH_ON_NEW_SAMPLE = 0,
    OMNIGLOVE_PUBLISH_FIXED_RATE_LATEST = 1,
} omniglove_publish_policy_t;

/* Zero is deliberately the in-process path so a zero-initialized config does
 * not send device data over the network. Exactly one output is active for a
 * configured stream. */
typedef enum omniglove_stream_output_mode {
    OMNIGLOVE_STREAM_OUTPUT_DIRECT = 0,
    OMNIGLOVE_STREAM_OUTPUT_UDP = 1,
} omniglove_stream_output_mode_t;

typedef enum omniglove_stream_state {
    OMNIGLOVE_STREAM_UNCONFIGURED = 0,
    OMNIGLOVE_STREAM_STOPPED,
    OMNIGLOVE_STREAM_RUNNING,
    OMNIGLOVE_STREAM_PUBLISH_FAILED,
} omniglove_stream_state_t;

typedef enum omniglove_stream_error {
    OMNIGLOVE_STREAM_ERROR_NONE = 0,
    OMNIGLOVE_STREAM_ERROR_INVALID_ARGUMENT,
    OMNIGLOVE_STREAM_ERROR_NOT_CONFIGURED,
    OMNIGLOVE_STREAM_ERROR_BUSY,
    OMNIGLOVE_STREAM_ERROR_SOURCE_START_FAILED,
    OMNIGLOVE_STREAM_ERROR_PUBLISHER_OPEN_FAILED,
    OMNIGLOVE_STREAM_ERROR_SOURCE_CONFIGURATION_FAILED,
    OMNIGLOVE_STREAM_ERROR_PUBLISH_FAILED,
    OMNIGLOVE_STREAM_ERROR_WORKER_START_FAILED,
    OMNIGLOVE_STREAM_ERROR_TOO_MANY_SUBSCRIBERS,
    /* The requested mode is unknown or unsupported for this stream kind. */
    OMNIGLOVE_STREAM_ERROR_UNSUPPORTED,
} omniglove_stream_error_t;

typedef enum omniglove_stream_mode {
    /* Preserve the first-release behavior for the selected stream kind. */
    OMNIGLOVE_STREAM_MODE_DEFAULT = 0,
    /* Kind-specific profile. For POSE_DATA this adds 746 tactile XYZ points
     * and requires OMNIGLOVE_POSE_COMPONENT_ALL. */
    OMNIGLOVE_STREAM_MODE_1 = 1,
} omniglove_stream_mode_t;

typedef enum omniglove_tactile_position_coordinate_frame {
    /* The tactile-position mode requires a nonzero frame before output. */
    OMNIGLOVE_TACTILE_POSITION_FRAME_UNSPECIFIED = 0,
    /* Right-handed coordinates in metres, relative to the unrotated wrist. */
    OMNIGLOVE_TACTILE_POSITION_FRAME_WRIST = 1,
} omniglove_tactile_position_coordinate_frame_t;

typedef enum omniglove_tactile_position_unit {
    OMNIGLOVE_TACTILE_POSITION_UNIT_UNSPECIFIED = 0,
    OMNIGLOVE_TACTILE_POSITION_UNIT_METER = 1,
} omniglove_tactile_position_unit_t;

typedef enum omniglove_stream_source_status {
    OMNIGLOVE_STREAM_SOURCE_NONE = 0,
    OMNIGLOVE_STREAM_SOURCE_COMPLETE,
    OMNIGLOVE_STREAM_SOURCE_NO_DATA,
    OMNIGLOVE_STREAM_SOURCE_DEVICE_ERROR,
    OMNIGLOVE_STREAM_SOURCE_MALFORMED,
    OMNIGLOVE_STREAM_SOURCE_TIMEOUT,
    OMNIGLOVE_STREAM_SOURCE_CANCELLED,
    OMNIGLOVE_STREAM_SOURCE_WRITE_FAILED,
    OMNIGLOVE_STREAM_SOURCE_TRANSPORT_ERROR,
    OMNIGLOVE_STREAM_SOURCE_RELIABLE_QUEUE_OVERFLOW,
    OMNIGLOVE_STREAM_SOURCE_BUFFER_TOO_SMALL,
    OMNIGLOVE_STREAM_SOURCE_UNSUPPORTED,
    OMNIGLOVE_STREAM_SOURCE_STOPPED,
} omniglove_stream_source_status_t;

typedef enum omniglove_control_kind {
    OMNIGLOVE_CONTROL_POSE_INFO = 0,
    OMNIGLOVE_CONTROL_CALIBRATION_BLOB_WRITE,
    OMNIGLOVE_CONTROL_CALIBRATION_BLOB_READ,
    OMNIGLOVE_CONTROL_CALIBRATION_PHASE_WRITE,
    OMNIGLOVE_CONTROL_CALIBRATION_PHASE_READ,
    OMNIGLOVE_CONTROL_REMOTE_DATA,
    OMNIGLOVE_CONTROL_BONE_READ,
    OMNIGLOVE_CONTROL_BONE_WRITE,
} omniglove_control_kind_t;

typedef enum omniglove_control_status {
    OMNIGLOVE_CONTROL_COMPLETE = 0,
    OMNIGLOVE_CONTROL_DEVICE_ERROR,
    OMNIGLOVE_CONTROL_MALFORMED,
    OMNIGLOVE_CONTROL_TIMEOUT,
    OMNIGLOVE_CONTROL_CANCELLED,
    OMNIGLOVE_CONTROL_WRITE_FAILED,
    OMNIGLOVE_CONTROL_TRANSPORT_ERROR,
    OMNIGLOVE_CONTROL_RELIABLE_QUEUE_OVERFLOW,
    OMNIGLOVE_CONTROL_UNSUPPORTED,
    OMNIGLOVE_CONTROL_STOPPED,
    OMNIGLOVE_CONTROL_SUBMISSION_FAILED,
    OMNIGLOVE_CONTROL_INVALID_ARGUMENT,
    OMNIGLOVE_CONTROL_BUFFER_TOO_SMALL,
} omniglove_control_status_t;

/* DIRECT callbacks carry the typed structures below. Default POSEDATA and
 * REMOTEDATA use layout v3 / UDP omniglove.stream.v4. POSTDATA uses layout v5
 * / UDP omniglove.stream.v6. POSEDATA mode 1 uses layout v4 / UDP v5. */
#define OMNIGLOVE_STREAM_LAYOUT_VERSION 3u
/* POSEDATA mode-1 samples with tactile positions use this layout version. */
#define OMNIGLOVE_STREAM_TACTILE_POSITION_LAYOUT_VERSION 4u
/* POSTDATA samples that expose the raw protocol reserved byte use this. */
#define OMNIGLOVE_STREAM_POST_LAYOUT_VERSION 5u
#define OMNIGLOVE_TACTILE_POINT_COUNT 746u
#define OMNIGLOVE_STREAM_SAMPLE_DEVICE_ID_OPAQUE_TOKEN_HASH (1u << 0u)
#define OMNIGLOVE_STREAM_SAMPLE_DEVICE_SEQUENCE_VALID (1u << 1u)
#define OMNIGLOVE_STREAM_SAMPLE_DEVICE_TIME_VALID (1u << 2u)

typedef struct omniglove_tactile_region {
    uint32_t rows;
    uint32_t columns;
    uint32_t count;
    const uint8_t* data;
} omniglove_tactile_region_t;

typedef struct omniglove_tactile_finger {
    omniglove_tactile_region_t tip;
    omniglove_tactile_region_t pad;
    omniglove_tactile_region_t middle;
    omniglove_tactile_region_t root;
} omniglove_tactile_finger_t;

typedef struct omniglove_tactile_data {
    uint32_t mapped;
    uint32_t count;
    omniglove_tactile_finger_t thumb;
    omniglove_tactile_finger_t index;
    omniglove_tactile_finger_t middle;
    omniglove_tactile_finger_t ring;
    omniglove_tactile_finger_t pinky;
    omniglove_tactile_region_t palm_surface;
    const uint8_t* unmapped_data;
    uint32_t unmapped_size;
} omniglove_tactile_data_t;

typedef struct omniglove_tactile_point_position {
    float x;
    float y;
    float z;
} omniglove_tactile_point_position_t;

typedef struct omniglove_tactile_position_data {
    /* Must equal OMNIGLOVE_TACTILE_POINT_COUNT for the mapped v1 layout. */
    uint32_t count;
    uint32_t coordinate_frame;
    uint32_t unit;
    uint32_t reserved;
    /* points[i] corresponds to flattened tactile point i. */
    omniglove_tactile_point_position_t points[OMNIGLOVE_TACTILE_POINT_COUNT];
} omniglove_tactile_position_data_t;

typedef struct omniglove_pose_emf {
    int16_t position_mm[3];
    int16_t yaw_pitch_roll_cdeg[3];
    uint16_t confidence_milli;
    uint8_t valid;
    /* Raw protocol reserved byte, retained for diagnostics. */
    uint8_t reserved;
} omniglove_pose_emf_t;

typedef struct omniglove_pose_imu {
    int16_t roll_pitch_yaw_cdeg[3];
    uint8_t flags;
    uint8_t reserved;
} omniglove_pose_imu_t;

typedef struct omniglove_pose_node {
    omniglove_pose_emf_t emf;
    omniglove_pose_imu_t imu;
} omniglove_pose_node_t;

typedef struct omniglove_pose_data {
    uint32_t mapped;
    /* OMNIGLOVE_POSE_COMPONENT_* sections present in this sample. */
    uint32_t components;
    uint32_t device_tick_ms;
    omniglove_pose_node_t thumb;
    omniglove_pose_node_t index;
    omniglove_pose_node_t middle;
    omniglove_pose_node_t ring;
    omniglove_pose_node_t pinky;
    omniglove_pose_node_t wrist;
    omniglove_pose_imu_t back_of_hand_imu;
    omniglove_tactile_data_t tactile;
    const uint8_t* unmapped_data;
    uint32_t unmapped_size;
    /* NULL in OMNIGLOVE_STREAM_MODE_DEFAULT. In the
     * (POSE_DATA, OMNIGLOVE_STREAM_MODE_1) profile, this borrowed object has
     * the same callback lifetime as the containing POSEDATA sample. */
    const omniglove_tactile_position_data_t* tac_pos;
} omniglove_pose_data_t;

typedef struct omniglove_pose6 {
    float position_m[3];
    float quaternion_xyzw[4];
} omniglove_pose6_t;

typedef struct omniglove_post_thumb_joints {
    float cmc_rotation;
    float cmc_abduction;
    float cmc_flexion;
    float mcp_flexion;
    float ip_flexion;
} omniglove_post_thumb_joints_t;

typedef struct omniglove_post_finger_joints {
    float mcp_abduction;
    float mcp_flexion;
    float pip_flexion;
    float dip_flexion;
} omniglove_post_finger_joints_t;

typedef struct omniglove_post_thumb_landmarks {
    omniglove_pose6_t cmc;
    omniglove_pose6_t mcp;
    omniglove_pose6_t ip;
    omniglove_pose6_t tip;
} omniglove_post_thumb_landmarks_t;

typedef struct omniglove_post_finger_landmarks {
    omniglove_pose6_t mcp;
    omniglove_pose6_t pip;
    omniglove_pose6_t dip;
    omniglove_pose6_t tip;
} omniglove_post_finger_landmarks_t;

typedef struct omniglove_post_thumb {
    omniglove_post_thumb_joints_t joints_rad;
    omniglove_post_thumb_landmarks_t landmarks;
    omniglove_pose6_t rx_tip_target;
} omniglove_post_thumb_t;

typedef struct omniglove_post_finger {
    omniglove_post_finger_joints_t joints_rad;
    omniglove_post_finger_landmarks_t landmarks;
    omniglove_pose6_t rx_tip_target;
} omniglove_post_finger_t;

typedef struct omniglove_post_wrist {
    omniglove_pose6_t landmark;
    float quaternion_xyzw[4];
} omniglove_post_wrist_t;

typedef struct omniglove_post_data {
    uint32_t mapped;
    uint32_t device_tick_ms;
    uint32_t flags;
    uint32_t frame_id;
    omniglove_post_thumb_t thumb;
    omniglove_post_finger_t index;
    omniglove_post_finger_t middle;
    omniglove_post_finger_t ring;
    omniglove_post_finger_t pinky;
    omniglove_post_wrist_t wrist;
    const uint8_t* unmapped_data;
    uint32_t unmapped_size;
    /* Raw protocol reserved byte. Its current device-side meaning is not part
     * of this API contract; consumers may retain or inspect the value. */
    uint8_t reserved;
} omniglove_post_data_t;

typedef struct omniglove_remote_data {
    uint32_t mapped;
    uint32_t device_tick_ms;
    /* omniglove_hand_t decoded from protocol 'L'/'R'. */
    uint32_t remote_hand;
    /* bit0 joystick press, bit1 SW2, bit2 SW3; protocol-reserved bits 3..7
     * are retained for diagnostics, and bits 8..31 are zero. */
    uint32_t button_bits;
    const uint8_t* unmapped_data;
    uint32_t unmapped_size;
    /* Raw 12-bit ADC values; protocol range is 0..4095. */
    uint32_t x_raw;
    uint32_t y_raw;
} omniglove_remote_data_t;

typedef union omniglove_stream_data {
    const omniglove_pose_data_t* posedata;
    const omniglove_post_data_t* postdata;
    const omniglove_remote_data_t* remotedata;
    const void* value;
} omniglove_stream_data_t;

typedef struct omniglove_stream_sample {
    uint32_t struct_size;
    uint32_t kind;
    uint32_t hand;
    uint32_t flags;
    uint32_t layout_version;
    /* Valid only when DEVICE_SEQUENCE_VALID is set in flags. */
    uint32_t device_sequence;
    uint64_t device_id;
    uint64_t connection_generation;
    uint64_t source_sequence;
    uint64_t sample_monotonic_ns;
    uint64_t gap_count;
    omniglove_stream_data_t data;
    /* Valid when OMNIGLOVE_STREAM_SAMPLE_DEVICE_TIME_VALID is set. time_ms is
     * UTC milliseconds since 1970-01-01; time_us is the 0..999 microsecond
     * remainder within that millisecond. */
    uint64_t device_time_ms;
    uint16_t device_time_us;
    uint16_t reserved_time0;
    uint32_t reserved_time1;
} omniglove_stream_sample_t;

/* Called serially on a dedicated stream worker. sample and its selected data
 * pointer are borrowed and valid only for the duration of the callback. The
 * callback may call omniglove_device_stream_stop() for its own stream. */
typedef void(OMNIGLOVE_CALL* omniglove_stream_callback_t)(
    const omniglove_stream_sample_t* sample, void* user_data);

typedef struct omniglove_stream_config {
    uint32_t struct_size;
    uint32_t kind;
    uint32_t output_mode;
    uint32_t source_interval_ms;
    /* Subscription activation/stop and source-silence timeout. */
    uint32_t source_timeout_ms;
    /* POSE_DATA only: OMNIGLOVE_POSE_COMPONENT_* bit mask. Other streams
     * require zero. */
    uint32_t pose_components;
    /* DIRECT mode only. UDP fields must remain zero/NULL. */
    omniglove_stream_callback_t callback;
    /* Optional application context passed unchanged as callback user_data.
     * Borrowed, not copied or freed; keep alive while callbacks can run. */
    void* callback_user_data;
    uint32_t callback_queue_capacity;
    /* omniglove_stream_mode_t. Zero preserves the current format and behavior
     * for every public stream kind. Nonzero modes are kind-specific, mutually
     * exclusive stream profiles and apply to every output representation. */
    uint32_t stream_mode;
    /* UDP mode only. Callback fields must remain zero/NULL. */
    uint32_t process_interval_ms;
    uint32_t publish_policy;
    uint32_t publish_interval_ms;
    const char* destination_ipv4;
    uint32_t destination_ipv4_size;
    uint16_t destination_port;
    uint16_t reserved;
    uint32_t publisher_queue_capacity;
} omniglove_stream_config_t;

typedef struct omniglove_stream_status {
    uint32_t struct_size;
    uint32_t state;
    uint32_t last_error;
    uint32_t output_mode;
    uint64_t source_events;
    uint64_t source_samples;
    uint64_t source_no_data;
    uint64_t source_timeouts;
    uint64_t source_errors;
    uint64_t processed_samples;
    uint64_t process_decimated_samples;
    uint64_t enqueued;
    uint64_t dropped_full;
    uint64_t published;
    uint64_t publish_failures;
    uint64_t decimated_samples;
    uint64_t invalid_samples;
    uint64_t queue_high_watermark;
    uint64_t last_source_sequence;
    uint64_t last_publish_sequence;
    uint64_t first_sample_monotonic_ns;
    uint64_t last_sample_monotonic_ns;
    uint64_t first_source_event_monotonic_ns;
    uint64_t last_source_event_monotonic_ns;
    uint64_t first_processed_monotonic_ns;
    uint64_t last_processed_monotonic_ns;
    uint64_t first_publish_monotonic_ns;
    uint64_t last_publish_monotonic_ns;
    uint64_t actual_source_rate_millihz;
    uint64_t actual_process_rate_millihz;
    uint64_t actual_publish_rate_millihz;
    /* Host sequence assigned to every terminal source event, including
     * subscription and source-silence failures. */
    uint64_t first_source_event_sequence;
    uint64_t last_source_event_sequence;
    /* Zero when an asynchronous source event has no host request. */
    uint64_t last_source_request_id;
    uint64_t last_source_connection_generation;
    uint32_t last_source_status;
    /* Device protocol sequence; zero if not applicable. */
    uint32_t last_source_protocol_sequence;
    uint64_t source_device_errors;
    uint64_t source_malformed;
    uint64_t source_cancelled;
    uint64_t source_write_failed;
    uint64_t source_transport_errors;
    uint64_t source_reliable_overflows;
    uint64_t source_buffer_too_small;
    uint64_t source_unsupported;
    uint64_t source_stopped;
    /* DIRECT-mode queue/callback counters. */
    uint64_t callback_accepted;
    uint64_t callback_enqueued;
    uint64_t callback_delivered;
    uint64_t callback_dropped_full;
    uint64_t callback_discontinuities;
    uint64_t callback_queue_high_watermark;
    uint64_t callback_last_accepted_sequence;
    uint64_t callback_last_delivered_sequence;
    /* The configured omniglove_stream_mode_t. */
    uint32_t stream_mode;
    uint32_t reserved_mode;
} omniglove_stream_status_t;

typedef struct omniglove_calibration_blob {
    float tx_matrix[9];
    float rx_matrix[54];
    float dist_r0[6];
    float dist_g0[6];
    float dist_n[6];
    uint32_t dist_valid;
} omniglove_calibration_blob_t;

typedef struct omniglove_calibration_phase {
    uint32_t valid;
    uint32_t hand;
    float phase_x;
    float phase_y;
    float phase_z;
} omniglove_calibration_phase_t;

typedef struct omniglove_control_request {
    uint32_t struct_size;
    uint32_t kind;
    uint32_t pose_info_type;
    uint32_t reserved;
    omniglove_calibration_blob_t calibration_blob;
    /* Ignored for OMNIGLOVE_CONTROL_CALIBRATION_PHASE_WRITE. The device
     * captures and stores the current phase from its latest complete frame. */
    omniglove_calibration_phase_t calibration_phase;
} omniglove_control_request_t;

typedef struct omniglove_control_result {
    uint32_t struct_size;
    uint32_t kind;
    uint32_t status;
    uint32_t hand;
    uint64_t request_id;
    uint64_t connection_generation;
    uint64_t completed_monotonic_ns;
    uint32_t protocol_sequence;
    uint32_t return_code;
    uint32_t device_error_code;
    uint32_t node_count;
    uint32_t nominal_source_rate_hz;
    uint32_t calibration_state;
    uint32_t max_distance_mm;
    uint32_t capability_flags;
    uint32_t remote_hand;
    uint32_t remote_buttons;
    omniglove_calibration_blob_t calibration_blob;
    omniglove_calibration_phase_t calibration_phase;
} omniglove_control_result_t;

#define OMNIGLOVE_FIRMWARE_VERSION_COMPONENT_COUNT 4u
#define OMNIGLOVE_HARDWARE_VERSION_SIZE 16u
#define OMNIGLOVE_PRODUCT_NAME_SIZE 16u
#define OMNIGLOVE_DEVICE_SN_SIZE 32u

/* Fixed-width read-only firmware information. Text fields may contain NUL
 * padding and are not guaranteed to end in NUL. */
typedef struct omniglove_firmware_info {
    uint32_t struct_size;
    uint32_t return_code;
    uint32_t device_error_code;
    uint32_t protocol_sequence;
    uint64_t request_id;
    uint64_t connection_generation;
    uint64_t completed_monotonic_ns;
    uint8_t loader_software_version[OMNIGLOVE_FIRMWARE_VERSION_COMPONENT_COUNT];
    uint8_t app_software_version[OMNIGLOVE_FIRMWARE_VERSION_COMPONENT_COUNT];
    uint8_t hardware_version[OMNIGLOVE_HARDWARE_VERSION_SIZE];
    uint8_t product_name[OMNIGLOVE_PRODUCT_NAME_SIZE];
    uint8_t device_sn[OMNIGLOVE_DEVICE_SN_SIZE];
} omniglove_firmware_info_t;

/* T1.5 BONE v4 has one fixed 547-byte payload and carries no URDF tail. */
#define OMNIGLOVE_BONE_MAX_SIZE 547u

typedef struct omniglove_device_selector {
    uint32_t struct_size;
    uint32_t has_device_uid;
    uint64_t device_uid;
    const char* opaque_token;
    /* Byte count excluding any trailing NUL; maximum 256. */
    uint32_t opaque_token_size;
} omniglove_device_selector_t;

typedef struct omniglove_init_options {
    uint32_t struct_size;
    const omniglove_device_selector_t* selector;
} omniglove_init_options_t;

typedef struct omniglove_candidate_result {
    uint32_t struct_size;
    uint32_t probe_status;
    uint32_t error;
    uint32_t has_device_uid;
    uint64_t device_uid;
    uint32_t selector_matched;
    uint32_t initialized;
} omniglove_candidate_result_t;

#define OMNIGLOVE_ABI_VERSION_MAJOR 6u
#define OMNIGLOVE_ABI_VERSION_MINOR 0u
#define OMNIGLOVE_ABI_VERSION_PATCH 0u
#define OMNIGLOVE_ABI_VERSION                         \
    ((uint32_t)((OMNIGLOVE_ABI_VERSION_MAJOR << 16) | \
                (OMNIGLOVE_ABI_VERSION_MINOR << 8) |  \
                OMNIGLOVE_ABI_VERSION_PATCH))

/**
 * @brief Discovers and initializes supported Omniglove devices.
 *
 * When @p options is NULL, the SDK automatically discovers and initializes
 * every supported device. When a selector is supplied, only matching devices
 * are considered. Every returned device is owned by the returned session.
 *
 * @param[in] options Optional initialization options. A non-NULL structure
 *                    must be zero-initialized with struct_size set.
 * @param[out] session_out Receives the owning session handle, or NULL when no
 *                         session could be created. Must not be NULL.
 * @param[out] report_out Optionally receives an initialization report. Destroy
 *                        it with omniglove_init_report_destroy().
 * @return OMNIGLOVE_ERROR_NONE on complete success; otherwise a structured
 *         error describing the initialization result. Inspect @p report_out
 *         when supplied for aggregate and per-candidate details.
 * @note Both output handles are set to NULL before validation and remain NULL
 *       unless ownership is returned to the caller.
 */
OMNIGLOVE_API omniglove_error_t OMNIGLOVE_CALL omniglove_initialize(
    const omniglove_init_options_t* options, omniglove_session_t** session_out,
    omniglove_init_report_t** report_out);

/**
 * @brief Stops and destroys an Omniglove session.
 * @param[in] session Session to destroy, or NULL for no operation.
 * @note Call only after every concurrent stop operation and every user of a
 *       borrowed device handle has returned. All device handles borrowed from
 *       the session become invalid when this function returns.
 */
OMNIGLOVE_API void OMNIGLOVE_CALL
omniglove_session_destroy(omniglove_session_t* session);

/**
 * @brief Stops all devices and streams owned by a session.
 * @param[in,out] session Session to stop.
 * @return OMNIGLOVE_ERROR_NONE when stopped successfully; otherwise a
 *         structured lifecycle error. A NULL session returns
 *         OMNIGLOVE_ERROR_INVALID_ARGUMENT.
 * @note Concurrent calls for one session are serialized and repeated calls
 *       are idempotent.
 */
OMNIGLOVE_API omniglove_error_t OMNIGLOVE_CALL
omniglove_session_stop(omniglove_session_t* session);

/**
 * @brief Returns the number of initialized devices in a session.
 * @param[in] session Session to inspect.
 * @return The device count, or 0 when @p session is NULL.
 */
OMNIGLOVE_API size_t OMNIGLOVE_CALL
omniglove_session_device_count(const omniglove_session_t* session);

/**
 * @brief Returns one initialized device from a session.
 * @param[in,out] session Owning session.
 * @param[in] index Zero-based device index.
 * @return A borrowed device handle, or NULL when the session is NULL or the
 *         index is out of range.
 * @note The handle remains valid only while its owning session is alive and
 *       must not be destroyed by the caller.
 */
OMNIGLOVE_API omniglove_device_t* OMNIGLOVE_CALL
omniglove_session_device_at(omniglove_session_t* session, size_t index);

/**
 * @brief Returns the protocol device UID when one is available.
 * @param[in] device Device to inspect.
 * @return The protocol UID, or 0 when the product has no numeric UID or the
 *         handle is invalid. Use omniglove_device_opaque_token() when the
 *         product is identified by an opaque token.
 */
OMNIGLOVE_API uint64_t OMNIGLOVE_CALL
omniglove_device_uid(const omniglove_device_t* device);

/**
 * @brief Copies the stable SDK product profile key for a device.
 * @param[in] device Device to inspect.
 * @param[out] output Destination buffer, or NULL to query the required size.
 * @param[in] output_size Destination capacity in bytes.
 * @return The required size including the trailing NUL, or 0 for an invalid
 *         device handle.
 * @note When a nonempty destination is supplied, the result is always
 *       NUL-terminated and may be truncated. Compare the return value with
 *       @p output_size to detect truncation.
 */
OMNIGLOVE_API size_t OMNIGLOVE_CALL omniglove_device_product_key(
    const omniglove_device_t* device, char* output, size_t output_size);

/**
 * @brief Copies the opaque discovery token for a device.
 * @param[in] device Device to inspect.
 * @param[out] output Destination buffer, or NULL to query the required size.
 * @param[in] output_size Destination capacity in bytes.
 * @return The required size including the trailing NUL, or 0 for an invalid
 *         device handle.
 * @note The token may be used in omniglove_device_selector_t for later device
 *       selection. When a nonempty destination is supplied, it is always
 *       NUL-terminated and may be truncated.
 */
OMNIGLOVE_API size_t OMNIGLOVE_CALL omniglove_device_opaque_token(
    const omniglove_device_t* device, char* output, size_t output_size);

/**
 * @brief Returns the protocol-reported hand side of a device.
 * @param[in] device Device to inspect.
 * @return OMNIGLOVE_HAND_LEFT, OMNIGLOVE_HAND_RIGHT, or
 *         OMNIGLOVE_HAND_UNKNOWN when unknown or invalid.
 */
OMNIGLOVE_API omniglove_hand_t OMNIGLOVE_CALL
omniglove_device_hand(const omniglove_device_t* device);

/**
 * @brief Returns the nominal source sample rate of a device.
 * @param[in] device Device to inspect.
 * @return The nominal rate in hertz, or 0 when unavailable or invalid.
 */
OMNIGLOVE_API uint32_t OMNIGLOVE_CALL
omniglove_device_nominal_source_rate_hz(const omniglove_device_t* device);

/**
 * @brief Queries read-only firmware and product information.
 * @param[in,out] device Device to query.
 * @param[in] timeout_ms Positive transaction timeout in milliseconds.
 * @param[in,out] output Receives Loader/APP versions, hardware version,
 *                       product name, device serial number, and transaction
 *                       metadata. Set struct_size before calling.
 * @return OMNIGLOVE_CONTROL_COMPLETE when the response is valid; otherwise a
 *         structured control status. Also inspect output->return_code when
 *         the operation completes.
 * @note Fixed-width text fields may contain NUL padding and are not guaranteed
 *       to end in NUL.
 */
OMNIGLOVE_API omniglove_control_status_t OMNIGLOVE_CALL
omniglove_device_firmware_info(omniglove_device_t* device, uint32_t timeout_ms,
                               omniglove_firmware_info_t* output);

/**
 * @brief Configures one device stream and exactly one output path.
 * @param[in,out] device Device whose stream is configured.
 * @param[in] config Stream kind, profile, timing, and DIRECT or UDP output
 *                   settings. Set struct_size before calling.
 * @return OMNIGLOVE_STREAM_ERROR_NONE on success; otherwise a structured
 *         stream error.
 * @note DIRECT is the zero-valued default and invokes config->callback with a
 *       borrowed validated sample. UDP must be selected explicitly. A stream
 *       may be reconfigured only while stopped.
 */
OMNIGLOVE_API omniglove_stream_error_t OMNIGLOVE_CALL
omniglove_device_stream_configure(omniglove_device_t* device,
                                  const omniglove_stream_config_t* config);

/**
 * @brief Starts a configured device stream.
 * @param[in,out] device Device that owns the stream.
 * @param[in] kind One omniglove_stream_kind_t value.
 * @return OMNIGLOVE_STREAM_ERROR_NONE after the source is active; otherwise a
 *         structured stream error.
 * @note A failed or timed-out start does not enter the running state.
 */
OMNIGLOVE_API omniglove_stream_error_t OMNIGLOVE_CALL
omniglove_device_stream_start(omniglove_device_t* device, uint32_t kind);

/**
 * @brief Stops a configured device stream.
 * @param[in,out] device Device that owns the stream.
 * @param[in] kind One omniglove_stream_kind_t value.
 * @return OMNIGLOVE_STREAM_ERROR_NONE when stopped; otherwise a structured
 *         stream error.
 * @note Repeated stop calls are idempotent. A DIRECT callback may stop its own
 *       stream.
 */
OMNIGLOVE_API omniglove_stream_error_t OMNIGLOVE_CALL
omniglove_device_stream_stop(omniglove_device_t* device, uint32_t kind);

/**
 * @brief Reads the state, rates, continuity, queue, and error counters of a
 *        configured stream.
 * @param[in] device Device that owns the stream.
 * @param[in] kind One omniglove_stream_kind_t value.
 * @param[in,out] output Receives the current status. Set struct_size before
 *                       calling.
 * @return OMNIGLOVE_STREAM_ERROR_NONE on success; otherwise a structured
 *         stream error.
 */
OMNIGLOVE_API omniglove_stream_error_t OMNIGLOVE_CALL
omniglove_device_stream_status(const omniglove_device_t* device, uint32_t kind,
                               omniglove_stream_status_t* output);

/**
 * @brief Executes one synchronous device control transaction.
 * @param[in,out] device Target device.
 * @param[in] request Control kind and input payload. Set struct_size before
 *                    calling.
 * @param[in] timeout_ms Positive transaction timeout in milliseconds.
 * @param[in,out] output Receives the terminal status, device return code, and
 *                       command-specific output. Set struct_size before
 *                       calling.
 * @return The terminal omniglove_control_status_t value. On completion, also
 *         inspect output->return_code and output->device_error_code.
 * @note The calling thread waits for a terminal result. Control transactions
 *       are serialized with device stream subscription changes.
 */
OMNIGLOVE_API omniglove_control_status_t OMNIGLOVE_CALL
omniglove_device_control(omniglove_device_t* device,
                         const omniglove_control_request_t* request,
                         uint32_t timeout_ms,
                         omniglove_control_result_t* output);

/**
 * @brief Reads the complete fixed-size BONE v4 payload.
 * @param[in,out] device Target device.
 * @param[out] data Caller-owned destination buffer.
 * @param[in] data_capacity Destination capacity in bytes.
 * @param[out] data_size Receives the required or returned payload size.
 * @param[in] timeout_ms Positive transaction timeout in milliseconds.
 * @param[in,out] output Receives transaction metadata and terminal status.
 *                       Set struct_size before calling.
 * @return OMNIGLOVE_CONTROL_COMPLETE on success,
 *         OMNIGLOVE_CONTROL_BUFFER_TOO_SMALL when the destination cannot hold
 *         the payload, or another structured control status.
 * @note @p data_size receives OMNIGLOVE_BONE_MAX_SIZE on success and when the
 *       buffer is too small. The caller retains ownership of @p data.
 */
OMNIGLOVE_API omniglove_control_status_t OMNIGLOVE_CALL
omniglove_device_bone_read(omniglove_device_t* device, uint8_t* data,
                           size_t data_capacity, size_t* data_size,
                           uint32_t timeout_ms,
                           omniglove_control_result_t* output);

/**
 * @brief Writes one complete fixed-size BONE v4 payload.
 * @param[in,out] device Target device.
 * @param[in] data Caller-owned payload buffer.
 * @param[in] data_size Payload size; must equal OMNIGLOVE_BONE_MAX_SIZE.
 * @param[in] timeout_ms Positive transaction timeout in milliseconds.
 * @param[in,out] output Receives transaction metadata and terminal status.
 *                       Set struct_size before calling.
 * @return OMNIGLOVE_CONTROL_COMPLETE on success; otherwise a structured
 *         control status. Also inspect output->return_code on completion.
 */
OMNIGLOVE_API omniglove_control_status_t OMNIGLOVE_CALL
omniglove_device_bone_write(omniglove_device_t* device, const uint8_t* data,
                            size_t data_size, uint32_t timeout_ms,
                            omniglove_control_result_t* output);

/**
 * @brief Destroys an initialization report.
 * @param[in] report Report to destroy, or NULL for no operation.
 */
OMNIGLOVE_API void OMNIGLOVE_CALL
omniglove_init_report_destroy(omniglove_init_report_t* report);

/**
 * @brief Returns the aggregate outcome of an initialization report.
 * @param[in] report Report to inspect.
 * @return The recorded omniglove_init_outcome_t value, or
 *         OMNIGLOVE_INIT_ALL_FAILED when @p report is NULL.
 */
OMNIGLOVE_API omniglove_init_outcome_t OMNIGLOVE_CALL
omniglove_init_report_outcome(const omniglove_init_report_t* report);

/**
 * @brief Returns the number of candidate results in an initialization report.
 * @param[in] report Report to inspect.
 * @return The candidate count, or 0 when @p report is NULL.
 */
OMNIGLOVE_API size_t OMNIGLOVE_CALL
omniglove_init_report_candidate_count(const omniglove_init_report_t* report);

/**
 * @brief Copies one candidate result from an initialization report.
 * @param[in] report Report to inspect.
 * @param[in] index Zero-based candidate index.
 * @param[in,out] output Receives the candidate result. Set struct_size before
 *                       calling.
 * @return OMNIGLOVE_ERROR_NONE on success,
 *         OMNIGLOVE_ERROR_OUT_OF_RANGE for an invalid index, or
 *         OMNIGLOVE_ERROR_INVALID_ARGUMENT for invalid handles or layout.
 */
OMNIGLOVE_API omniglove_error_t OMNIGLOVE_CALL omniglove_init_report_candidate(
    const omniglove_init_report_t* report, size_t index,
    omniglove_candidate_result_t* output);

/**
 * @brief Copies the diagnostic message from an initialization report.
 * @param[in] report Report to inspect.
 * @param[out] output Destination buffer, or NULL to query the required size.
 * @param[in] output_size Destination capacity in bytes.
 * @return The required size including the trailing NUL, or 0 when @p report is
 *         NULL.
 * @note When a nonempty destination is supplied, the result is always
 *       NUL-terminated and may be truncated.
 */
OMNIGLOVE_API size_t OMNIGLOVE_CALL omniglove_init_report_message(
    const omniglove_init_report_t* report, char* output, size_t output_size);

/**
 * @brief Returns the stable symbolic name of an SDK error code.
 * @param[in] error Error code to describe.
 * @return A pointer to immutable, library-owned, NUL-terminated storage. An
 *         unknown numeric value returns "unknown".
 */
OMNIGLOVE_API const char* OMNIGLOVE_CALL
omniglove_error_name(omniglove_error_t error);

/**
 * @brief Returns the runtime public C ABI version.
 * @return The packed OMNIGLOVE_ABI_VERSION value implemented by the loaded
 *         library.
 * @note Compare this result with the compile-time OMNIGLOVE_ABI_VERSION before
 *       initializing the SDK.
 */
OMNIGLOVE_API uint32_t OMNIGLOVE_CALL omniglove_abi_version(void);

#ifdef __cplusplus
}
#endif

#endif
