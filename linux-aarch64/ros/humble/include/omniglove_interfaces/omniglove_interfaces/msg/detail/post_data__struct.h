// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omniglove_interfaces:msg/PostData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_DATA__STRUCT_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_DATA__STRUCT_H_

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
#include "omniglove_interfaces/msg/detail/post_thumb__struct.h"
// Member 'index'
// Member 'middle'
// Member 'ring'
// Member 'pinky'
#include "omniglove_interfaces/msg/detail/post_finger__struct.h"
// Member 'wrist'
#include "omniglove_interfaces/msg/detail/post_wrist__struct.h"
// Member 'unmapped_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PostData in the package omniglove_interfaces.
typedef struct omniglove_interfaces__msg__PostData
{
  bool mapped;
  uint32_t device_tick_ms;
  uint32_t flags;
  uint8_t reserved;
  uint32_t frame_id;
  omniglove_interfaces__msg__PostThumb thumb;
  omniglove_interfaces__msg__PostFinger index;
  omniglove_interfaces__msg__PostFinger middle;
  omniglove_interfaces__msg__PostFinger ring;
  omniglove_interfaces__msg__PostFinger pinky;
  omniglove_interfaces__msg__PostWrist wrist;
  rosidl_runtime_c__uint8__Sequence unmapped_data;
} omniglove_interfaces__msg__PostData;

// Struct for a sequence of omniglove_interfaces__msg__PostData.
typedef struct omniglove_interfaces__msg__PostData__Sequence
{
  omniglove_interfaces__msg__PostData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omniglove_interfaces__msg__PostData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_DATA__STRUCT_H_
