// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PostThumb.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints_rad'
#include "omniglove_interfaces/msg/detail/post_thumb_joints__struct.h"
// Member 'landmarks'
#include "omniglove_interfaces/msg/detail/post_thumb_landmarks__struct.h"
// Member 'rx_tip_target'
#include "omniglove_interfaces/msg/detail/pose6__struct.h"

/// Struct defined in msg/PostThumb in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PostThumb
{
  omniglove_interfaces__msg__PostThumbJoints joints_rad;
  omniglove_interfaces__msg__PostThumbLandmarks landmarks;
  omniglove_interfaces__msg__Pose6 rx_tip_target;
} omniglove_interfaces__msg__PostThumb;

// Struct for a sequence of omniglove_interfaces__msg__PostThumb.
typedef struct omniglove_interfaces__msg__PostThumb__Sequence
{
  omniglove_interfaces__msg__PostThumb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PostThumb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB__STRUCT_H_
