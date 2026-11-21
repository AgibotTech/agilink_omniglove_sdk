// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `product_key`
// Member `opaque_token`
// Member `topic_namespace`
#include "rosidl_runtime_c/string_functions.h"

bool
omniglove_interfaces__msg__DeviceInfo__init(omniglove_interfaces__msg__DeviceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // uid
  // product_key
  if (!rosidl_runtime_c__String__init(&msg->product_key)) {
    omniglove_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // opaque_token
  if (!rosidl_runtime_c__String__init(&msg->opaque_token)) {
    omniglove_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // hand
  // nominal_source_rate_hz
  // topic_namespace
  if (!rosidl_runtime_c__String__init(&msg->topic_namespace)) {
    omniglove_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__msg__DeviceInfo__fini(omniglove_interfaces__msg__DeviceInfo * msg)
{
  if (!msg) {
    return;
  }
  // uid
  // product_key
  rosidl_runtime_c__String__fini(&msg->product_key);
  // opaque_token
  rosidl_runtime_c__String__fini(&msg->opaque_token);
  // hand
  // nominal_source_rate_hz
  // topic_namespace
  rosidl_runtime_c__String__fini(&msg->topic_namespace);
}

bool
omniglove_interfaces__msg__DeviceInfo__are_equal(const omniglove_interfaces__msg__DeviceInfo * lhs, const omniglove_interfaces__msg__DeviceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uid
  if (lhs->uid != rhs->uid) {
    return false;
  }
  // product_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->product_key), &(rhs->product_key)))
  {
    return false;
  }
  // opaque_token
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->opaque_token), &(rhs->opaque_token)))
  {
    return false;
  }
  // hand
  if (lhs->hand != rhs->hand) {
    return false;
  }
  // nominal_source_rate_hz
  if (lhs->nominal_source_rate_hz != rhs->nominal_source_rate_hz) {
    return false;
  }
  // topic_namespace
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_namespace), &(rhs->topic_namespace)))
  {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__DeviceInfo__copy(
  const omniglove_interfaces__msg__DeviceInfo * input,
  omniglove_interfaces__msg__DeviceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // uid
  output->uid = input->uid;
  // product_key
  if (!rosidl_runtime_c__String__copy(
      &(input->product_key), &(output->product_key)))
  {
    return false;
  }
  // opaque_token
  if (!rosidl_runtime_c__String__copy(
      &(input->opaque_token), &(output->opaque_token)))
  {
    return false;
  }
  // hand
  output->hand = input->hand;
  // nominal_source_rate_hz
  output->nominal_source_rate_hz = input->nominal_source_rate_hz;
  // topic_namespace
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_namespace), &(output->topic_namespace)))
  {
    return false;
  }
  return true;
}

omniglove_interfaces__msg__DeviceInfo *
omniglove_interfaces__msg__DeviceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__DeviceInfo * msg = (omniglove_interfaces__msg__DeviceInfo *)allocator.allocate(sizeof(omniglove_interfaces__msg__DeviceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__DeviceInfo));
  bool success = omniglove_interfaces__msg__DeviceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__DeviceInfo__destroy(omniglove_interfaces__msg__DeviceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__DeviceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__DeviceInfo__Sequence__init(omniglove_interfaces__msg__DeviceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__DeviceInfo * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__DeviceInfo *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__DeviceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__DeviceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__DeviceInfo__fini(&data[i - 1]);
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
omniglove_interfaces__msg__DeviceInfo__Sequence__fini(omniglove_interfaces__msg__DeviceInfo__Sequence * array)
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
      omniglove_interfaces__msg__DeviceInfo__fini(&array->data[i]);
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

omniglove_interfaces__msg__DeviceInfo__Sequence *
omniglove_interfaces__msg__DeviceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__DeviceInfo__Sequence * array = (omniglove_interfaces__msg__DeviceInfo__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__DeviceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__DeviceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__DeviceInfo__Sequence__destroy(omniglove_interfaces__msg__DeviceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__DeviceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__DeviceInfo__Sequence__are_equal(const omniglove_interfaces__msg__DeviceInfo__Sequence * lhs, const omniglove_interfaces__msg__DeviceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__DeviceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__DeviceInfo__Sequence__copy(
  const omniglove_interfaces__msg__DeviceInfo__Sequence * input,
  omniglove_interfaces__msg__DeviceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__DeviceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__DeviceInfo * data =
      (omniglove_interfaces__msg__DeviceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__DeviceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__DeviceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__DeviceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
