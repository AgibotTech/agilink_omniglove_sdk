// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/StreamMetadata.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAND_UNKNOWN'.
enum
{
  omniglove_interfaces__msg__StreamMetadata__HAND_UNKNOWN = 0
};

/// Constant 'HAND_LEFT'.
enum
{
  omniglove_interfaces__msg__StreamMetadata__HAND_LEFT = 1
};

/// Constant 'HAND_RIGHT'.
enum
{
  omniglove_interfaces__msg__StreamMetadata__HAND_RIGHT = 2
};

/// Constant 'SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH'.
enum
{
  omniglove_interfaces__msg__StreamMetadata__SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH = 1ul
};

/// Constant 'DEVICE_SEQUENCE_VALID'.
enum
{
  omniglove_interfaces__msg__StreamMetadata__DEVICE_SEQUENCE_VALID = 2ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/StreamMetadata in the package omniglove_interfaces.
/**
  * Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0
 */
typedef struct omniglove_interfaces__msg__StreamMetadata
{
  std_msgs__msg__Header header;
  uint8_t hand;
  uint32_t flags;
  uint32_t layout_version;
  uint32_t device_sequence;
  uint64_t device_uid;
  uint64_t source_device_id;
  uint64_t connection_generation;
  uint64_t source_sequence;
  uint64_t sample_monotonic_ns;
  uint64_t gap_count;
} omniglove_interfaces__msg__StreamMetadata;

// Struct for a sequence of omniglove_interfaces__msg__StreamMetadata.
typedef struct omniglove_interfaces__msg__StreamMetadata__Sequence
{
  omniglove_interfaces__msg__StreamMetadata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__StreamMetadata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__STRUCT_H_
