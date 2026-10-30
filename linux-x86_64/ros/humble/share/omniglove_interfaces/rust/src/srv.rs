#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to omniglove_interfaces__srv__GetPoseInfo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPoseInfo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub device_uid: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub info_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: u32,

}



impl Default for GetPoseInfo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetPoseInfo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetPoseInfo_Request {
  type RmwMsg = super::srv::rmw::GetPoseInfo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_uid: msg.device_uid,
        info_type: msg.info_type,
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      device_uid: msg.device_uid,
      info_type: msg.info_type,
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_uid: msg.device_uid,
      info_type: msg.info_type,
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to omniglove_interfaces__srv__GetPoseInfo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetPoseInfo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_status: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub return_code: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_error_code: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connection_generation: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub protocol_sequence: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nominal_source_rate_hz: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub calibration_state: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_distance_mm: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub capability_flags: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for GetPoseInfo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetPoseInfo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetPoseInfo_Response {
  type RmwMsg = super::srv::rmw::GetPoseInfo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        control_status: msg.control_status,
        return_code: msg.return_code,
        device_error_code: msg.device_error_code,
        request_id: msg.request_id,
        connection_generation: msg.connection_generation,
        protocol_sequence: msg.protocol_sequence,
        node_count: msg.node_count,
        hand: msg.hand,
        nominal_source_rate_hz: msg.nominal_source_rate_hz,
        calibration_state: msg.calibration_state,
        max_distance_mm: msg.max_distance_mm,
        capability_flags: msg.capability_flags,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      control_status: msg.control_status,
      return_code: msg.return_code,
      device_error_code: msg.device_error_code,
      request_id: msg.request_id,
      connection_generation: msg.connection_generation,
      protocol_sequence: msg.protocol_sequence,
      node_count: msg.node_count,
      hand: msg.hand,
      nominal_source_rate_hz: msg.nominal_source_rate_hz,
      calibration_state: msg.calibration_state,
      max_distance_mm: msg.max_distance_mm,
      capability_flags: msg.capability_flags,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      control_status: msg.control_status,
      return_code: msg.return_code,
      device_error_code: msg.device_error_code,
      request_id: msg.request_id,
      connection_generation: msg.connection_generation,
      protocol_sequence: msg.protocol_sequence,
      node_count: msg.node_count,
      hand: msg.hand,
      nominal_source_rate_hz: msg.nominal_source_rate_hz,
      calibration_state: msg.calibration_state,
      max_distance_mm: msg.max_distance_mm,
      capability_flags: msg.capability_flags,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to omniglove_interfaces__srv__GetStreamStatus_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStreamStatus_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub device_uid: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stream_kind: u8,

}



impl Default for GetStreamStatus_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStreamStatus_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetStreamStatus_Request {
  type RmwMsg = super::srv::rmw::GetStreamStatus_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_uid: msg.device_uid,
        stream_kind: msg.stream_kind,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      device_uid: msg.device_uid,
      stream_kind: msg.stream_kind,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_uid: msg.device_uid,
      stream_kind: msg.stream_kind,
    }
  }
}


