// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/PostFingerJoints.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/post_finger_joints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
omniglove_interfaces__msg__PostFingerJoints__init(omniglove_interfaces__msg__PostFingerJoints * msg)
{
  if (!msg) {
    return false;
  }
  // mcp_abduction
  // mcp_flexion
  // pip_flexion
  // dip_flexion
  return true;
}

void
omniglove_interfaces__msg__PostFingerJoints__fini(omniglove_interfaces__msg__PostFingerJoints * msg)
{
  if (!msg) {
    return;
  }
  // mcp_abduction
  // mcp_flexion
  // pip_flexion
  // dip_flexion
}

bool
omniglove_interfaces__msg__PostFingerJoints__are_equal(const omniglove_interfaces__msg__PostFingerJoints * lhs, const omniglove_interfaces__msg__PostFingerJoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mcp_abduction
  if (lhs->mcp_abduction != rhs->mcp_abduction) {
    return false;
  }
  // mcp_flexion
  if (lhs->mcp_flexion != rhs->mcp_flexion) {
    return false;
  }
  // pip_flexion
  if (lhs->pip_flexion != rhs->pip_flexion) {
    return false;
  }
  // dip_flexion
  if (lhs->dip_flexion != rhs->dip_flexion) {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__PostFingerJoints__copy(
  const omniglove_interfaces__msg__PostFingerJoints * input,
  omniglove_interfaces__msg__PostFingerJoints * output)
{
  if (!input || !output) {
    return false;
  }
  // mcp_abduction
  output->mcp_abduction = input->mcp_abduction;
  // mcp_flexion
  output->mcp_flexion = input->mcp_flexion;
  // pip_flexion
  output->pip_flexion = input->pip_flexion;
  // dip_flexion
  output->dip_flexion = input->dip_flexion;
  return true;
}

omniglove_interfaces__msg__PostFingerJoints *
omniglove_interfaces__msg__PostFingerJoints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostFingerJoints * msg = (omniglove_interfaces__msg__PostFingerJoints *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostFingerJoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__PostFingerJoints));
  bool success = omniglove_interfaces__msg__PostFingerJoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__PostFingerJoints__destroy(omniglove_interfaces__msg__PostFingerJoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__PostFingerJoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__PostFingerJoints__Sequence__init(omniglove_interfaces__msg__PostFingerJoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostFingerJoints * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__PostFingerJoints *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__PostFingerJoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__PostFingerJoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__PostFingerJoints__fini(&data[i - 1]);
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
omniglove_interfaces__msg__PostFingerJoints__Sequence__fini(omniglove_interfaces__msg__PostFingerJoints__Sequence * array)
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
      omniglove_interfaces__msg__PostFingerJoints__fini(&array->data[i]);
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

omniglove_interfaces__msg__PostFingerJoints__Sequence *
omniglove_interfaces__msg__PostFingerJoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostFingerJoints__Sequence * array = (omniglove_interfaces__msg__PostFingerJoints__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostFingerJoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__PostFingerJoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__PostFingerJoints__Sequence__destroy(omniglove_interfaces__msg__PostFingerJoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__PostFingerJoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__PostFingerJoints__Sequence__are_equal(const omniglove_interfaces__msg__PostFingerJoints__Sequence * lhs, const omniglove_interfaces__msg__PostFingerJoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__PostFingerJoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PostFingerJoints__Sequence__copy(
  const omniglove_interfaces__msg__PostFingerJoints__Sequence * input,
  omniglove_interfaces__msg__PostFingerJoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__PostFingerJoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__PostFingerJoints * data =
      (omniglove_interfaces__msg__PostFingerJoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__PostFingerJoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__PostFingerJoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__PostFingerJoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
