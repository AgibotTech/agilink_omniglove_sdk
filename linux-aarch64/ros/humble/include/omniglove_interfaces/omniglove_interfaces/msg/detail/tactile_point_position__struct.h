// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/TactilePointPosition.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TactilePointPosition in the package omniglove_interfaces.
/**
  * Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0
 */
typedef struct omniglove_interfaces__msg__TactilePointPosition
{
  float x;
  float y;
  float z;
} omniglove_interfaces__msg__TactilePointPosition;

// Struct for a sequence of omniglove_interfaces__msg__TactilePointPosition.
typedef struct omniglove_interfaces__msg__TactilePointPosition__Sequence
{
  omniglove_interfaces__msg__TactilePointPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__TactilePointPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POINT_POSITION__STRUCT_H_
