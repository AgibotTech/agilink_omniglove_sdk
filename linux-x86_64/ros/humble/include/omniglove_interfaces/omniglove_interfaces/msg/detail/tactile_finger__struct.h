// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/TactileFinger.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tip'
// Member 'pad'
// Member 'middle'
// Member 'root'
#include "omniglove_interfaces/msg/detail/tactile_region__struct.h"

/// Struct defined in msg/TactileFinger in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__TactileFinger
{
  omniglove_interfaces__msg__TactileRegion tip;
  omniglove_interfaces__msg__TactileRegion pad;
  omniglove_interfaces__msg__TactileRegion middle;
  omniglove_interfaces__msg__TactileRegion root;
} omniglove_interfaces__msg__TactileFinger;

// Struct for a sequence of omniglove_interfaces__msg__TactileFinger.
typedef struct omniglove_interfaces__msg__TactileFinger__Sequence
{
  omniglove_interfaces__msg__TactileFinger * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__TactileFinger__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__STRUCT_H_
