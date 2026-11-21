// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/PoseSample.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/pose_sample__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `metadata`
#include "omniglove_interfaces/msg/detail/stream_metadata__functions.h"
// Member `data`
#include "omniglove_interfaces/msg/detail/pose_data__functions.h"

bool
omniglove_interfaces__msg__PoseSample__init(omniglove_interfaces__msg__PoseSample * msg)
{
  if (!msg) {
    return false;
  }
  // metadata
  if (!omniglove_interfaces__msg__StreamMetadata__init(&msg->metadata)) {
    omniglove_interfaces__msg__PoseSample__fini(msg);
    return false;
  }
  // data
  if (!omniglove_interfaces__msg__PoseData__init(&msg->data)) {
    omniglove_interfaces__msg__PoseSample__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__msg__PoseSample__fini(omniglove_interfaces__msg__PoseSample * msg)
{
  if (!msg) {
    return;
  }
  // metadata
  omniglove_interfaces__msg__StreamMetadata__fini(&msg->metadata);
  // data
  omniglove_interfaces__msg__PoseData__fini(&msg->data);
}

bool
omniglove_interfaces__msg__PoseSample__are_equal(const omniglove_interfaces__msg__PoseSample * lhs, const omniglove_interfaces__msg__PoseSample * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // metadata
  if (!omniglove_interfaces__msg__StreamMetadata__are_equal(
      &(lhs->metadata), &(rhs->metadata)))
  {
    return false;
  }
  // data
  if (!omniglove_interfaces__msg__PoseData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__PoseSample__copy(
  const omniglove_interfaces__msg__PoseSample * input,
  omniglove_interfaces__msg__PoseSample * output)
{
  if (!input || !output) {
    return false;
  }
  // metadata
  if (!omniglove_interfaces__msg__StreamMetadata__copy(
      &(input->metadata), &(output->metadata)))
  {
    return false;
  }
  // data
  if (!omniglove_interfaces__msg__PoseData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

omniglove_interfaces__msg__PoseSample *
omniglove_interfaces__msg__PoseSample__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PoseSample * msg = (omniglove_interfaces__msg__PoseSample *)allocator.allocate(sizeof(omniglove_interfaces__msg__PoseSample), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__PoseSample));
  bool success = omniglove_interfaces__msg__PoseSample__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__PoseSample__destroy(omniglove_interfaces__msg__PoseSample * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__PoseSample__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__PoseSample__Sequence__init(omniglove_interfaces__msg__PoseSample__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PoseSample * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__PoseSample *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__PoseSample), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__PoseSample__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__PoseSample__fini(&data[i - 1]);
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
omniglove_interfaces__msg__PoseSample__Sequence__fini(omniglove_interfaces__msg__PoseSample__Sequence * array)
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
      omniglove_interfaces__msg__PoseSample__fini(&array->data[i]);
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

omniglove_interfaces__msg__PoseSample__Sequence *
omniglove_interfaces__msg__PoseSample__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PoseSample__Sequence * array = (omniglove_interfaces__msg__PoseSample__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__PoseSample__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__PoseSample__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__PoseSample__Sequence__destroy(omniglove_interfaces__msg__PoseSample__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__PoseSample__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__PoseSample__Sequence__are_equal(const omniglove_interfaces__msg__PoseSample__Sequence * lhs, const omniglove_interfaces__msg__PoseSample__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__PoseSample__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PoseSample__Sequence__copy(
  const omniglove_interfaces__msg__PoseSample__Sequence * input,
  omniglove_interfaces__msg__PoseSample__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__PoseSample);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__PoseSample * data =
      (omniglove_interfaces__msg__PoseSample *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__PoseSample__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__PoseSample__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__PoseSample__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
