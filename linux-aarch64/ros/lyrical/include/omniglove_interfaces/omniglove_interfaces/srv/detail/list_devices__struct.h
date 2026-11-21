// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:srv/ListDevices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/srv/list_devices.h"


#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__STRUCT_H_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListDevices in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__ListDevices_Request
{
  uint8_t structure_needs_at_least_one_member;
} omniglove_interfaces__srv__ListDevices_Request;

// Struct for a sequence of omniglove_interfaces__srv__ListDevices_Request.
typedef struct omniglove_interfaces__srv__ListDevices_Request__Sequence
{
  omniglove_interfaces__srv__ListDevices_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__ListDevices_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'devices'
#include "omniglove_interfaces/msg/detail/device_info__struct.h"

/// Struct defined in srv/ListDevices in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__ListDevices_Response
{
  omniglove_interfaces__msg__DeviceInfo__Sequence devices;
} omniglove_interfaces__srv__ListDevices_Response;

// Struct for a sequence of omniglove_interfaces__srv__ListDevices_Response.
typedef struct omniglove_interfaces__srv__ListDevices_Response__Sequence
{
  omniglove_interfaces__srv__ListDevices_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__ListDevices_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  omniglove_interfaces__srv__ListDevices_Event__request__MAX_SIZE = 1
};
// response
enum
{
  omniglove_interfaces__srv__ListDevices_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListDevices in the package omniglove_interfaces.
typedef struct omniglove_interfaces__srv__ListDevices_Event
{
  service_msgs__msg__ServiceEventInfo info;
  omniglove_interfaces__srv__ListDevices_Request__Sequence request;
  omniglove_interfaces__srv__ListDevices_Response__Sequence response;
} omniglove_interfaces__srv__ListDevices_Event;

// Struct for a sequence of omniglove_interfaces__srv__ListDevices_Event.
typedef struct omniglove_interfaces__srv__ListDevices_Event__Sequence
{
  omniglove_interfaces__srv__ListDevices_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__srv__ListDevices_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__STRUCT_H_
