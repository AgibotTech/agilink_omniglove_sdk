// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/PostThumbLandmarks.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/post_thumb_landmarks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cmc`
// Member `mcp`
// Member `ip`
// Member `tip`
#include "omniglove_interfaces/msg/detail/pose6__functions.h"

bool
omniglove_interfaces__msg__PostThumbLandmarks__init(omniglove_interfaces__msg__PostThumbLandmarks * msg)
{
  if (!msg) {
    return false;
  }
  // cmc
  if (!omniglove_interfaces__msg__Pose6__init(&msg->cmc)) {
    omniglove_interfaces__msg__PostThumbLandmarks__fini(msg);
    return false;
  }
  // mcp
  if (!omniglove_interfaces__msg__Pose6__init(&msg->mcp)) {
    omniglove_interfaces__msg__PostThumbLandmarks__fini(msg);
    return false;
  }
  // ip
  if (!omniglove_interfaces__msg__Pose6__init(&msg->ip)) {
    omniglove_interfaces__msg__PostThumbLandmarks__fini(msg);
    return false;
  }
  // tip
  if (!omniglove_interfaces__msg__Pose6__init(&msg->tip)) {
    omniglove_interfaces__msg__PostThumbLandmarks__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__msg__PostThumbLandmarks__fini(omniglove_interfaces__msg__PostThumbLandmarks * msg)
{
  if (!msg) {
    return;
  }
  // cmc
  omniglove_interfaces__msg__Pose6__fini(&msg->cmc);
  // mcp
  omniglove_interfaces__msg__Pose6__fini(&msg->mcp);
  // ip
  omniglove_interfaces__msg__Pose6__fini(&msg->ip);
  // tip
  omniglove_interfaces__msg__Pose6__fini(&msg->tip);
}

bool
omniglove_interfaces__msg__PostThumbLandmarks__are_equal(const omniglove_interfaces__msg__PostThumbLandmarks * lhs, const omniglove_interfaces__msg__PostThumbLandmarks * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmc
  if (!omniglove_interfaces__msg__Pose6__are_equal(
      &(lhs->cmc), &(rhs->cmc)))
  {
    return false;
  }
  // mcp
  if (!omniglove_interfaces__msg__Pose6__are_equal(
      &(lhs->mcp), &(rhs->mcp)))
  {
    return false;
  }
  // ip
  if (!omniglove_interfaces__msg__Pose6__are_equal(
      &(lhs->ip), &(rhs->ip)))
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
omniglove_interfaces__msg__PostThumbLandmarks__copy(
  const omniglove_interfaces__msg__PostThumbLandmarks * input,
  omniglove_interfaces__msg__PostThumbLandmarks * output)
{
  if (!input || !output) {
    return false;
  }
  // cmc
  if (!omniglove_interfaces__msg__Pose6__copy(
      &(input->cmc), &(output->cmc)))
  {
    return false;
  }
  // mcp
  if (!omniglove_interfaces__msg__Pose6__copy(
      &(input->mcp), &(output->mcp)))
  {
    return false;
  }
  // ip
  if (!omniglove_interfaces__msg__Pose6__copy(
      &(input->ip), &(output->ip)))
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

omniglove_interfaces__msg__PostThumbLandmarks *
omniglove_interfaces__msg__PostThumbLandmarks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostThumbLandmarks * msg = (omniglove_interfaces__msg__PostThumbLandmarks *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostThumbLandmarks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__PostThumbLandmarks));
  bool success = omniglove_interfaces__msg__PostThumbLandmarks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__PostThumbLandmarks__destroy(omniglove_interfaces__msg__PostThumbLandmarks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__PostThumbLandmarks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__PostThumbLandmarks__Sequence__init(omniglove_interfaces__msg__PostThumbLandmarks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostThumbLandmarks * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__PostThumbLandmarks *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__PostThumbLandmarks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__PostThumbLandmarks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__PostThumbLandmarks__fini(&data[i - 1]);
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
omniglove_interfaces__msg__PostThumbLandmarks__Sequence__fini(omniglove_interfaces__msg__PostThumbLandmarks__Sequence * array)
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
      omniglove_interfaces__msg__PostThumbLandmarks__fini(&array->data[i]);
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

omniglove_interfaces__msg__PostThumbLandmarks__Sequence *
omniglove_interfaces__msg__PostThumbLandmarks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostThumbLandmarks__Sequence * array = (omniglove_interfaces__msg__PostThumbLandmarks__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostThumbLandmarks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__PostThumbLandmarks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__PostThumbLandmarks__Sequence__destroy(omniglove_interfaces__msg__PostThumbLandmarks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__PostThumbLandmarks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__PostThumbLandmarks__Sequence__are_equal(const omniglove_interfaces__msg__PostThumbLandmarks__Sequence * lhs, const omniglove_interfaces__msg__PostThumbLandmarks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__PostThumbLandmarks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PostThumbLandmarks__Sequence__copy(
  const omniglove_interfaces__msg__PostThumbLandmarks__Sequence * input,
  omniglove_interfaces__msg__PostThumbLandmarks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__PostThumbLandmarks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__PostThumbLandmarks * data =
      (omniglove_interfaces__msg__PostThumbLandmarks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__PostThumbLandmarks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__PostThumbLandmarks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__PostThumbLandmarks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
