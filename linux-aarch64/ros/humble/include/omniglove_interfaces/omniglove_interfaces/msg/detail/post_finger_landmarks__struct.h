// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PostFingerLandmarks.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mcp'
// Member 'pip'
// Member 'dip'
// Member 'tip'
#include "omniglove_interfaces/msg/detail/pose6__struct.h"

/// Struct defined in msg/PostFingerLandmarks in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PostFingerLandmarks
{
  omniglove_interfaces__msg__Pose6 mcp;
  omniglove_interfaces__msg__Pose6 pip;
  omniglove_interfaces__msg__Pose6 dip;
  omniglove_interfaces__msg__Pose6 tip;
} omniglove_interfaces__msg__PostFingerLandmarks;

// Struct for a sequence of omniglove_interfaces__msg__PostFingerLandmarks.
typedef struct omniglove_interfaces__msg__PostFingerLandmarks__Sequence
{
  omniglove_interfaces__msg__PostFingerLandmarks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PostFingerLandmarks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__STRUCT_H_
