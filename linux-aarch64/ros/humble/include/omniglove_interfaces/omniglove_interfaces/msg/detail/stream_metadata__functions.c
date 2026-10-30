// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:msg/StreamMetadata.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/msg/detail/stream_metadata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
omniglove_interfaces__msg__StreamMetadata__init(omniglove_interfaces__msg__StreamMetadata * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    omniglove_interfaces__msg__StreamMetadata__fini(msg);
    return false;
  }
  // hand
  // flags
  // layout_version
  // device_sequence
  // device_uid
  // source_device_id
  // connection_generation
  // source_sequence
  // sample_monotonic_ns
  // gap_count
  return true;
}

void
omniglove_interfaces__msg__StreamMetadata__fini(omniglove_interfaces__msg__StreamMetadata * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hand
  // flags
  // layout_version
  // device_sequence
  // device_uid
  // source_device_id
  // connection_generation
  // source_sequence
  // sample_monotonic_ns
  // gap_count
}

bool
omniglove_interfaces__msg__StreamMetadata__are_equal(const omniglove_interfaces__msg__StreamMetadata * lhs, const omniglove_interfaces__msg__StreamMetadata * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // hand
  if (lhs->hand != rhs->hand) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // layout_version
  if (lhs->layout_version != rhs->layout_version) {
    return false;
  }
  // device_sequence
  if (lhs->device_sequence != rhs->device_sequence) {
    return false;
  }
  // device_uid
  if (lhs->device_uid != rhs->device_uid) {
    return false;
  }
  // source_device_id
  if (lhs->source_device_id != rhs->source_device_id) {
    return false;
  }
  // connection_generation
  if (lhs->connection_generation != rhs->connection_generation) {
    return false;
  }
  // source_sequence
  if (lhs->source_sequence != rhs->source_sequence) {
    return false;
  }
  // sample_monotonic_ns
  if (lhs->sample_monotonic_ns != rhs->sample_monotonic_ns) {
    return false;
  }
  // gap_count
  if (lhs->gap_count != rhs->gap_count) {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__msg__StreamMetadata__copy(
  const omniglove_interfaces__msg__StreamMetadata * input,
  omniglove_interfaces__msg__StreamMetadata * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // hand
  output->hand = input->hand;
  // flags
  output->flags = input->flags;
  // layout_version
  output->layout_version = input->layout_version;
  // device_sequence
  output->device_sequence = input->device_sequence;
  // device_uid
  output->device_uid = input->device_uid;
  // source_device_id
  output->source_device_id = input->source_device_id;
  // connection_generation
  output->connection_generation = input->connection_generation;
  // source_sequence
  output->source_sequence = input->source_sequence;
  // sample_monotonic_ns
  output->sample_monotonic_ns = input->sample_monotonic_ns;
  // gap_count
  output->gap_count = input->gap_count;
  return true;
}

omniglove_interfaces__msg__StreamMetadata *
omniglove_interfaces__msg__StreamMetadata__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__StreamMetadata * msg = (omniglove_interfaces__msg__StreamMetadata *)allocator.allocate(sizeof(omniglove_interfaces__msg__StreamMetadata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__msg__StreamMetadata));
  bool success = omniglove_interfaces__msg__StreamMetadata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__msg__StreamMetadata__destroy(omniglove_interfaces__msg__StreamMetadata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__msg__StreamMetadata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__msg__StreamMetadata__Sequence__init(omniglove_interfaces__msg__StreamMetadata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__StreamMetadata * data = NULL;

  if (size) {
    data = (omniglove_interfaces__msg__StreamMetadata *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__msg__StreamMetadata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__msg__StreamMetadata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__msg__StreamMetadata__fini(&data[i - 1]);
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
omniglove_interfaces__msg__StreamMetadata__Sequence__fini(omniglove_interfaces__msg__StreamMetadata__Sequence * array)
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
      omniglove_interfaces__msg__StreamMetadata__fini(&array->data[i]);
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

omniglove_interfaces__msg__StreamMetadata__Sequence *
omniglove_interfaces__msg__StreamMetadata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__msg__StreamMetadata__Sequence * array = (omniglove_interfaces__msg__StreamMetadata__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__msg__StreamMetadata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__msg__StreamMetadata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__msg__StreamMetadata__Sequence__destroy(omniglove_interfaces__msg__StreamMetadata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__msg__StreamMetadata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__msg__StreamMetadata__Sequence__are_equal(const omniglove_interfaces__msg__StreamMetadata__Sequence * lhs, const omniglove_interfaces__msg__StreamMetadata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__msg__StreamMetadata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__msg__StreamMetadata__Sequence__copy(
  const omniglove_interfaces__msg__StreamMetadata__Sequence * input,
  omniglove_interfaces__msg__StreamMetadata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__msg__StreamMetadata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__msg__StreamMetadata * data =
      (omniglove_interfaces__msg__StreamMetadata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__msg__StreamMetadata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__msg__StreamMetadata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__msg__StreamMetadata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
