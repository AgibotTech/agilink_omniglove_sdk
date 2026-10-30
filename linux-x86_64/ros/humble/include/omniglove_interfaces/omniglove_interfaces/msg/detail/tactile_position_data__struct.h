// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/TactilePositionData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FRAME_WRIST'.
enum
{
  omniglove_interfaces__msg__TactilePositionData__FRAME_WRIST = 1ul
};

/// Constant 'UNIT_METER'.
enum
{
  omniglove_interfaces__msg__TactilePositionData__UNIT_METER = 1ul
};

// Include directives for member types
// Member 'points'
#include "omniglove_interfaces/msg/detail/tactile_point_position__struct.h"

/// Struct defined in msg/TactilePositionData in the package omniglove_interfaces.
/**
  * Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0
 */
typedef struct omniglove_interfaces__msg__TactilePositionData
{
  uint32_t count;
  uint32_t coordinate_frame;
  uint32_t unit;
  omniglove_interfaces__msg__TactilePointPosition__Sequence points;
} omniglove_interfaces__msg__TactilePositionData;

// Struct for a sequence of omniglove_interfaces__msg__TactilePositionData.
typedef struct omniglove_interfaces__msg__TactilePositionData__Sequence
{
  omniglove_interfaces__msg__TactilePositionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__TactilePositionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__STRUCT_H_
