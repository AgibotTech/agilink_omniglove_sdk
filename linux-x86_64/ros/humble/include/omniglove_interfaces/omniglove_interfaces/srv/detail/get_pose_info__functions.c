// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omniglove_interfaces:srv/GetPoseInfo.idl
// generated code does not contain a copyright notice
#include "omniglove_interfaces/srv/detail/get_pose_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
omniglove_interfaces__srv__GetPoseInfo_Request__init(omniglove_interfaces__srv__GetPoseInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // device_uid
  // info_type
  // timeout_ms
  return true;
}

void
omniglove_interfaces__srv__GetPoseInfo_Request__fini(omniglove_interfaces__srv__GetPoseInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // device_uid
  // info_type
  // timeout_ms
}

bool
omniglove_interfaces__srv__GetPoseInfo_Request__are_equal(const omniglove_interfaces__srv__GetPoseInfo_Request * lhs, const omniglove_interfaces__srv__GetPoseInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_uid
  if (lhs->device_uid != rhs->device_uid) {
    return false;
  }
  // info_type
  if (lhs->info_type != rhs->info_type) {
    return false;
  }
  // timeout_ms
  if (lhs->timeout_ms != rhs->timeout_ms) {
    return false;
  }
  return true;
}

bool
omniglove_interfaces__srv__GetPoseInfo_Request__copy(
  const omniglove_interfaces__srv__GetPoseInfo_Request * input,
  omniglove_interfaces__srv__GetPoseInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // device_uid
  output->device_uid = input->device_uid;
  // info_type
  output->info_type = input->info_type;
  // timeout_ms
  output->timeout_ms = input->timeout_ms;
  return true;
}

