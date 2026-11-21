// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:srv/SetStreamConfig.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/srv/detail/set_stream_config__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__srv__SetStreamConfig__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xf1, 0x1a, 0xf6, 0xb3, 0xc8, 0xee, 0xa8,
      0xbb, 0xa7, 0x81, 0xbd, 0x77, 0x14, 0xd4, 0x75,
      0x9f, 0x7d, 0x9c, 0x69, 0x40, 0x53, 0x79, 0x53,
      0x9c, 0x81, 0x60, 0x55, 0x36, 0xe2, 0xa2, 0x6c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__srv__SetStreamConfig_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0x7e, 0xc9, 0x2f, 0x3c, 0x46, 0xb7, 0x24,
      0xd7, 0x2f, 0xc0, 0xbc, 0xb2, 0x91, 0xeb, 0xc2,
      0x21, 0x4b, 0xce, 0x8e, 0x0c, 0x8a, 0x45, 0x40,
      0x80, 0x7d, 0xc5, 0xbf, 0x62, 0x70, 0x30, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__srv__SetStreamConfig_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x51, 0xe5, 0x19, 0x97, 0x13, 0x39, 0x3e,
      0xd5, 0xa5, 0x15, 0xc3, 0x86, 0x61, 0xe9, 0xed,
      0x9e, 0x59, 0x5f, 0x3c, 0x5f, 0x6b, 0xd3, 0x3f,
      0xcf, 0x30, 0x8a, 0x8d, 0xb4, 0x91, 0x19, 0x0d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__srv__SetStreamConfig_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xfa, 0x81, 0xba, 0xf6, 0xa1, 0xdc, 0x2f,
      0x65, 0x20, 0xc6, 0x4f, 0xbc, 0x10, 0x1e, 0x76,
      0xc9, 0x69, 0x92, 0xd6, 0x31, 0x1a, 0xcc, 0x04,
      0x05, 0xf6, 0x0b, 0xc7, 0xc4, 0x20, 0x20, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char omniglove_interfaces__srv__SetStreamConfig__TYPE_NAME[] = "omniglove_interfaces/srv/SetStreamConfig";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char omniglove_interfaces__srv__SetStreamConfig_Event__TYPE_NAME[] = "omniglove_interfaces/srv/SetStreamConfig_Event";
