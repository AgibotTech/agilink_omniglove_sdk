// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PostThumbJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PostThumbJoints in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PostThumbJoints
{
  float cmc_rotation;
  float cmc_abduction;
  float cmc_flexion;
  float mcp_flexion;
  float ip_flexion;
} omniglove_interfaces__msg__PostThumbJoints;

// Struct for a sequence of omniglove_interfaces__msg__PostThumbJoints.
typedef struct omniglove_interfaces__msg__PostThumbJoints__Sequence
{
  omniglove_interfaces__msg__PostThumbJoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PostThumbJoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__STRUCT_H_
