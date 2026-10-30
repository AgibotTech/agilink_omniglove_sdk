// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:srv/ListDevices.idl
// generated code does not contain a copyright notice

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

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__STRUCT_H_
