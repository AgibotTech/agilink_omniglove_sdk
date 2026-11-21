// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:srv/GetPoseInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/srv/get_pose_info.h"


#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__STRUCT_H_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetPoseInfo in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__GetPoseInfo_Request
{
  uint64_t device_uid;
  uint8_t info_type;
  uint32_t timeout_ms;
} omniglove_interfaces__srv__GetPoseInfo_Request;

// Struct for a sequence of omniglove_interfaces__srv__GetPoseInfo_Request.
typedef struct omniglove_interfaces__srv__GetPoseInfo_Request__Sequence
{
  omniglove_interfaces__srv__GetPoseInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__GetPoseInfo_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPoseInfo in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__GetPoseInfo_Response
{
  bool success;
  uint32_t control_status;
  uint32_t return_code;
  uint32_t device_error_code;
  uint64_t request_id;
  uint64_t connection_generation;
  uint32_t protocol_sequence;
  uint32_t node_count;
  uint8_t hand;
  uint32_t nominal_source_rate_hz;
  uint32_t calibration_state;
  uint32_t max_distance_mm;
  uint32_t capability_flags;
  rosidl_runtime_c__String message;
} omniglove_interfaces__srv__GetPoseInfo_Response;

// Struct for a sequence of omniglove_interfaces__srv__GetPoseInfo_Response.
typedef struct omniglove_interfaces__srv__GetPoseInfo_Response__Sequence
{
  omniglove_interfaces__srv__GetPoseInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__GetPoseInfo_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  omniglove_interfaces__srv__GetPoseInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  omniglove_interfaces__srv__GetPoseInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetPoseInfo in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__GetPoseInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  omniglove_interfaces__srv__GetPoseInfo_Request__Sequence request;
  omniglove_interfaces__srv__GetPoseInfo_Response__Sequence response;
} omniglove_interfaces__srv__GetPoseInfo_Event;

// Struct for a sequence of omniglove_interfaces__srv__GetPoseInfo_Event.
typedef struct omniglove_interfaces__srv__GetPoseInfo_Event__Sequence
{
  omniglove_interfaces__srv__GetPoseInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__GetPoseInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__STRUCT_H_
