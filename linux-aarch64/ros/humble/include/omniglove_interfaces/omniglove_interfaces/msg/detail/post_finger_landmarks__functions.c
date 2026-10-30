// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/PostFingerLandmarks.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/post_finger_landmarks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mcp`
// Member `pip`
// Member `dip`
// Member `tip`
#include "omniglove_interfaces/msg/detail/pose6__functions.h"

bool
omniglove_interfaces__msg__PostFingerLandmarks__init(omniglove_interfaces__msg__PostFingerLandmarks * msg)
{
  if (!msg) {
    return false;
  }
  // mcp
  if (!omniglove_interfaces__msg__Pose6__init(&msg->mcp)) {
    omniglove_interfaces__msg__PostFingerLandmarks__fini(msg);
    return false;
  }
  // pip
  if (!omniglove_interfaces__msg__Pose6__init(&msg->pip)) {
    omniglove_interfaces__msg__PostFingerLandmarks__fini(msg);
    return false;
  }
  // dip
  if (!omniglove_interfaces__msg__Pose6__init(&msg->dip)) {
    omniglove_interfaces__msg__PostFingerLandmarks__fini(msg);
    return false;
  }
  // tip
  if (!omniglove_interfaces__msg__Pose6__init(&msg->tip)) {
    omniglove_interfaces__msg__PostFingerLandmarks__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__msg__PostFingerLandmarks__fini(omniglove_interfaces__msg__PostFingerLandmarks * msg)
{
  if (!msg) {
    return;
  }
  // mcp
  omniglove_interfaces__msg__Pose6__fini(&msg->mcp);
  // pip
  omniglove_interfaces__msg__Pose6__fini(&msg->pip);
  // dip
  omniglove_interfaces__msg__Pose6__fini(&msg->dip);
  // tip
  omniglove_interfaces__msg__Pose6__fini(&msg->tip);
}

bool
omniglove_interfaces__msg__PostFingerLandmarks__are_equal(const omniglove_interfaces__msg__PostFingerLandmarks * lhs, const omniglove_interfaces__msg__PostFingerLandmarks * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mcp
  if (!omniglove_interfaces__msg__Pose6__are_equal(
      &(lhs->mcp), &(rhs->mcp)))
  {
    return false;
  }
  // pip
  if (!omniglove_interfaces__msg__Pose6__are_equal(
      &(lhs->pip), &(rhs->pip)))
  {
    return false;
  }
  // dip
  if (!omniglove_interfaces__msg__Pose6__are_equal(
      &(lhs->dip), &(rhs->dip)))
  {
    return false;
  }
  // tip
  if (!omniglove_interfaces__msg__Pose6__are_equal(
      &(lhs->tip), &(rhs->tip)))
  {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__PostFingerLandmarks__copy(
  const omniglove_interfaces__msg__PostFingerLandmarks * input,
  omniglove_interfaces__msg__PostFingerLandmarks * output)
{
  if (!input || !output) {
    return false;
  }
  // mcp
  if (!omniglove_interfaces__msg__Pose6__copy(
      &(input->mcp), &(output->mcp)))
  {
    return false;
  }
  // pip
  if (!omniglove_interfaces__msg__Pose6__copy(
      &(input->pip), &(output->pip)))
  {
    return false;
  }
  // dip
  if (!omniglove_interfaces__msg__Pose6__copy(
      &(input->dip), &(output->dip)))
  {
    return false;
  }
  // tip
  if (!omniglove_interfaces__msg__Pose6__copy(
      &(input->tip), &(output->tip)))
  {
    return false;
  }
  return true;
}

omniglove_interfaces__msg__PostFingerLandmarks *
omniglove_interfaces__msg__PostFingerLandmarks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostFingerLandmarks * msg = (omniglove_interfaces__msg__PostFingerLandmarks *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostFingerLandmarks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__PostFingerLandmarks));
  bool success = omniglove_interfaces__msg__PostFingerLandmarks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__PostFingerLandmarks__destroy(omniglove_interfaces__msg__PostFingerLandmarks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__PostFingerLandmarks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__PostFingerLandmarks__Sequence__init(omniglove_interfaces__msg__PostFingerLandmarks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostFingerLandmarks * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__PostFingerLandmarks *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__PostFingerLandmarks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__PostFingerLandmarks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__PostFingerLandmarks__fini(&data[i - 1]);
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
omniglove_interfaces__msg__PostFingerLandmarks__Sequence__fini(omniglove_interfaces__msg__PostFingerLandmarks__Sequence * array)
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
      omniglove_interfaces__msg__PostFingerLandmarks__fini(&array->data[i]);
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

omniglove_interfaces__msg__PostFingerLandmarks__Sequence *
omniglove_interfaces__msg__PostFingerLandmarks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostFingerLandmarks__Sequence * array = (omniglove_interfaces__msg__PostFingerLandmarks__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostFingerLandmarks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__PostFingerLandmarks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__PostFingerLandmarks__Sequence__destroy(omniglove_interfaces__msg__PostFingerLandmarks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__PostFingerLandmarks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__PostFingerLandmarks__Sequence__are_equal(const omniglove_interfaces__msg__PostFingerLandmarks__Sequence * lhs, const omniglove_interfaces__msg__PostFingerLandmarks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__PostFingerLandmarks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PostFingerLandmarks__Sequence__copy(
  const omniglove_interfaces__msg__PostFingerLandmarks__Sequence * input,
  omniglove_interfaces__msg__PostFingerLandmarks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__PostFingerLandmarks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__PostFingerLandmarks * data =
      (omniglove_interfaces__msg__PostFingerLandmarks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__PostFingerLandmarks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__PostFingerLandmarks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__PostFingerLandmarks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