static char omniglove_interfaces__srv__SetStreamConfig_Request__TYPE_NAME[] = "omniglove_interfaces/srv/SetStreamConfig_Request";
static char omniglove_interfaces__srv__SetStreamConfig_Response__TYPE_NAME[] = "omniglove_interfaces/srv/SetStreamConfig_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char omniglove_interfaces__srv__SetStreamConfig__FIELD_NAME__request_message[] = "request_message";
static char omniglove_interfaces__srv__SetStreamConfig__FIELD_NAME__response_message[] = "response_message";
static char omniglove_interfaces__srv__SetStreamConfig__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__srv__SetStreamConfig__FIELDS[] = {
  {
    {omniglove_interfaces__srv__SetStreamConfig__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__srv__SetStreamConfig_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__srv__SetStreamConfig_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__srv__SetStreamConfig_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__srv__SetStreamConfig__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__srv__SetStreamConfig__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__srv__SetStreamConfig__TYPE_NAME, 40, 40},
      {omniglove_interfaces__srv__SetStreamConfig__FIELDS, 3, 3},
    },
    {omniglove_interfaces__srv__SetStreamConfig__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__srv__SetStreamConfig_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omniglove_interfaces__srv__SetStreamConfig_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = omniglove_interfaces__srv__SetStreamConfig_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__device_uid[] = "device_uid";
static char omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__stream_kind[] = "stream_kind";
static char omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__stream_mode[] = "stream_mode";
static char omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__enabled[] = "enabled";
static char omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__source_interval_ms[] = "source_interval_ms";
static char omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__source_timeout_ms[] = "source_timeout_ms";
static char omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__callback_queue_capacity[] = "callback_queue_capacity";
static char omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__pose_components[] = "pose_components";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__srv__SetStreamConfig_Request__FIELDS[] = {
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__device_uid, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__stream_kind, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__stream_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__source_interval_ms, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__source_timeout_ms, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__callback_queue_capacity, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__FIELD_NAME__pose_components, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__srv__SetStreamConfig_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__srv__SetStreamConfig_Request__TYPE_NAME, 48, 48},
      {omniglove_interfaces__srv__SetStreamConfig_Request__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__success[] = "success";
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__stream_error[] = "stream_error";
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__stream_mode[] = "stream_mode";
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__enabled[] = "enabled";
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__source_interval_ms[] = "source_interval_ms";
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__source_timeout_ms[] = "source_timeout_ms";
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__callback_queue_capacity[] = "callback_queue_capacity";
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__pose_components[] = "pose_components";
static char omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__srv__SetStreamConfig_Response__FIELDS[] = {
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__stream_error, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__stream_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__source_interval_ms, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__source_timeout_ms, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__callback_queue_capacity, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__pose_components, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__srv__SetStreamConfig_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__srv__SetStreamConfig_Response__TYPE_NAME, 49, 49},
      {omniglove_interfaces__srv__SetStreamConfig_Response__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omniglove_interfaces__srv__SetStreamConfig_Event__FIELD_NAME__info[] = "info";
static char omniglove_interfaces__srv__SetStreamConfig_Event__FIELD_NAME__request[] = "request";
static char omniglove_interfaces__srv__SetStreamConfig_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__srv__SetStreamConfig_Event__FIELDS[] = {
  {
    {omniglove_interfaces__srv__SetStreamConfig_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omniglove_interfaces__srv__SetStreamConfig_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omniglove_interfaces__srv__SetStreamConfig_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__srv__SetStreamConfig_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__SetStreamConfig_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__srv__SetStreamConfig_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__srv__SetStreamConfig_Event__TYPE_NAME, 46, 46},
      {omniglove_interfaces__srv__SetStreamConfig_Event__FIELDS, 3, 3},
    },
    {omniglove_interfaces__srv__SetStreamConfig_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__srv__SetStreamConfig_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omniglove_interfaces__srv__SetStreamConfig_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0\n"
  "\n"
  "uint64 device_uid\n"
  "uint8 stream_kind\n"
  "uint32 stream_mode\n"
  "bool enabled\n"
  "uint32 source_interval_ms\n"
  "uint32 source_timeout_ms\n"
  "uint32 callback_queue_capacity\n"
  "uint32 pose_components\n"
  "---\n"
  "bool success\n"
  "uint32 stream_error\n"
  "uint32 stream_mode\n"
  "bool enabled\n"
  "uint32 source_interval_ms\n"
  "uint32 source_timeout_ms\n"
  "uint32 callback_queue_capacity\n"
  "uint32 pose_components\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__srv__SetStreamConfig__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__srv__SetStreamConfig__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 426, 426},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__srv__SetStreamConfig_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__srv__SetStreamConfig_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__srv__SetStreamConfig_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__srv__SetStreamConfig_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__srv__SetStreamConfig_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__srv__SetStreamConfig_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__srv__SetStreamConfig__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__srv__SetStreamConfig__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__srv__SetStreamConfig_Event__get_individual_type_description_source(NULL);
    sources[3] = *omniglove_interfaces__srv__SetStreamConfig_Request__get_individual_type_description_source(NULL);
    sources[4] = *omniglove_interfaces__srv__SetStreamConfig_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__srv__SetStreamConfig_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__srv__SetStreamConfig_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__srv__SetStreamConfig_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__srv__SetStreamConfig_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__srv__SetStreamConfig_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__srv__SetStreamConfig_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__srv__SetStreamConfig_Request__get_individual_type_description_source(NULL);
    sources[3] = *omniglove_interfaces__srv__SetStreamConfig_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
