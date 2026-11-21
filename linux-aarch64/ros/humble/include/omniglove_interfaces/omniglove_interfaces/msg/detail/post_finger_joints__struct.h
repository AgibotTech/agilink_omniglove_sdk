// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PostFingerJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PostFingerJoints in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PostFingerJoints
{
  float mcp_abduction;
  float mcp_flexion;
  float pip_flexion;
  float dip_flexion;
} omniglove_interfaces__msg__PostFingerJoints;

// Struct for a sequence of omniglove_interfaces__msg__PostFingerJoints.
typedef struct omniglove_interfaces__msg__PostFingerJoints__Sequence
{
  omniglove_interfaces__msg__PostFingerJoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PostFingerJoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__STRUCT_H_
