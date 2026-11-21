// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PoseImu.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PoseImu in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PoseImu
{
  int16_t roll_pitch_yaw_cdeg[3];
  uint8_t flags;
} omniglove_interfaces__msg__PoseImu;

// Struct for a sequence of omniglove_interfaces__msg__PoseImu.
typedef struct omniglove_interfaces__msg__PoseImu__Sequence
{
  omniglove_interfaces__msg__PoseImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PoseImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__STRUCT_H_
