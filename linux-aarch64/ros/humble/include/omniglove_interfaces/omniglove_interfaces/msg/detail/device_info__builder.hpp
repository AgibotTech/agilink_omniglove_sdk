// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_DeviceInfo_topic_namespace
{
public:
  explicit Init_DeviceInfo_topic_namespace(::omniglove_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::DeviceInfo topic_namespace(::omniglove_interfaces::msg::DeviceInfo::_topic_namespace_type arg)
  {
    msg_.topic_namespace = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_nominal_source_rate_hz
{
public:
  explicit Init_DeviceInfo_nominal_source_rate_hz(::omniglove_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_topic_namespace nominal_source_rate_hz(::omniglove_interfaces::msg::DeviceInfo::_nominal_source_rate_hz_type arg)
  {
    msg_.nominal_source_rate_hz = std::move(arg);
    return Init_DeviceInfo_topic_namespace(msg_);
  }

private:
  ::omniglove_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_hand
{
public:
  explicit Init_DeviceInfo_hand(::omniglove_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_nominal_source_rate_hz hand(::omniglove_interfaces::msg::DeviceInfo::_hand_type arg)
  {
    msg_.hand = std::move(arg);
    return Init_DeviceInfo_nominal_source_rate_hz(msg_);
  }

private:
  ::omniglove_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_opaque_token
{
public:
  explicit Init_DeviceInfo_opaque_token(::omniglove_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_hand opaque_token(::omniglove_interfaces::msg::DeviceInfo::_opaque_token_type arg)
  {
    msg_.opaque_token = std::move(arg);
    return Init_DeviceInfo_hand(msg_);
  }

private:
  ::omniglove_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_product_key
{
public:
  explicit Init_DeviceInfo_product_key(::omniglove_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_opaque_token product_key(::omniglove_interfaces::msg::DeviceInfo::_product_key_type arg)
  {
    msg_.product_key = std::move(arg);
    return Init_DeviceInfo_opaque_token(msg_);
  }

private:
  ::omniglove_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_uid
{
public:
  Init_DeviceInfo_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_product_key uid(::omniglove_interfaces::msg::DeviceInfo::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return Init_DeviceInfo_product_key(msg_);
  }

private:
  ::omniglove_interfaces::msg::DeviceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::DeviceInfo>()
{
  return omniglove_interfaces::msg::builder::Init_DeviceInfo_uid();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
