// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__STRUCT_H_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetStreamStatus in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__GetStreamStatus_Request
{
  uint64_t device_uid;
  uint8_t stream_kind;
} omniglove_interfaces__srv__GetStreamStatus_Request;

// Struct for a sequence of omniglove_interfaces__srv__GetStreamStatus_Request.
typedef struct omniglove_interfaces__srv__GetStreamStatus_Request__Sequence
{
  omniglove_interfaces__srv__GetStreamStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__GetStreamStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetStreamStatus in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__GetStreamStatus_Response
{
  bool success;
  uint32_t stream_error;
  uint32_t state;
  uint32_t stream_mode;
  bool enabled;
  uint32_t source_interval_ms;
  uint32_t source_timeout_ms;
  uint32_t callback_queue_capacity;
  uint32_t pose_components;
  uint64_t actual_source_rate_millihz;
  uint64_t source_events;
  uint64_t source_samples;
  uint64_t source_no_data;
  uint64_t source_timeouts;
  uint64_t source_errors;
  uint64_t callback_delivered;
  uint64_t callback_dropped_full;
  uint64_t callback_discontinuities;
  uint64_t callback_queue_high_watermark;
  uint64_t last_source_sequence;
  uint64_t last_delivered_sequence;
  uint32_t last_source_status;
  rosidl_runtime_c__String message;
} omniglove_interfaces__srv__GetStreamStatus_Response;

// Struct for a sequence of omniglove_interfaces__srv__GetStreamStatus_Response.
typedef struct omniglove_interfaces__srv__GetStreamStatus_Response__Sequence
{
  omniglove_interfaces__srv__GetStreamStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__GetStreamStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__STRUCT_H_
