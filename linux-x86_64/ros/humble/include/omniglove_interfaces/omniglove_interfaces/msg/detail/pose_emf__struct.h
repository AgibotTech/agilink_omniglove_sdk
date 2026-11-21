// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PoseEmf.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PoseEmf in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PoseEmf
{
  int16_t position_mm[3];
  int16_t yaw_pitch_roll_cdeg[3];
  uint16_t confidence_milli;
  bool valid;
} omniglove_interfaces__msg__PoseEmf;

// Struct for a sequence of omniglove_interfaces__msg__PoseEmf.
typedef struct omniglove_interfaces__msg__PoseEmf__Sequence
{
  omniglove_interfaces__msg__PoseEmf * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PoseEmf__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__STRUCT_H_
