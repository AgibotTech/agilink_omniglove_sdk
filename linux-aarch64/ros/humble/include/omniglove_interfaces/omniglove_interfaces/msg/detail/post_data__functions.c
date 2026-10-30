// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/PostData.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/post_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `thumb`
#include "omniglove_interfaces/msg/detail/post_thumb__functions.h"
// Member `index`
// Member `middle`
// Member `ring`
// Member `pinky`
#include "omniglove_interfaces/msg/detail/post_finger__functions.h"
// Member `wrist`
#include "omniglove_interfaces/msg/detail/post_wrist__functions.h"
// Member `unmapped_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
omniglove_interfaces__msg__PostData__init(omniglove_interfaces__msg__PostData * msg)
{
  if (!msg) {
    return false;
  }
  // mapped
  // device_tick_ms
  // flags
  // reserved
  // frame_id
  // thumb
  if (!omniglove_interfaces__msg__PostThumb__init(&msg->thumb)) {
    omniglove_interfaces__msg__PostData__fini(msg);
    return false;
  }
  // index
  if (!omniglove_interfaces__msg__PostFinger__init(&msg->index)) {
    omniglove_interfaces__msg__PostData__fini(msg);
    return false;
  }
  // middle
  if (!omniglove_interfaces__msg__PostFinger__init(&msg->middle)) {
    omniglove_interfaces__msg__PostData__fini(msg);
    return false;
  }
  // ring
  if (!omniglove_interfaces__msg__PostFinger__init(&msg->ring)) {
    omniglove_interfaces__msg__PostData__fini(msg);
    return false;
  }
  // pinky
  if (!omniglove_interfaces__msg__PostFinger__init(&msg->pinky)) {
    omniglove_interfaces__msg__PostData__fini(msg);
    return false;
  }
  // wrist
  if (!omniglove_interfaces__msg__PostWrist__init(&msg->wrist)) {
    omniglove_interfaces__msg__PostData__fini(msg);
    return false;
  }
  // unmapped_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->unmapped_data, 0)) {
    omniglove_interfaces__msg__PostData__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__msg__PostData__fini(omniglove_interfaces__msg__PostData * msg)
{
  if (!msg) {
    return;
  }
  // mapped
  // device_tick_ms
  // flags
  // reserved
  // frame_id
  // thumb
  omniglove_interfaces__msg__PostThumb__fini(&msg->thumb);
  // index
  omniglove_interfaces__msg__PostFinger__fini(&msg->index);
  // middle
  omniglove_interfaces__msg__PostFinger__fini(&msg->middle);
  // ring
  omniglove_interfaces__msg__PostFinger__fini(&msg->ring);
  // pinky
  omniglove_interfaces__msg__PostFinger__fini(&msg->pinky);
  // wrist
  omniglove_interfaces__msg__PostWrist__fini(&msg->wrist);
  // unmapped_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->unmapped_data);
}

bool
omniglove_interfaces__msg__PostData__are_equal(const omniglove_interfaces__msg__PostData * lhs, const omniglove_interfaces__msg__PostData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mapped
  if (lhs->mapped != rhs->mapped) {
    return false;
  }
  // device_tick_ms
  if (lhs->device_tick_ms != rhs->device_tick_ms) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // frame_id
  if (lhs->frame_id != rhs->frame_id) {
    return false;
  }
  // thumb
  if (!omniglove_interfaces__msg__PostThumb__are_equal(
      &(lhs->thumb), &(rhs->thumb)))
  {
    return false;
  }
  // index
  if (!omniglove_interfaces__msg__PostFinger__are_equal(
      &(lhs->index), &(rhs->index)))
  {
    return false;
  }
  // middle
  if (!omniglove_interfaces__msg__PostFinger__are_equal(
      &(lhs->middle), &(rhs->middle)))
  {
    return false;
  }
  // ring
  if (!omniglove_interfaces__msg__PostFinger__are_equal(
      &(lhs->ring), &(rhs->ring)))
  {
    return false;
  }
  // pinky
  if (!omniglove_interfaces__msg__PostFinger__are_equal(
      &(lhs->pinky), &(rhs->pinky)))
  {
    return false;
  }
  // wrist
  if (!omniglove_interfaces__msg__PostWrist__are_equal(
      &(lhs->wrist), &(rhs->wrist)))
  {
    return false;
  }
  // unmapped_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->unmapped_data), &(rhs->unmapped_data)))
  {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__PostData__copy(
  const omniglove_interfaces__msg__PostData * input,
  omniglove_interfaces__msg__PostData * output)
{
  if (!input || !output) {
    return false;
  }
  // mapped
  output->mapped = input->mapped;
  // device_tick_ms
  output->device_tick_ms = input->device_tick_ms;
  // flags
  output->flags = input->flags;
  // reserved
  output->reserved = input->reserved;
  // frame_id
  output->frame_id = input->frame_id;
  // thumb
  if (!omniglove_interfaces__msg__PostThumb__copy(
      &(input->thumb), &(output->thumb)))
  {
    return false;
  }
  // index
  if (!omniglove_interfaces__msg__PostFinger__copy(
      &(input->index), &(output->index)))
  {
    return false;
  }
  // middle
  if (!omniglove_interfaces__msg__PostFinger__copy(
      &(input->middle), &(output->middle)))
  {
    return false;
  }
  // ring
  if (!omniglove_interfaces__msg__PostFinger__copy(
      &(input->ring), &(output->ring)))
  {
    return false;
  }
  // pinky
  if (!omniglove_interfaces__msg__PostFinger__copy(
      &(input->pinky), &(output->pinky)))
  {
    return false;
  }
  // wrist
  if (!omniglove_interfaces__msg__PostWrist__copy(
      &(input->wrist), &(output->wrist)))
  {
    return false;
  }
  // unmapped_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->unmapped_data), &(output->unmapped_data)))
  {
    return false;
  }
  return true;
}

omniglove_interfaces__msg__PostData *
omniglove_interfaces__msg__PostData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostData * msg = (omniglove_interfaces__msg__PostData *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__PostData));
  bool success = omniglove_interfaces__msg__PostData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__PostData__destroy(omniglove_interfaces__msg__PostData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__PostData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__PostData__Sequence__init(omniglove_interfaces__msg__PostData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostData * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__PostData *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__PostData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__PostData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__PostData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
omniglove_interfaces__msg__PostData__Sequence__fini(omniglove_interfaces__msg__PostData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      omniglove_interfaces__msg__PostData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

omniglove_interfaces__msg__PostData__Sequence *
omniglove_interfaces__msg__PostData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostData__Sequence * array = (omniglove_interfaces__msg__PostData__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__PostData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__PostData__Sequence__destroy(omniglove_interfaces__msg__PostData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__PostData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__PostData__Sequence__are_equal(const omniglove_interfaces__msg__PostData__Sequence * lhs, const omniglove_interfaces__msg__PostData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__PostData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PostData__Sequence__copy(
  const omniglove_interfaces__msg__PostData__Sequence * input,
  omniglove_interfaces__msg__PostData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__PostData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__PostData * data =
      (omniglove_interfaces__msg__PostData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__PostData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__PostData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__PostData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
