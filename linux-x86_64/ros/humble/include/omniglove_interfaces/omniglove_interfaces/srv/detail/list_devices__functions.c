// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:srv/ListDevices.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/srv/detail/list_devices__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
omniglove_interfaces__srv__ListDevices_Request__init(omniglove_interfaces__srv__ListDevices_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
omniglove_interfaces__srv__ListDevices_Request__fini(omniglove_interfaces__srv__ListDevices_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
omniglove_interfaces__srv__ListDevices_Request__are_equal(const omniglove_interfaces__srv__ListDevices_Request * lhs, const omniglove_interfaces__srv__ListDevices_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__srv__ListDevices_Request__copy(
  const omniglove_interfaces__srv__ListDevices_Request * input,
  omniglove_interfaces__srv__ListDevices_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

omniglove_interfaces__srv__ListDevices_Request *
omniglove_interfaces__srv__ListDevices_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__ListDevices_Request * msg = (omniglove_interfaces__srv__ListDevices_Request *)allocator.allocate(sizeof(omniglove_interfaces__srv__ListDevices_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__srv__ListDevices_Request));
  bool success = omniglove_interfaces__srv__ListDevices_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__srv__ListDevices_Request__destroy(omniglove_interfaces__srv__ListDevices_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__srv__ListDevices_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__srv__ListDevices_Request__Sequence__init(omniglove_interfaces__srv__ListDevices_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__ListDevices_Request * data = NULL;

  if (size) {
    data = (omniglove_interfaces__srv__ListDevices_Request *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__srv__ListDevices_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__srv__ListDevices_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__srv__ListDevices_Request__fini(&data[i - 1]);
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
omniglove_interfaces__srv__ListDevices_Request__Sequence__fini(omniglove_interfaces__srv__ListDevices_Request__Sequence * array)
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
      omniglove_interfaces__srv__ListDevices_Request__fini(&array->data[i]);
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

omniglove_interfaces__srv__ListDevices_Request__Sequence *
omniglove_interfaces__srv__ListDevices_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__ListDevices_Request__Sequence * array = (omniglove_interfaces__srv__ListDevices_Request__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__srv__ListDevices_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__srv__ListDevices_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__srv__ListDevices_Request__Sequence__destroy(omniglove_interfaces__srv__ListDevices_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__srv__ListDevices_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__srv__ListDevices_Request__Sequence__are_equal(const omniglove_interfaces__srv__ListDevices_Request__Sequence * lhs, const omniglove_interfaces__srv__ListDevices_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__srv__ListDevices_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__srv__ListDevices_Request__Sequence__copy(
  const omniglove_interfaces__srv__ListDevices_Request__Sequence * input,
  omniglove_interfaces__srv__ListDevices_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__srv__ListDevices_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__srv__ListDevices_Request * data =
      (omniglove_interfaces__srv__ListDevices_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__srv__ListDevices_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__srv__ListDevices_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__srv__ListDevices_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `devices`
#include "omniglove_interfaces/msg/detail/device_info__functions.h"

bool
omniglove_interfaces__srv__ListDevices_Response__init(omniglove_interfaces__srv__ListDevices_Response * msg)
{
  if (!msg) {
    return false;
  }
  // devices
  if (!omniglove_interfaces__msg__DeviceInfo__Sequence__init(&msg->devices, 0)) {
    omniglove_interfaces__srv__ListDevices_Response__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__srv__ListDevices_Response__fini(omniglove_interfaces__srv__ListDevices_Response * msg)
{
  if (!msg) {
    return;
  }
  // devices
  omniglove_interfaces__msg__DeviceInfo__Sequence__fini(&msg->devices);
}

bool
omniglove_interfaces__srv__ListDevices_Response__are_equal(const omniglove_interfaces__srv__ListDevices_Response * lhs, const omniglove_interfaces__srv__ListDevices_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // devices
  if (!omniglove_interfaces__msg__DeviceInfo__Sequence__are_equal(
      &(lhs->devices), &(rhs->devices)))
  {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__srv__ListDevices_Response__copy(
  const omniglove_interfaces__srv__ListDevices_Response * input,
  omniglove_interfaces__srv__ListDevices_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // devices
  if (!omniglove_interfaces__msg__DeviceInfo__Sequence__copy(
      &(input->devices), &(output->devices)))
  {
    return false;
  }
  return true;
}

omniglove_interfaces__srv__ListDevices_Response *
omniglove_interfaces__srv__ListDevices_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__ListDevices_Response * msg = (omniglove_interfaces__srv__ListDevices_Response *)allocator.allocate(sizeof(omniglove_interfaces__srv__ListDevices_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__srv__ListDevices_Response));
  bool success = omniglove_interfaces__srv__ListDevices_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__srv__ListDevices_Response__destroy(omniglove_interfaces__srv__ListDevices_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__srv__ListDevices_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__srv__ListDevices_Response__Sequence__init(omniglove_interfaces__srv__ListDevices_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__ListDevices_Response * data = NULL;

  if (size) {
    data = (omniglove_interfaces__srv__ListDevices_Response *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__srv__ListDevices_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__srv__ListDevices_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__srv__ListDevices_Response__fini(&data[i - 1]);
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
omniglove_interfaces__srv__ListDevices_Response__Sequence__fini(omniglove_interfaces__srv__ListDevices_Response__Sequence * array)
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
      omniglove_interfaces__srv__ListDevices_Response__fini(&array->data[i]);
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

omniglove_interfaces__srv__ListDevices_Response__Sequence *
omniglove_interfaces__srv__ListDevices_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__ListDevices_Response__Sequence * array = (omniglove_interfaces__srv__ListDevices_Response__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__srv__ListDevices_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__srv__ListDevices_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__srv__ListDevices_Response__Sequence__destroy(omniglove_interfaces__srv__ListDevices_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__srv__ListDevices_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__srv__ListDevices_Response__Sequence__are_equal(const omniglove_interfaces__srv__ListDevices_Response__Sequence * lhs, const omniglove_interfaces__srv__ListDevices_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__srv__ListDevices_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__srv__ListDevices_Response__Sequence__copy(
  const omniglove_interfaces__srv__ListDevices_Response__Sequence * input,
  omniglove_interfaces__srv__ListDevices_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__srv__ListDevices_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__srv__ListDevices_Response * data =
      (omniglove_interfaces__srv__ListDevices_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__srv__ListDevices_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__srv__ListDevices_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__srv__ListDevices_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
