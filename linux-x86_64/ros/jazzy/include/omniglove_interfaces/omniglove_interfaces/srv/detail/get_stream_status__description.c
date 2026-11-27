// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/srv/detail/get_stream_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__srv__GetStreamStatus__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0xd5, 0x64, 0x1d, 0x51, 0x18, 0x2e, 0xfc,
      0x2b, 0xf3, 0x12, 0x07, 0x77, 0xc4, 0xba, 0xd5,
      0xbf, 0x6d, 0xfa, 0xdd, 0x77, 0xc0, 0x74, 0xee,
      0x66, 0x8c, 0x09, 0x0f, 0x44, 0x34, 0xab, 0x95,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__srv__GetStreamStatus_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x5b, 0xfc, 0xeb, 0xa7, 0xd1, 0xa6, 0x3d,
      0x17, 0x45, 0x36, 0x9c, 0xc1, 0xdc, 0xf8, 0x07,
      0xdc, 0x41, 0x0d, 0xca, 0xea, 0x5e, 0x71, 0x4f,
      0xd5, 0x75, 0x3e, 0xda, 0x3f, 0xb6, 0x66, 0x73,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__srv__GetStreamStatus_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x50, 0x88, 0x39, 0xa6, 0xda, 0x9f, 0x8b,
      0x37, 0xeb, 0xc2, 0x96, 0x63, 0x2f, 0xc5, 0xee,
      0x7d, 0x99, 0xff, 0x22, 0x7a, 0x79, 0x89, 0x5f,
      0xed, 0xe2, 0xe7, 0xde, 0xe4, 0x59, 0x8d, 0xd4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__srv__GetStreamStatus_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0x3d, 0x13, 0xde, 0x07, 0x76, 0xc9, 0xba,
      0x5b, 0x86, 0x02, 0x9c, 0x7a, 0xa8, 0x60, 0xec,
      0x19, 0x12, 0x77, 0x5c, 0x79, 0x66, 0x72, 0x69,
      0x18, 0x3b, 0x90, 0x13, 0xda, 0x22, 0xf5, 0x04,
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

