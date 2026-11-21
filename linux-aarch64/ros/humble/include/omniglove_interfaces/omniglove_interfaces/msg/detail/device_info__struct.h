// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_H_

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
  omniglove_interfaces__msg__DeviceInfo__HAND_UNKNOWN = 0
};

/// Constant 'HAND_LEFT'.
enum
{
  omniglove_interfaces__msg__DeviceInfo__HAND_LEFT = 1
};

/// Constant 'HAND_RIGHT'.
enum
{
  omniglove_interfaces__msg__DeviceInfo__HAND_RIGHT = 2
};

// Include directives for member types
// Member 'product_key'
// Member 'opaque_token'
// Member 'topic_namespace'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DeviceInfo in the package omniglove_interfaces.
/**
  * Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0
 */
typedef struct omniglove_interfaces__msg__DeviceInfo
{
  uint64_t uid;
  rosidl_runtime_c__String product_key;
  rosidl_runtime_c__String opaque_token;
  uint8_t hand;
  uint32_t nominal_source_rate_hz;
  rosidl_runtime_c__String topic_namespace;
} omniglove_interfaces__msg__DeviceInfo;

// Struct for a sequence of omniglove_interfaces__msg__DeviceInfo.
typedef struct omniglove_interfaces__msg__DeviceInfo__Sequence
{
  omniglove_interfaces__msg__DeviceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__DeviceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
