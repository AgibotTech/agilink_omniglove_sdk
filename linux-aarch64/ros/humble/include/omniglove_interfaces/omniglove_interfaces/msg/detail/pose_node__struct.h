// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PoseNode.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'emf'
#include "omniglove_interfaces/msg/detail/pose_emf__struct.h"
// Member 'imu'
#include "omniglove_interfaces/msg/detail/pose_imu__struct.h"

/// Struct defined in msg/PoseNode in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PoseNode
{
  omniglove_interfaces__msg__PoseEmf emf;
  omniglove_interfaces__msg__PoseImu imu;
} omniglove_interfaces__msg__PoseNode;

// Struct for a sequence of omniglove_interfaces__msg__PoseNode.
typedef struct omniglove_interfaces__msg__PoseNode__Sequence
{
  omniglove_interfaces__msg__PoseNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PoseNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__STRUCT_H_
