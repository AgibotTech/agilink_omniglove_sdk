// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/TactileRegion.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TactileRegion in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__TactileRegion
{
  uint32_t rows;
  uint32_t columns;
  rosidl_runtime_c__uint8__Sequence data;
} omniglove_interfaces__msg__TactileRegion;

// Struct for a sequence of omniglove_interfaces__msg__TactileRegion.
typedef struct omniglove_interfaces__msg__TactileRegion__Sequence
{
  omniglove_interfaces__msg__TactileRegion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__TactileRegion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__STRUCT_H_
