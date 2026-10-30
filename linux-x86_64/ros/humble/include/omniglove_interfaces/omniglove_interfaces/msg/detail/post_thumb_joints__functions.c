// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/PostThumbJoints.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/post_thumb_joints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
omniglove_interfaces__msg__PostThumbJoints__init(omniglove_interfaces__msg__PostThumbJoints * msg)
{
  if (!msg) {
    return false;
  }
  // cmc_rotation
  // cmc_abduction
  // cmc_flexion
  // mcp_flexion
  // ip_flexion
  return true;
}

void
omniglove_interfaces__msg__PostThumbJoints__fini(omniglove_interfaces__msg__PostThumbJoints * msg)
{
  if (!msg) {
    return;
  }
  // cmc_rotation
  // cmc_abduction
  // cmc_flexion
  // mcp_flexion
  // ip_flexion
}

bool
omniglove_interfaces__msg__PostThumbJoints__are_equal(const omniglove_interfaces__msg__PostThumbJoints * lhs, const omniglove_interfaces__msg__PostThumbJoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmc_rotation
  if (lhs->cmc_rotation != rhs->cmc_rotation) {
    return false;
  }
  // cmc_abduction
  if (lhs->cmc_abduction != rhs->cmc_abduction) {
    return false;
  }
  // cmc_flexion
  if (lhs->cmc_flexion != rhs->cmc_flexion) {
    return false;
  }
  // mcp_flexion
  if (lhs->mcp_flexion != rhs->mcp_flexion) {
    return false;
  }
  // ip_flexion
  if (lhs->ip_flexion != rhs->ip_flexion) {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__PostThumbJoints__copy(
  const omniglove_interfaces__msg__PostThumbJoints * input,
  omniglove_interfaces__msg__PostThumbJoints * output)
{
  if (!input || !output) {
    return false;
  }
  // cmc_rotation
  output->cmc_rotation = input->cmc_rotation;
  // cmc_abduction
  output->cmc_abduction = input->cmc_abduction;
  // cmc_flexion
  output->cmc_flexion = input->cmc_flexion;
  // mcp_flexion
  output->mcp_flexion = input->mcp_flexion;
  // ip_flexion
  output->ip_flexion = input->ip_flexion;
  return true;
}

omniglove_interfaces__msg__PostThumbJoints *
omniglove_interfaces__msg__PostThumbJoints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostThumbJoints * msg = (omniglove_interfaces__msg__PostThumbJoints *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostThumbJoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__PostThumbJoints));
  bool success = omniglove_interfaces__msg__PostThumbJoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__PostThumbJoints__destroy(omniglove_interfaces__msg__PostThumbJoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__PostThumbJoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__PostThumbJoints__Sequence__init(omniglove_interfaces__msg__PostThumbJoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostThumbJoints * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__PostThumbJoints *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__PostThumbJoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__PostThumbJoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__PostThumbJoints__fini(&data[i - 1]);
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
omniglove_interfaces__msg__PostThumbJoints__Sequence__fini(omniglove_interfaces__msg__PostThumbJoints__Sequence * array)
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
      omniglove_interfaces__msg__PostThumbJoints__fini(&array->data[i]);
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

omniglove_interfaces__msg__PostThumbJoints__Sequence *
omniglove_interfaces__msg__PostThumbJoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__PostThumbJoints__Sequence * array = (omniglove_interfaces__msg__PostThumbJoints__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__PostThumbJoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__PostThumbJoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__PostThumbJoints__Sequence__destroy(omniglove_interfaces__msg__PostThumbJoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__PostThumbJoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__PostThumbJoints__Sequence__are_equal(const omniglove_interfaces__msg__PostThumbJoints__Sequence * lhs, const omniglove_interfaces__msg__PostThumbJoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__PostThumbJoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__PostThumbJoints__Sequence__copy(
  const omniglove_interfaces__msg__PostThumbJoints__Sequence * input,
  omniglove_interfaces__msg__PostThumbJoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__PostThumbJoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__PostThumbJoints * data =
      (omniglove_interfaces__msg__PostThumbJoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__PostThumbJoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__PostThumbJoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__PostThumbJoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
