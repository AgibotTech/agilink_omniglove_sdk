// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PostFingerLandmarks.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_finger_landmarks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PostFingerLandmarks_tip
{
public:
  explicit Init_PostFingerLandmarks_tip(::omniglove_interfaces::msg::PostFingerLandmarks & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PostFingerLandmarks tip(::omniglove_interfaces::msg::PostFingerLandmarks::_tip_type arg)
  {
    msg_.tip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFingerLandmarks msg_;
};

class Init_PostFingerLandmarks_dip
{
public:
  explicit Init_PostFingerLandmarks_dip(::omniglove_interfaces::msg::PostFingerLandmarks & msg)
  : msg_(msg)
  {}
  Init_PostFingerLandmarks_tip dip(::omniglove_interfaces::msg::PostFingerLandmarks::_dip_type arg)
  {
    msg_.dip = std::move(arg);
    return Init_PostFingerLandmarks_tip(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFingerLandmarks msg_;
};

class Init_PostFingerLandmarks_pip
{
public:
  explicit Init_PostFingerLandmarks_pip(::omniglove_interfaces::msg::PostFingerLandmarks & msg)
  : msg_(msg)
  {}
  Init_PostFingerLandmarks_dip pip(::omniglove_interfaces::msg::PostFingerLandmarks::_pip_type arg)
  {
    msg_.pip = std::move(arg);
    return Init_PostFingerLandmarks_dip(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFingerLandmarks msg_;
};

class Init_PostFingerLandmarks_mcp
{
public:
  Init_PostFingerLandmarks_mcp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostFingerLandmarks_pip mcp(::omniglove_interfaces::msg::PostFingerLandmarks::_mcp_type arg)
  {
    msg_.mcp = std::move(arg);
    return Init_PostFingerLandmarks_pip(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFingerLandmarks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PostFingerLandmarks>()
{
  return omniglove_interfaces::msg::builder::Init_PostFingerLandmarks_mcp();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__BUILDER_HPP_
