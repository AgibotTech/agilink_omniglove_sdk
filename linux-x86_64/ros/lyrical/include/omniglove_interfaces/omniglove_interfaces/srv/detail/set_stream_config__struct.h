// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:srv/SetStreamConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/srv/set_stream_config.h"


#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__STRUCT_H_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetStreamConfig in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__SetStreamConfig_Request
{
  uint64_t device_uid;
  uint8_t stream_kind;
  uint32_t stream_mode;
  bool enabled;
  uint32_t source_interval_ms;
  uint32_t source_timeout_ms;
  uint32_t callback_queue_capacity;
  uint32_t pose_components;
} omniglove_interfaces__srv__SetStreamConfig_Request;

// Struct for a sequence of omniglove_interfaces__srv__SetStreamConfig_Request.
typedef struct omniglove_interfaces__srv__SetStreamConfig_Request__Sequence
{
  omniglove_interfaces__srv__SetStreamConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__SetStreamConfig_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetStreamConfig in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__SetStreamConfig_Response
{
  bool success;
  uint32_t stream_error;
  uint32_t stream_mode;
  bool enabled;
  uint32_t source_interval_ms;
  uint32_t source_timeout_ms;
  uint32_t callback_queue_capacity;
  uint32_t pose_components;
  rosidl_runtime_c__String message;
} omniglove_interfaces__srv__SetStreamConfig_Response;

// Struct for a sequence of omniglove_interfaces__srv__SetStreamConfig_Response.
typedef struct omniglove_interfaces__srv__SetStreamConfig_Response__Sequence
{
  omniglove_interfaces__srv__SetStreamConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__SetStreamConfig_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  omniglove_interfaces__srv__SetStreamConfig_Event__request__MAX_SIZE = 1
};
// response
enum
{
  omniglove_interfaces__srv__SetStreamConfig_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetStreamConfig in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__SetStreamConfig_Event
{
  service_msgs__msg__ServiceEventInfo info;
  omniglove_interfaces__srv__SetStreamConfig_Request__Sequence request;
  omniglove_interfaces__srv__SetStreamConfig_Response__Sequence response;
} omniglove_interfaces__srv__SetStreamConfig_Event;

// Struct for a sequence of omniglove_interfaces__srv__SetStreamConfig_Event.
typedef struct omniglove_interfaces__srv__SetStreamConfig_Event__Sequence
{
  omniglove_interfaces__srv__SetStreamConfig_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__SetStreamConfig_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__STRUCT_H_
