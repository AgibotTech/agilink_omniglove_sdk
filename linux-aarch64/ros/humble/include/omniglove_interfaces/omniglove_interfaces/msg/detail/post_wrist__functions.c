// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/PostWrist.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/post_wrist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `landmark`
#include "omniglove_interfaces/msg/detail/pose6__functions.h"

bool
omniglove_interfaces__msg__PostWrist__init(omniglove_interfaces__msg__PostWrist * msg)
{
  if (!msg) {
    return false;
  }
  // landmark
  if (!omniglove_interfaces__msg__Pose6__init(&msg->landmark)) {
    omniglove_interfaces__msg__PostWrist__fini(msg);
    return false;
  }
  // quaternion_xyzw
  return true;
}

void
omniglove_interfaces__msg__PostWrist__fini(omniglove_interfaces__msg__PostWrist * msg)
{
  if (!msg) {
    return;
  }
  // landmark
  omniglove_interfaces__msg__Pose6__fini(&msg->landmark);
  // quaternion_xyzw
}

bool
omniglove_interfaces__msg__PostWrist__are_equal(const omniglove_interfaces__msg__PostWrist * lhs, const omniglove_interfaces__msg__PostWrist * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // landmark
  if (!omniglove_interfaces__msg__Pose6__are_equal(
      &(lhs->landmark), &(rhs->landmark)))
  {
    return false;
  }
  // quaternion_xyzw
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->quaternion_xyzw[i] != rhs->quaternion_xyzw[i]) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PostWrist__copy(
  const omniglove_interfaces__msg__PostWrist * input,
  omniglove_interfaces__msg__PostWrist * output)
{
  if (!input || !output) {
    return false;
  }
  // landmark
  if (!omniglove_interfaces__msg__Pose6__copy(
      &(input->landmark), &(output->landmark)))
  {
    return false;
  }
  // quaternion_xyzw
  for (size_t i = 0; i < 4; ++i) {
    output->quaternion_xyzw[i] = input->quaternion_xyzw[i];
  }
  return true;
}

omniglove_interfaces__msg__PostWrist *
omniglove_interfaces__msg__PostWrist__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostWrist * msg = (omniglove_interfaces__msg__PostWrist *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostWrist), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__PostWrist));
  bool success = omniglove_interfaces__msg__PostWrist__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__PostWrist__destroy(omniglove_interfaces__msg__PostWrist * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__PostWrist__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__PostWrist__Sequence__init(omniglove_interfaces__msg__PostWrist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostWrist * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__PostWrist *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__PostWrist), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__PostWrist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__PostWrist__fini(&data[i - 1]);
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
omniglove_interfaces__msg__PostWrist__Sequence__fini(omniglove_interfaces__msg__PostWrist__Sequence * array)
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
      omniglove_interfaces__msg__PostWrist__fini(&array->data[i]);
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

omniglove_interfaces__msg__PostWrist__Sequence *
omniglove_interfaces__msg__PostWrist__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostWrist__Sequence * array = (omniglove_interfaces__msg__PostWrist__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostWrist__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__PostWrist__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__PostWrist__Sequence__destroy(omniglove_interfaces__msg__PostWrist__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__PostWrist__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__PostWrist__Sequence__are_equal(const omniglove_interfaces__msg__PostWrist__Sequence * lhs, const omniglove_interfaces__msg__PostWrist__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__PostWrist__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PostWrist__Sequence__copy(
  const omniglove_interfaces__msg__PostWrist__Sequence * input,
  omniglove_interfaces__msg__PostWrist__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__PostWrist);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__PostWrist * data =
      (omniglove_interfaces__msg__PostWrist *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__PostWrist__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__PostWrist__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__PostWrist__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
