#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__GetPoseInfo_Request() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__srv__GetPoseInfo_Request__init(msg: *mut GetPoseInfo_Request) -> bool;
    fn omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPoseInfo_Request>, size: usize) -> bool;
    fn omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPoseInfo_Request>);
    fn omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPoseInfo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPoseInfo_Request>) -> bool;
}

// Corresponds to omniglove_interfaces__srv__GetPoseInfo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__srv__GetPoseInfo_Request__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__srv__GetPoseInfo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPoseInfo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetPoseInfo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPoseInfo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPoseInfo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/srv/GetPoseInfo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__GetPoseInfo_Request() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__GetPoseInfo_Response() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__srv__GetPoseInfo_Response__init(msg: *mut GetPoseInfo_Response) -> bool;
    fn omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetPoseInfo_Response>, size: usize) -> bool;
    fn omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetPoseInfo_Response>);
    fn omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetPoseInfo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetPoseInfo_Response>) -> bool;
}

// Corresponds to omniglove_interfaces__srv__GetPoseInfo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetPoseInfo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__srv__GetPoseInfo_Response__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__srv__GetPoseInfo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetPoseInfo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetPoseInfo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetPoseInfo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetPoseInfo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/srv/GetPoseInfo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__GetPoseInfo_Response() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__GetStreamStatus_Request() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__srv__GetStreamStatus_Request__init(msg: *mut GetStreamStatus_Request) -> bool;
    fn omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStreamStatus_Request>, size: usize) -> bool;
    fn omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStreamStatus_Request>);
    fn omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStreamStatus_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStreamStatus_Request>) -> bool;
}

// Corresponds to omniglove_interfaces__srv__GetStreamStatus_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__srv__GetStreamStatus_Request__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__srv__GetStreamStatus_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStreamStatus_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStreamStatus_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStreamStatus_Request where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/srv/GetStreamStatus_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__GetStreamStatus_Request() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__GetStreamStatus_Response() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__srv__GetStreamStatus_Response__init(msg: *mut GetStreamStatus_Response) -> bool;
    fn omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetStreamStatus_Response>, size: usize) -> bool;
    fn omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetStreamStatus_Response>);
    fn omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetStreamStatus_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetStreamStatus_Response>) -> bool;
}

// Corresponds to omniglove_interfaces__srv__GetStreamStatus_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetStreamStatus_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__srv__GetStreamStatus_Response__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__srv__GetStreamStatus_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetStreamStatus_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetStreamStatus_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetStreamStatus_Response where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/srv/GetStreamStatus_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__GetStreamStatus_Response() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__ListDevices_Request() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__srv__ListDevices_Request__init(msg: *mut ListDevices_Request) -> bool;
    fn omniglove_interfaces__srv__ListDevices_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListDevices_Request>, size: usize) -> bool;
    fn omniglove_interfaces__srv__ListDevices_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListDevices_Request>);
    fn omniglove_interfaces__srv__ListDevices_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListDevices_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListDevices_Request>) -> bool;
}

// Corresponds to omniglove_interfaces__srv__ListDevices_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListDevices_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ListDevices_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__srv__ListDevices_Request__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__srv__ListDevices_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListDevices_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__ListDevices_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__ListDevices_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__ListDevices_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListDevices_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListDevices_Request where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/srv/ListDevices_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__ListDevices_Request() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__ListDevices_Response() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__srv__ListDevices_Response__init(msg: *mut ListDevices_Response) -> bool;
    fn omniglove_interfaces__srv__ListDevices_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListDevices_Response>, size: usize) -> bool;
    fn omniglove_interfaces__srv__ListDevices_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListDevices_Response>);
    fn omniglove_interfaces__srv__ListDevices_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListDevices_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListDevices_Response>) -> bool;
}

// Corresponds to omniglove_interfaces__srv__ListDevices_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListDevices_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub devices: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DeviceInfo>,

}



impl Default for ListDevices_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__srv__ListDevices_Response__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__srv__ListDevices_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListDevices_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__ListDevices_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__ListDevices_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__ListDevices_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListDevices_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListDevices_Response where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/srv/ListDevices_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__ListDevices_Response() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__SetStreamConfig_Request() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__srv__SetStreamConfig_Request__init(msg: *mut SetStreamConfig_Request) -> bool;
    fn omniglove_interfaces__srv__SetStreamConfig_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStreamConfig_Request>, size: usize) -> bool;
    fn omniglove_interfaces__srv__SetStreamConfig_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStreamConfig_Request>);
    fn omniglove_interfaces__srv__SetStreamConfig_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStreamConfig_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStreamConfig_Request>) -> bool;
}

// Corresponds to omniglove_interfaces__srv__SetStreamConfig_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__srv__SetStreamConfig_Request__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__srv__SetStreamConfig_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStreamConfig_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__SetStreamConfig_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__SetStreamConfig_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__SetStreamConfig_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStreamConfig_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStreamConfig_Request where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/srv/SetStreamConfig_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__SetStreamConfig_Request() }
  }
}


#[link(name = "omniglove_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__SetStreamConfig_Response() -> *const std::ffi::c_void;
}

#[link(name = "omniglove_interfaces__rosidl_generator_c")]
extern "C" {
    fn omniglove_interfaces__srv__SetStreamConfig_Response__init(msg: *mut SetStreamConfig_Response) -> bool;
    fn omniglove_interfaces__srv__SetStreamConfig_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetStreamConfig_Response>, size: usize) -> bool;
    fn omniglove_interfaces__srv__SetStreamConfig_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetStreamConfig_Response>);
    fn omniglove_interfaces__srv__SetStreamConfig_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetStreamConfig_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetStreamConfig_Response>) -> bool;
}

// Corresponds to omniglove_interfaces__srv__SetStreamConfig_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetStreamConfig_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !omniglove_interfaces__srv__SetStreamConfig_Response__init(&mut msg as *mut _) {
        panic!("Call to omniglove_interfaces__srv__SetStreamConfig_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetStreamConfig_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__SetStreamConfig_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__SetStreamConfig_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { omniglove_interfaces__srv__SetStreamConfig_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetStreamConfig_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetStreamConfig_Response where Self: Sized {
  const TYPE_NAME: &'static str = "omniglove_interfaces/srv/SetStreamConfig_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__omniglove_interfaces__srv__SetStreamConfig_Response() }
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


