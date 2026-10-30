// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PostFinger.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__STRUCT_H_

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
#include "omniglove_interfaces/msg/detail/post_finger_joints__struct.h"
// Member 'landmarks'
#include "omniglove_interfaces/msg/detail/post_finger_landmarks__struct.h"
// Member 'rx_tip_target'
#include "omniglove_interfaces/msg/detail/pose6__struct.h"

/// Struct defined in msg/PostFinger in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PostFinger
{
  omniglove_interfaces__msg__PostFingerJoints joints_rad;
  omniglove_interfaces__msg__PostFingerLandmarks landmarks;
  omniglove_interfaces__msg__Pose6 rx_tip_target;
} omniglove_interfaces__msg__PostFinger;

// Struct for a sequence of omniglove_interfaces__msg__PostFinger.
typedef struct omniglove_interfaces__msg__PostFinger__Sequence
{
  omniglove_interfaces__msg__PostFinger * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PostFinger__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__STRUCT_H_
