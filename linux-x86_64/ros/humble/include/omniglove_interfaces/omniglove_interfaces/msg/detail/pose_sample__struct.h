// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PoseSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_SAMPLE__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_SAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'metadata'
#include "omniglove_interfaces/msg/detail/stream_metadata__struct.h"
// Member 'data'
#include "omniglove_interfaces/msg/detail/pose_data__struct.h"

/// Struct defined in msg/PoseSample in the package omniglove_interfaces.
/**
  * Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0
 */
typedef struct omniglove_interfaces__msg__PoseSample
{
  omniglove_interfaces__msg__StreamMetadata metadata;
  omniglove_interfaces__msg__PoseData data;
} omniglove_interfaces__msg__PoseSample;

// Struct for a sequence of omniglove_interfaces__msg__PoseSample.
typedef struct omniglove_interfaces__msg__PoseSample__Sequence
{
  omniglove_interfaces__msg__PoseSample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PoseSample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_SAMPLE__STRUCT_H_