// Corresponds to omniglove_interfaces__srv__GetStreamStatus_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetStreamStatus_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stream_error: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stream_mode: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_interval_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_timeout_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub callback_queue_capacity: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_components: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_source_rate_millihz: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_events: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_samples: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_no_data: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_timeouts: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_errors: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub callback_delivered: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub callback_dropped_full: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub callback_discontinuities: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub callback_queue_high_watermark: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_source_sequence: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_delivered_sequence: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_source_status: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for GetStreamStatus_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetStreamStatus_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetStreamStatus_Response {
  type RmwMsg = super::srv::rmw::GetStreamStatus_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        stream_error: msg.stream_error,
        state: msg.state,
        stream_mode: msg.stream_mode,
        enabled: msg.enabled,
        source_interval_ms: msg.source_interval_ms,
        source_timeout_ms: msg.source_timeout_ms,
        callback_queue_capacity: msg.callback_queue_capacity,
        pose_components: msg.pose_components,
        actual_source_rate_millihz: msg.actual_source_rate_millihz,
        source_events: msg.source_events,
        source_samples: msg.source_samples,
        source_no_data: msg.source_no_data,
        source_timeouts: msg.source_timeouts,
        source_errors: msg.source_errors,
        callback_delivered: msg.callback_delivered,
        callback_dropped_full: msg.callback_dropped_full,
        callback_discontinuities: msg.callback_discontinuities,
        callback_queue_high_watermark: msg.callback_queue_high_watermark,
        last_source_sequence: msg.last_source_sequence,
        last_delivered_sequence: msg.last_delivered_sequence,
        last_source_status: msg.last_source_status,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      stream_error: msg.stream_error,
      state: msg.state,
      stream_mode: msg.stream_mode,
      enabled: msg.enabled,
      source_interval_ms: msg.source_interval_ms,
      source_timeout_ms: msg.source_timeout_ms,
      callback_queue_capacity: msg.callback_queue_capacity,
      pose_components: msg.pose_components,
      actual_source_rate_millihz: msg.actual_source_rate_millihz,
      source_events: msg.source_events,
      source_samples: msg.source_samples,
      source_no_data: msg.source_no_data,
      source_timeouts: msg.source_timeouts,
      source_errors: msg.source_errors,
      callback_delivered: msg.callback_delivered,
      callback_dropped_full: msg.callback_dropped_full,
      callback_discontinuities: msg.callback_discontinuities,
      callback_queue_high_watermark: msg.callback_queue_high_watermark,
      last_source_sequence: msg.last_source_sequence,
      last_delivered_sequence: msg.last_delivered_sequence,
      last_source_status: msg.last_source_status,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      stream_error: msg.stream_error,
      state: msg.state,
      stream_mode: msg.stream_mode,
      enabled: msg.enabled,
      source_interval_ms: msg.source_interval_ms,
      source_timeout_ms: msg.source_timeout_ms,
      callback_queue_capacity: msg.callback_queue_capacity,
      pose_components: msg.pose_components,
      actual_source_rate_millihz: msg.actual_source_rate_millihz,
      source_events: msg.source_events,
      source_samples: msg.source_samples,
      source_no_data: msg.source_no_data,
      source_timeouts: msg.source_timeouts,
      source_errors: msg.source_errors,
      callback_delivered: msg.callback_delivered,
      callback_dropped_full: msg.callback_dropped_full,
      callback_discontinuities: msg.callback_discontinuities,
      callback_queue_high_watermark: msg.callback_queue_high_watermark,
      last_source_sequence: msg.last_source_sequence,
      last_delivered_sequence: msg.last_delivered_sequence,
      last_source_status: msg.last_source_status,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to omniglove_interfaces__srv__ListDevices_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListDevices_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ListDevices_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListDevices_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ListDevices_Request {
  type RmwMsg = super::srv::rmw::ListDevices_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to omniglove_interfaces__srv__ListDevices_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListDevices_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub devices: Vec<super::msg::DeviceInfo>,

}



