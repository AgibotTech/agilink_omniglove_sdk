// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/srv/detail/get_stream_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
omniglove_interfaces__srv__GetStreamStatus_Request__init(omniglove_interfaces__srv__GetStreamStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // device_uid
  // stream_kind
  return true;
}

void
omniglove_interfaces__srv__GetStreamStatus_Request__fini(omniglove_interfaces__srv__GetStreamStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // device_uid
  // stream_kind
}

bool
omniglove_interfaces__srv__GetStreamStatus_Request__are_equal(const omniglove_interfaces__srv__GetStreamStatus_Request * lhs, const omniglove_interfaces__srv__GetStreamStatus_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_uid
  if (lhs->device_uid != rhs->device_uid) {
    return false;
  }
  // stream_kind
  if (lhs->stream_kind != rhs->stream_kind) {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__srv__GetStreamStatus_Request__copy(
  const omniglove_interfaces__srv__GetStreamStatus_Request * input,
  omniglove_interfaces__srv__GetStreamStatus_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // device_uid
  output->device_uid = input->device_uid;
  // stream_kind
  output->stream_kind = input->stream_kind;
  return true;
}

omniglove_interfaces__srv__GetStreamStatus_Request *
omniglove_interfaces__srv__GetStreamStatus_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetStreamStatus_Request * msg = (omniglove_interfaces__srv__GetStreamStatus_Request *)allocator.allocate(sizeof(omniglove_interfaces__srv__GetStreamStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__srv__GetStreamStatus_Request));
  bool success = omniglove_interfaces__srv__GetStreamStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__srv__GetStreamStatus_Request__destroy(omniglove_interfaces__srv__GetStreamStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__srv__GetStreamStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__init(omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetStreamStatus_Request * data = NULL;

  if (size) {
    data = (omniglove_interfaces__srv__GetStreamStatus_Request *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__srv__GetStreamStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__srv__GetStreamStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__srv__GetStreamStatus_Request__fini(&data[i - 1]);
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
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__fini(omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * array)
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
      omniglove_interfaces__srv__GetStreamStatus_Request__fini(&array->data[i]);
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

omniglove_interfaces__srv__GetStreamStatus_Request__Sequence *
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * array = (omniglove_interfaces__srv__GetStreamStatus_Request__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__srv__GetStreamStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__destroy(omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__are_equal(const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * lhs, const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__srv__GetStreamStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__copy(
  const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * input,
  omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__srv__GetStreamStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__srv__GetStreamStatus_Request * data =
      (omniglove_interfaces__srv__GetStreamStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__srv__GetStreamStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__srv__GetStreamStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__srv__GetStreamStatus_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
omniglove_interfaces__srv__GetStreamStatus_Response__init(omniglove_interfaces__srv__GetStreamStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // stream_error
  // state
  // stream_mode
  // enabled
  // source_interval_ms
  // source_timeout_ms
  // callback_queue_capacity
  // pose_components
  // actual_source_rate_millihz
  // source_events
  // source_samples
  // source_no_data
  // source_timeouts
  // source_errors
  // callback_delivered
  // callback_dropped_full
  // callback_discontinuities
  // callback_queue_high_watermark
  // last_source_sequence
  // last_delivered_sequence
  // last_source_status
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    omniglove_interfaces__srv__GetStreamStatus_Response__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__srv__GetStreamStatus_Response__fini(omniglove_interfaces__srv__GetStreamStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // stream_error
  // state
  // stream_mode
  // enabled
  // source_interval_ms
  // source_timeout_ms
  // callback_queue_capacity
  // pose_components
  // actual_source_rate_millihz
  // source_events
  // source_samples
  // source_no_data
  // source_timeouts
  // source_errors
  // callback_delivered
  // callback_dropped_full
  // callback_discontinuities
  // callback_queue_high_watermark
  // last_source_sequence
  // last_delivered_sequence
  // last_source_status
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
omniglove_interfaces__srv__GetStreamStatus_Response__are_equal(const omniglove_interfaces__srv__GetStreamStatus_Response * lhs, const omniglove_interfaces__srv__GetStreamStatus_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // stream_error
  if (lhs->stream_error != rhs->stream_error) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // stream_mode
  if (lhs->stream_mode != rhs->stream_mode) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // source_interval_ms
  if (lhs->source_interval_ms != rhs->source_interval_ms) {
    return false;
  }
  // source_timeout_ms
  if (lhs->source_timeout_ms != rhs->source_timeout_ms) {
    return false;
  }
  // callback_queue_capacity
  if (lhs->callback_queue_capacity != rhs->callback_queue_capacity) {
    return false;
  }
  // pose_components
  if (lhs->pose_components != rhs->pose_components) {
    return false;
  }
  // actual_source_rate_millihz
  if (lhs->actual_source_rate_millihz != rhs->actual_source_rate_millihz) {
    return false;
  }
  // source_events
  if (lhs->source_events != rhs->source_events) {
    return false;
  }
  // source_samples
  if (lhs->source_samples != rhs->source_samples) {
    return false;
  }
  // source_no_data
  if (lhs->source_no_data != rhs->source_no_data) {
    return false;
  }
  // source_timeouts
  if (lhs->source_timeouts != rhs->source_timeouts) {
    return false;
  }
  // source_errors
  if (lhs->source_errors != rhs->source_errors) {
    return false;
  }
  // callback_delivered
  if (lhs->callback_delivered != rhs->callback_delivered) {
    return false;
  }
  // callback_dropped_full
  if (lhs->callback_dropped_full != rhs->callback_dropped_full) {
    return false;
  }
  // callback_discontinuities
  if (lhs->callback_discontinuities != rhs->callback_discontinuities) {
    return false;
  }
  // callback_queue_high_watermark
  if (lhs->callback_queue_high_watermark != rhs->callback_queue_high_watermark) {
    return false;
  }
  // last_source_sequence
  if (lhs->last_source_sequence != rhs->last_source_sequence) {
    return false;
  }
  // last_delivered_sequence
  if (lhs->last_delivered_sequence != rhs->last_delivered_sequence) {
    return false;
  }
  // last_source_status
  if (lhs->last_source_status != rhs->last_source_status) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__srv__GetStreamStatus_Response__copy(
  const omniglove_interfaces__srv__GetStreamStatus_Response * input,
  omniglove_interfaces__srv__GetStreamStatus_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // stream_error
  output->stream_error = input->stream_error;
  // state
  output->state = input->state;
  // stream_mode
  output->stream_mode = input->stream_mode;
  // enabled
  output->enabled = input->enabled;
  // source_interval_ms
  output->source_interval_ms = input->source_interval_ms;
  // source_timeout_ms
  output->source_timeout_ms = input->source_timeout_ms;
  // callback_queue_capacity
  output->callback_queue_capacity = input->callback_queue_capacity;
  // pose_components
  output->pose_components = input->pose_components;
  // actual_source_rate_millihz
  output->actual_source_rate_millihz = input->actual_source_rate_millihz;
  // source_events
  output->source_events = input->source_events;
  // source_samples
  output->source_samples = input->source_samples;
  // source_no_data
  output->source_no_data = input->source_no_data;
  // source_timeouts
  output->source_timeouts = input->source_timeouts;
  // source_errors
  output->source_errors = input->source_errors;
  // callback_delivered
  output->callback_delivered = input->callback_delivered;
  // callback_dropped_full
  output->callback_dropped_full = input->callback_dropped_full;
  // callback_discontinuities
  output->callback_discontinuities = input->callback_discontinuities;
  // callback_queue_high_watermark
  output->callback_queue_high_watermark = input->callback_queue_high_watermark;
  // last_source_sequence
  output->last_source_sequence = input->last_source_sequence;
  // last_delivered_sequence
  output->last_delivered_sequence = input->last_delivered_sequence;
  // last_source_status
  output->last_source_status = input->last_source_status;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

omniglove_interfaces__srv__GetStreamStatus_Response *
omniglove_interfaces__srv__GetStreamStatus_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetStreamStatus_Response * msg = (omniglove_interfaces__srv__GetStreamStatus_Response *)allocator.allocate(sizeof(omniglove_interfaces__srv__GetStreamStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__srv__GetStreamStatus_Response));
  bool success = omniglove_interfaces__srv__GetStreamStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__srv__GetStreamStatus_Response__destroy(omniglove_interfaces__srv__GetStreamStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__srv__GetStreamStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__init(omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetStreamStatus_Response * data = NULL;

  if (size) {
    data = (omniglove_interfaces__srv__GetStreamStatus_Response *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__srv__GetStreamStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__srv__GetStreamStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__srv__GetStreamStatus_Response__fini(&data[i - 1]);
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
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__fini(omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * array)
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
      omniglove_interfaces__srv__GetStreamStatus_Response__fini(&array->data[i]);
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

omniglove_interfaces__srv__GetStreamStatus_Response__Sequence *
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * array = (omniglove_interfaces__srv__GetStreamStatus_Response__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__srv__GetStreamStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__destroy(omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__are_equal(const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * lhs, const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__srv__GetStreamStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__copy(
  const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * input,
  omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__srv__GetStreamStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__srv__GetStreamStatus_Response * data =
      (omniglove_interfaces__srv__GetStreamStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__srv__GetStreamStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__srv__GetStreamStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__srv__GetStreamStatus_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