omniglove_interfaces__srv__GetPoseInfo_Request *
omniglove_interfaces__srv__GetPoseInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetPoseInfo_Request * msg = (omniglove_interfaces__srv__GetPoseInfo_Request *)allocator.allocate(sizeof(omniglove_interfaces__srv__GetPoseInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__srv__GetPoseInfo_Request));
  bool success = omniglove_interfaces__srv__GetPoseInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__srv__GetPoseInfo_Request__destroy(omniglove_interfaces__srv__GetPoseInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__srv__GetPoseInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__init(omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetPoseInfo_Request * data = NULL;

  if (size) {
    data = (omniglove_interfaces__srv__GetPoseInfo_Request *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__srv__GetPoseInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__srv__GetPoseInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__srv__GetPoseInfo_Request__fini(&data[i - 1]);
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
omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__fini(omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * array)
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
      omniglove_interfaces__srv__GetPoseInfo_Request__fini(&array->data[i]);
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

omniglove_interfaces__srv__GetPoseInfo_Request__Sequence *
omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * array = (omniglove_interfaces__srv__GetPoseInfo_Request__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__srv__GetPoseInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__destroy(omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__are_equal(const omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * lhs, const omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__srv__GetPoseInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__copy(
  const omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * input,
  omniglove_interfaces__srv__GetPoseInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__srv__GetPoseInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__srv__GetPoseInfo_Request * data =
      (omniglove_interfaces__srv__GetPoseInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__srv__GetPoseInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__srv__GetPoseInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__srv__GetPoseInfo_Request__copy(
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
omniglove_interfaces__srv__GetPoseInfo_Response__init(omniglove_interfaces__srv__GetPoseInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // control_status
  // return_code
  // device_error_code
  // request_id
  // connection_generation
  // protocol_sequence
  // node_count
  // hand
  // nominal_source_rate_hz
  // calibration_state
  // max_distance_mm
  // capability_flags
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    omniglove_interfaces__srv__GetPoseInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
omniglove_interfaces__srv__GetPoseInfo_Response__fini(omniglove_interfaces__srv__GetPoseInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // control_status
  // return_code
  // device_error_code
  // request_id
  // connection_generation
  // protocol_sequence
  // node_count
  // hand
  // nominal_source_rate_hz
  // calibration_state
  // max_distance_mm
  // capability_flags
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
omniglove_interfaces__srv__GetPoseInfo_Response__are_equal(const omniglove_interfaces__srv__GetPoseInfo_Response * lhs, const omniglove_interfaces__srv__GetPoseInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // control_status
  if (lhs->control_status != rhs->control_status) {
    return false;
  }
  // return_code
  if (lhs->return_code != rhs->return_code) {
    return false;
  }
  // device_error_code
  if (lhs->device_error_code != rhs->device_error_code) {
    return false;
  }
  // request_id
  if (lhs->request_id != rhs->request_id) {
    return false;
  }
  // connection_generation
  if (lhs->connection_generation != rhs->connection_generation) {
    return false;
  }
  // protocol_sequence
  if (lhs->protocol_sequence != rhs->protocol_sequence) {
    return false;
  }
  // node_count
  if (lhs->node_count != rhs->node_count) {
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
  // calibration_state
  if (lhs->calibration_state != rhs->calibration_state) {
    return false;
  }
  // max_distance_mm
  if (lhs->max_distance_mm != rhs->max_distance_mm) {
    return false;
  }
  // capability_flags
  if (lhs->capability_flags != rhs->capability_flags) {
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
omniglove_interfaces__srv__GetPoseInfo_Response__copy(
  const omniglove_interfaces__srv__GetPoseInfo_Response * input,
  omniglove_interfaces__srv__GetPoseInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // control_status
  output->control_status = input->control_status;
  // return_code
  output->return_code = input->return_code;
  // device_error_code
  output->device_error_code = input->device_error_code;
  // request_id
  output->request_id = input->request_id;
  // connection_generation
  output->connection_generation = input->connection_generation;
  // protocol_sequence
  output->protocol_sequence = input->protocol_sequence;
  // node_count
  output->node_count = input->node_count;
  // hand
  output->hand = input->hand;
  // nominal_source_rate_hz
  output->nominal_source_rate_hz = input->nominal_source_rate_hz;
  // calibration_state
  output->calibration_state = input->calibration_state;
  // max_distance_mm
  output->max_distance_mm = input->max_distance_mm;
  // capability_flags
  output->capability_flags = input->capability_flags;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

omniglove_interfaces__srv__GetPoseInfo_Response *
omniglove_interfaces__srv__GetPoseInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetPoseInfo_Response * msg = (omniglove_interfaces__srv__GetPoseInfo_Response *)allocator.allocate(sizeof(omniglove_interfaces__srv__GetPoseInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omniglove_interfaces__srv__GetPoseInfo_Response));
  bool success = omniglove_interfaces__srv__GetPoseInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omniglove_interfaces__srv__GetPoseInfo_Response__destroy(omniglove_interfaces__srv__GetPoseInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omniglove_interfaces__srv__GetPoseInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__init(omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetPoseInfo_Response * data = NULL;

  if (size) {
    data = (omniglove_interfaces__srv__GetPoseInfo_Response *)allocator.zero_allocate(size, sizeof(omniglove_interfaces__srv__GetPoseInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omniglove_interfaces__srv__GetPoseInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omniglove_interfaces__srv__GetPoseInfo_Response__fini(&data[i - 1]);
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
omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__fini(omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * array)
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
      omniglove_interfaces__srv__GetPoseInfo_Response__fini(&array->data[i]);
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

omniglove_interfaces__srv__GetPoseInfo_Response__Sequence *
omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * array = (omniglove_interfaces__srv__GetPoseInfo_Response__Sequence *)allocator.allocate(sizeof(omniglove_interfaces__srv__GetPoseInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__destroy(omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__are_equal(const omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * lhs, const omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omniglove_interfaces__srv__GetPoseInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__copy(
  const omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * input,
  omniglove_interfaces__srv__GetPoseInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omniglove_interfaces__srv__GetPoseInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omniglove_interfaces__srv__GetPoseInfo_Response * data =
      (omniglove_interfaces__srv__GetPoseInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omniglove_interfaces__srv__GetPoseInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omniglove_interfaces__srv__GetPoseInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omniglove_interfaces__srv__GetPoseInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
