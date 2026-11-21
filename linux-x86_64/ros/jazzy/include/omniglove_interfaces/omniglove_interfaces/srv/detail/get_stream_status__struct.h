// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/srv/get_stream_status.h"


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

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  omniglove_interfaces__srv__GetStreamStatus_Event__request__MAX_SIZE = 1
};
// response
enum
{
  omniglove_interfaces__srv__GetStreamStatus_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetStreamStatus in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__GetStreamStatus_Event
{
  service_msgs__msg__ServiceEventInfo info;
  omniglove_interfaces__srv__GetStreamStatus_Request__Sequence request;
  omniglove_interfaces__srv__GetStreamStatus_Response__Sequence response;
} omniglove_interfaces__srv__GetStreamStatus_Event;

// Struct for a sequence of omniglove_interfaces__srv__GetStreamStatus_Event.
typedef struct omniglove_interfaces__srv__GetStreamStatus_Event__Sequence
{
  omniglove_interfaces__srv__GetStreamStatus_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__GetStreamStatus_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__STRUCT_H_
