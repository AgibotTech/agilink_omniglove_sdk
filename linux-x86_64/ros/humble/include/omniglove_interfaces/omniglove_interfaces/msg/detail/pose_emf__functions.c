// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/PoseEmf.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/pose_emf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
omniglove_interfaces__msg__PoseEmf__init(omniglove_interfaces__msg__PoseEmf * msg)
{
  if (!msg) {
    return false;
  }
  // position_mm
  // yaw_pitch_roll_cdeg
  // confidence_milli
  // valid
  return true;
}

void
omniglove_interfaces__msg__PoseEmf__fini(omniglove_interfaces__msg__PoseEmf * msg)
{
  if (!msg) {
    return;
  }
  // position_mm
  // yaw_pitch_roll_cdeg
  // confidence_milli
  // valid
}

bool
omniglove_interfaces__msg__PoseEmf__are_equal(const omniglove_interfaces__msg__PoseEmf * lhs, const omniglove_interfaces__msg__PoseEmf * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position_mm
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position_mm[i] != rhs->position_mm[i]) {
      return false;
    }
  }
  // yaw_pitch_roll_cdeg
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->yaw_pitch_roll_cdeg[i] != rhs->yaw_pitch_roll_cdeg[i]) {
      return false;
    }
  }
  // confidence_milli
  if (lhs->confidence_milli != rhs->confidence_milli) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__PoseEmf__copy(
  const omniglove_interfaces__msg__PoseEmf * input,
  omniglove_interfaces__msg__PoseEmf * output)
{
  if (!input || !output) {
    return false;
  }
  // position_mm
  for (size_t i = 0; i < 3; ++i) {
    output->position_mm[i] = input->position_mm[i];
  }
  // yaw_pitch_roll_cdeg
  for (size_t i = 0; i < 3; ++i) {
    output->yaw_pitch_roll_cdeg[i] = input->yaw_pitch_roll_cdeg[i];
  }
  // confidence_milli
  output->confidence_milli = input->confidence_milli;
  // valid
  output->valid = input->valid;
  return true;
}

omniglove_interfaces__msg__PoseEmf *
omniglove_interfaces__msg__PoseEmf__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PoseEmf * msg = (omniglove_interfaces__msg__PoseEmf *)allocator.allocate(sizeof(omniglove_interfaces__msg__PoseEmf), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__PoseEmf));
  bool success = omniglove_interfaces__msg__PoseEmf__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__PoseEmf__destroy(omniglove_interfaces__msg__PoseEmf * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__PoseEmf__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__PoseEmf__Sequence__init(omniglove_interfaces__msg__PoseEmf__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PoseEmf * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__PoseEmf *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__PoseEmf), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__PoseEmf__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__PoseEmf__fini(&data[i - 1]);
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
omniglove_interfaces__msg__PoseEmf__Sequence__fini(omniglove_interfaces__msg__PoseEmf__Sequence * array)
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
      omniglove_interfaces__msg__PoseEmf__fini(&array->data[i]);
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

omniglove_interfaces__msg__PoseEmf__Sequence *
omniglove_interfaces__msg__PoseEmf__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PoseEmf__Sequence * array = (omniglove_interfaces__msg__PoseEmf__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__PoseEmf__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__PoseEmf__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__PoseEmf__Sequence__destroy(omniglove_interfaces__msg__PoseEmf__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__PoseEmf__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__PoseEmf__Sequence__are_equal(const omniglove_interfaces__msg__PoseEmf__Sequence * lhs, const omniglove_interfaces__msg__PoseEmf__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__PoseEmf__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PoseEmf__Sequence__copy(
  const omniglove_interfaces__msg__PoseEmf__Sequence * input,
  omniglove_interfaces__msg__PoseEmf__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__PoseEmf);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__PoseEmf * data =
      (omniglove_interfaces__msg__PoseEmf *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__PoseEmf__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__PoseEmf__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__PoseEmf__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
