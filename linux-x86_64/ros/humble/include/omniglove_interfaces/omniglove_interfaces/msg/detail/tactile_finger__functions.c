// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/TactileFinger.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/tactile_finger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tip`
// Member `pad`
// Member `middle`
// Member `root`
#include "omniglove_interfaces/msg/detail/tactile_region__functions.h"

bool
omniglove_interfaces__msg__TactileFinger__init(omniglove_interfaces__msg__TactileFinger * msg)
{
  if (!msg) {
    return false;
  }
  // tip
  if (!omniglove_interfaces__msg__TactileRegion__init(&msg->tip)) {
    omniglove_interfaces__msg__TactileFinger__fini(msg);
    return false;
  }
  // pad
  if (!omniglove_interfaces__msg__TactileRegion__init(&msg->pad)) {
    omniglove_interfaces__msg__TactileFinger__fini(msg);
    return false;
  }
  // middle
  if (!omniglove_interfaces__msg__TactileRegion__init(&msg->middle)) {
    omniglove_interfaces__msg__TactileFinger__fini(msg);
    return false;
  }
  // root
  if (!omniglove_interfaces__msg__TactileRegion__init(&msg->root)) {
    omniglove_interfaces__msg__TactileFinger__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__msg__TactileFinger__fini(omniglove_interfaces__msg__TactileFinger * msg)
{
  if (!msg) {
    return;
  }
  // tip
  omniglove_interfaces__msg__TactileRegion__fini(&msg->tip);
  // pad
  omniglove_interfaces__msg__TactileRegion__fini(&msg->pad);
  // middle
  omniglove_interfaces__msg__TactileRegion__fini(&msg->middle);
  // root
  omniglove_interfaces__msg__TactileRegion__fini(&msg->root);
}

bool
omniglove_interfaces__msg__TactileFinger__are_equal(const omniglove_interfaces__msg__TactileFinger * lhs, const omniglove_interfaces__msg__TactileFinger * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tip
  if (!omniglove_interfaces__msg__TactileRegion__are_equal(
      &(lhs->tip), &(rhs->tip)))
  {
    return false;
  }
  // pad
  if (!omniglove_interfaces__msg__TactileRegion__are_equal(
      &(lhs->pad), &(rhs->pad)))
  {
    return false;
  }
  // middle
  if (!omniglove_interfaces__msg__TactileRegion__are_equal(
      &(lhs->middle), &(rhs->middle)))
  {
    return false;
  }
  // root
  if (!omniglove_interfaces__msg__TactileRegion__are_equal(
      &(lhs->root), &(rhs->root)))
  {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__TactileFinger__copy(
  const omniglove_interfaces__msg__TactileFinger * input,
  omniglove_interfaces__msg__TactileFinger * output)
{
  if (!input || !output) {
    return false;
  }
  // tip
  if (!omniglove_interfaces__msg__TactileRegion__copy(
      &(input->tip), &(output->tip)))
  {
    return false;
  }
  // pad
  if (!omniglove_interfaces__msg__TactileRegion__copy(
      &(input->pad), &(output->pad)))
  {
    return false;
  }
  // middle
  if (!omniglove_interfaces__msg__TactileRegion__copy(
      &(input->middle), &(output->middle)))
  {
    return false;
  }
  // root
  if (!omniglove_interfaces__msg__TactileRegion__copy(
      &(input->root), &(output->root)))
  {
    return false;
  }
  return true;
}

omniglove_interfaces__msg__TactileFinger *
omniglove_interfaces__msg__TactileFinger__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__TactileFinger * msg = (omniglove_interfaces__msg__TactileFinger *)allocator.allocate(sizeof(omniglove_interfaces__msg__TactileFinger), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__TactileFinger));
  bool success = omniglove_interfaces__msg__TactileFinger__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__TactileFinger__destroy(omniglove_interfaces__msg__TactileFinger * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__TactileFinger__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__TactileFinger__Sequence__init(omniglove_interfaces__msg__TactileFinger__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__TactileFinger * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__TactileFinger *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__TactileFinger), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__TactileFinger__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__TactileFinger__fini(&data[i - 1]);
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
omniglove_interfaces__msg__TactileFinger__Sequence__fini(omniglove_interfaces__msg__TactileFinger__Sequence * array)
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
      omniglove_interfaces__msg__TactileFinger__fini(&array->data[i]);
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

omniglove_interfaces__msg__TactileFinger__Sequence *
omniglove_interfaces__msg__TactileFinger__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__TactileFinger__Sequence * array = (omniglove_interfaces__msg__TactileFinger__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__TactileFinger__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__TactileFinger__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__TactileFinger__Sequence__destroy(omniglove_interfaces__msg__TactileFinger__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__TactileFinger__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__TactileFinger__Sequence__are_equal(const omniglove_interfaces__msg__TactileFinger__Sequence * lhs, const omniglove_interfaces__msg__TactileFinger__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__TactileFinger__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__TactileFinger__Sequence__copy(
  const omniglove_interfaces__msg__TactileFinger__Sequence * input,
  omniglove_interfaces__msg__TactileFinger__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__TactileFinger);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__TactileFinger * data =
      (omniglove_interfaces__msg__TactileFinger *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__TactileFinger__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__TactileFinger__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__TactileFinger__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
