// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/Pose6.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pose6 in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__Pose6
{
  float position_m[3];
  float quaternion_xyzw[4];
} omniglove_interfaces__msg__Pose6;

// Struct for a sequence of omniglove_interfaces__msg__Pose6.
typedef struct omniglove_interfaces__msg__Pose6__Sequence
{
  omniglove_interfaces__msg__Pose6 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__Pose6__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__STRUCT_H_
