// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PoseData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__STRUCT_H_

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
// Member 'wrist'
#include "omniglove_interfaces/msg/detail/pose_node__struct.h"
// Member 'back_of_hand_imu'
#include "omniglove_interfaces/msg/detail/pose_imu__struct.h"
// Member 'tactile'
#include "omniglove_interfaces/msg/detail/tactile_data__struct.h"
// Member 'unmapped_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PoseData in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PoseData
{
  bool mapped;
  uint32_t components;
  uint32_t device_tick_ms;
  omniglove_interfaces__msg__PoseNode thumb;
  omniglove_interfaces__msg__PoseNode index;
  omniglove_interfaces__msg__PoseNode middle;
  omniglove_interfaces__msg__PoseNode ring;
  omniglove_interfaces__msg__PoseNode pinky;
  omniglove_interfaces__msg__PoseNode wrist;
  omniglove_interfaces__msg__PoseImu back_of_hand_imu;
  omniglove_interfaces__msg__TactileData tactile;
  rosidl_runtime_c__uint8__Sequence unmapped_data;
} omniglove_interfaces__msg__PoseData;

// Struct for a sequence of omniglove_interfaces__msg__PoseData.
typedef struct omniglove_interfaces__msg__PoseData__Sequence
{
  omniglove_interfaces__msg__PoseData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PoseData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__STRUCT_H_