static char omniglove_interfaces__srv__GetStreamStatus__TYPE_NAME[] = "omniglove_interfaces/srv/GetStreamStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char omniglove_interfaces__srv__GetStreamStatus_Event__TYPE_NAME[] = "omniglove_interfaces/srv/GetStreamStatus_Event";
static char omniglove_interfaces__srv__GetStreamStatus_Request__TYPE_NAME[] = "omniglove_interfaces/srv/GetStreamStatus_Request";
static char omniglove_interfaces__srv__GetStreamStatus_Response__TYPE_NAME[] = "omniglove_interfaces/srv/GetStreamStatus_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char omniglove_interfaces__srv__GetStreamStatus__FIELD_NAME__request_message[] = "request_message";
static char omniglove_interfaces__srv__GetStreamStatus__FIELD_NAME__response_message[] = "response_message";
static char omniglove_interfaces__srv__GetStreamStatus__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__srv__GetStreamStatus__FIELDS[] = {
  {
    {omniglove_interfaces__srv__GetStreamStatus__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__srv__GetStreamStatus_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__srv__GetStreamStatus_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__srv__GetStreamStatus_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__srv__GetStreamStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__srv__GetStreamStatus__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__srv__GetStreamStatus__TYPE_NAME, 40, 40},
      {omniglove_interfaces__srv__GetStreamStatus__FIELDS, 3, 3},
    },
    {omniglove_interfaces__srv__GetStreamStatus__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__srv__GetStreamStatus_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omniglove_interfaces__srv__GetStreamStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = omniglove_interfaces__srv__GetStreamStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omniglove_interfaces__srv__GetStreamStatus_Request__FIELD_NAME__device_uid[] = "device_uid";
static char omniglove_interfaces__srv__GetStreamStatus_Request__FIELD_NAME__stream_kind[] = "stream_kind";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__srv__GetStreamStatus_Request__FIELDS[] = {
  {
    {omniglove_interfaces__srv__GetStreamStatus_Request__FIELD_NAME__device_uid, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Request__FIELD_NAME__stream_kind, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__srv__GetStreamStatus_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__srv__GetStreamStatus_Request__TYPE_NAME, 48, 48},
      {omniglove_interfaces__srv__GetStreamStatus_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__success[] = "success";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__stream_error[] = "stream_error";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__state[] = "state";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__stream_mode[] = "stream_mode";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__enabled[] = "enabled";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_interval_ms[] = "source_interval_ms";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_timeout_ms[] = "source_timeout_ms";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_queue_capacity[] = "callback_queue_capacity";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__pose_components[] = "pose_components";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__actual_source_rate_millihz[] = "actual_source_rate_millihz";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_events[] = "source_events";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_samples[] = "source_samples";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_no_data[] = "source_no_data";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_timeouts[] = "source_timeouts";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_errors[] = "source_errors";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_delivered[] = "callback_delivered";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_dropped_full[] = "callback_dropped_full";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_discontinuities[] = "callback_discontinuities";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_queue_high_watermark[] = "callback_queue_high_watermark";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__last_source_sequence[] = "last_source_sequence";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__last_delivered_sequence[] = "last_delivered_sequence";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__last_source_status[] = "last_source_status";
static char omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__srv__GetStreamStatus_Response__FIELDS[] = {
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__stream_error, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__stream_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_interval_ms, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_timeout_ms, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_queue_capacity, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__pose_components, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__actual_source_rate_millihz, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_events, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_samples, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_no_data, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_timeouts, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__source_errors, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_delivered, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_dropped_full, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_discontinuities, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__callback_queue_high_watermark, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__last_source_sequence, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__last_delivered_sequence, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__last_source_status, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__FIELD_NAME__message, 7, 7},
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
omniglove_interfaces__srv__GetStreamStatus_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__srv__GetStreamStatus_Response__TYPE_NAME, 49, 49},
      {omniglove_interfaces__srv__GetStreamStatus_Response__FIELDS, 23, 23},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omniglove_interfaces__srv__GetStreamStatus_Event__FIELD_NAME__info[] = "info";
static char omniglove_interfaces__srv__GetStreamStatus_Event__FIELD_NAME__request[] = "request";
static char omniglove_interfaces__srv__GetStreamStatus_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__srv__GetStreamStatus_Event__FIELDS[] = {
  {
    {omniglove_interfaces__srv__GetStreamStatus_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omniglove_interfaces__srv__GetStreamStatus_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omniglove_interfaces__srv__GetStreamStatus_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__srv__GetStreamStatus_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__srv__GetStreamStatus_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__srv__GetStreamStatus_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__srv__GetStreamStatus_Event__TYPE_NAME, 46, 46},
      {omniglove_interfaces__srv__GetStreamStatus_Event__FIELDS, 3, 3},
    },
    {omniglove_interfaces__srv__GetStreamStatus_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__srv__GetStreamStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omniglove_interfaces__srv__GetStreamStatus_Response__get_type_description(NULL)->type_description.fields;
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
  "---\n"
  "bool success\n"
  "uint32 stream_error\n"
  "uint32 state\n"
  "uint32 stream_mode\n"
  "bool enabled\n"
  "uint32 source_interval_ms\n"
  "uint32 source_timeout_ms\n"
  "uint32 callback_queue_capacity\n"
  "uint32 pose_components\n"
  "uint64 actual_source_rate_millihz\n"
  "uint64 source_events\n"
  "uint64 source_samples\n"
  "uint64 source_no_data\n"
  "uint64 source_timeouts\n"
  "uint64 source_errors\n"
  "uint64 callback_delivered\n"
  "uint64 callback_dropped_full\n"
  "uint64 callback_discontinuities\n"
  "uint64 callback_queue_high_watermark\n"
  "uint64 last_source_sequence\n"
  "uint64 last_delivered_sequence\n"
  "uint32 last_source_status\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__srv__GetStreamStatus__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__srv__GetStreamStatus__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 654, 654},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__srv__GetStreamStatus_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__srv__GetStreamStatus_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__srv__GetStreamStatus_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__srv__GetStreamStatus_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__srv__GetStreamStatus_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__srv__GetStreamStatus_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__srv__GetStreamStatus__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__srv__GetStreamStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__srv__GetStreamStatus_Event__get_individual_type_description_source(NULL);
    sources[3] = *omniglove_interfaces__srv__GetStreamStatus_Request__get_individual_type_description_source(NULL);
    sources[4] = *omniglove_interfaces__srv__GetStreamStatus_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__srv__GetStreamStatus_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__srv__GetStreamStatus_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__srv__GetStreamStatus_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__srv__GetStreamStatus_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__srv__GetStreamStatus_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__srv__GetStreamStatus_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__srv__GetStreamStatus_Request__get_individual_type_description_source(NULL);
    sources[3] = *omniglove_interfaces__srv__GetStreamStatus_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
