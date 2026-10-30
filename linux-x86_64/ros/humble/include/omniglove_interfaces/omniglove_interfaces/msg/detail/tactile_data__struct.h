// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/TactileData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'thumb'
// Member 'index'
// Member 'middle'
// Member 'ring'
// Member 'pinky'
#include "omniglove_interfaces/msg/detail/tactile_finger__struct.h"
// Member 'palm_surface'
#include "omniglove_interfaces/msg/detail/tactile_region__struct.h"
// Member 'unmapped_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TactileData in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__TactileData
{
  bool mapped;
  uint32_t count;
  omniglove_interfaces__msg__TactileFinger thumb;
  omniglove_interfaces__msg__TactileFinger index;
  omniglove_interfaces__msg__TactileFinger middle;
  omniglove_interfaces__msg__TactileFinger ring;
  omniglove_interfaces__msg__TactileFinger pinky;
  omniglove_interfaces__msg__TactileRegion palm_surface;
  rosidl_runtime_c__uint8__Sequence unmapped_data;
} omniglove_interfaces__msg__TactileData;

// Struct for a sequence of omniglove_interfaces__msg__TactileData.
typedef struct omniglove_interfaces__msg__TactileData__Sequence
{
  omniglove_interfaces__msg__TactileData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__TactileData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__STRUCT_H_
