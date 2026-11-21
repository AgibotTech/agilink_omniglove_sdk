// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/ImuRawSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ImuRawSample in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__ImuRawSample
{
  int16_t axes[6];
} omniglove_interfaces__msg__ImuRawSample;

// Struct for a sequence of omniglove_interfaces__msg__ImuRawSample.
typedef struct omniglove_interfaces__msg__ImuRawSample__Sequence
{
  omniglove_interfaces__msg__ImuRawSample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__ImuRawSample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__STRUCT_H_