impl Default for ListDevices_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListDevices_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ListDevices_Response {
  type RmwMsg = super::srv::rmw::ListDevices_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        devices: msg.devices
          .into_iter()
          .map(|elem| super::msg::DeviceInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        devices: msg.devices
          .iter()
          .map(|elem| super::msg::DeviceInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      devices: msg.devices
          .into_iter()
          .map(super::msg::DeviceInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to omniglove_interfaces__srv__SetStreamConfig_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStreamConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub device_uid: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stream_kind: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stream_mode: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_interval_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_timeout_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub callback_queue_capacity: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_components: u32,

}



impl Default for SetStreamConfig_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStreamConfig_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetStreamConfig_Request {
  type RmwMsg = super::srv::rmw::SetStreamConfig_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_uid: msg.device_uid,
        stream_kind: msg.stream_kind,
        stream_mode: msg.stream_mode,
        enabled: msg.enabled,
        source_interval_ms: msg.source_interval_ms,
        source_timeout_ms: msg.source_timeout_ms,
        callback_queue_capacity: msg.callback_queue_capacity,
        pose_components: msg.pose_components,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      device_uid: msg.device_uid,
      stream_kind: msg.stream_kind,
      stream_mode: msg.stream_mode,
      enabled: msg.enabled,
      source_interval_ms: msg.source_interval_ms,
      source_timeout_ms: msg.source_timeout_ms,
      callback_queue_capacity: msg.callback_queue_capacity,
      pose_components: msg.pose_components,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_uid: msg.device_uid,
      stream_kind: msg.stream_kind,
      stream_mode: msg.stream_mode,
      enabled: msg.enabled,
      source_interval_ms: msg.source_interval_ms,
      source_timeout_ms: msg.source_timeout_ms,
      callback_queue_capacity: msg.callback_queue_capacity,
      pose_components: msg.pose_components,
    }
  }
}


// Corresponds to omniglove_interfaces__srv__SetStreamConfig_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetStreamConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stream_error: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stream_mode: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_interval_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source_timeout_ms: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub callback_queue_capacity: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_components: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetStreamConfig_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetStreamConfig_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetStreamConfig_Response {
  type RmwMsg = super::srv::rmw::SetStreamConfig_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        stream_error: msg.stream_error,
        stream_mode: msg.stream_mode,
        enabled: msg.enabled,
        source_interval_ms: msg.source_interval_ms,
        source_timeout_ms: msg.source_timeout_ms,
        callback_queue_capacity: msg.callback_queue_capacity,
        pose_components: msg.pose_components,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      stream_error: msg.stream_error,
      stream_mode: msg.stream_mode,
      enabled: msg.enabled,
      source_interval_ms: msg.source_interval_ms,
      source_timeout_ms: msg.source_timeout_ms,
      callback_queue_capacity: msg.callback_queue_capacity,
      pose_components: msg.pose_components,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      stream_error: msg.stream_error,
      stream_mode: msg.stream_mode,
      enabled: msg.enabled,
      source_interval_ms: msg.source_interval_ms,
      source_timeout_ms: msg.source_timeout_ms,
      callback_queue_capacity: msg.callback_queue_capacity,
      pose_components: msg.pose_components,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__omniglove_interfaces__srv__GetPoseInfo() -> *const std::ffi::c_void;
}

// Corresponds to omniglove_interfaces__srv__GetPoseInfo
#[allow(missing_docs, non_camel_case_types)]
pub struct GetPoseInfo;

impl rosidl_runtime_rs::Service for GetPoseInfo {
    type Request = GetPoseInfo_Request;
    type Response = GetPoseInfo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__omniglove_interfaces__srv__GetPoseInfo() }
    }
}




#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__omniglove_interfaces__srv__GetStreamStatus() -> *const std::ffi::c_void;
}

// Corresponds to omniglove_interfaces__srv__GetStreamStatus
#[allow(missing_docs, non_camel_case_types)]
pub struct GetStreamStatus;

impl rosidl_runtime_rs::Service for GetStreamStatus {
    type Request = GetStreamStatus_Request;
    type Response = GetStreamStatus_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__omniglove_interfaces__srv__GetStreamStatus() }
    }
}




#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__omniglove_interfaces__srv__ListDevices() -> *const std::ffi::c_void;
}

// Corresponds to omniglove_interfaces__srv__ListDevices
#[allow(missing_docs, non_camel_case_types)]
pub struct ListDevices;

impl rosidl_runtime_rs::Service for ListDevices {
    type Request = ListDevices_Request;
    type Response = ListDevices_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__omniglove_interfaces__srv__ListDevices() }
    }
}




#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__omniglove_interfaces__srv__SetStreamConfig() -> *const std::ffi::c_void;
}

// Corresponds to omniglove_interfaces__srv__SetStreamConfig
#[allow(missing_docs, non_camel_case_types)]
pub struct SetStreamConfig;

impl rosidl_runtime_rs::Service for SetStreamConfig {
    type Request = SetStreamConfig_Request;
    type Response = SetStreamConfig_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__omniglove_interfaces__srv__SetStreamConfig() }
    }
}


