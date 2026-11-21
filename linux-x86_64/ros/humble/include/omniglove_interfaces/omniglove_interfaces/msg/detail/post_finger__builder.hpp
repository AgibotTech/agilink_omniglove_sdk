// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PostFinger.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_finger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PostFinger_rx_tip_target
{
public:
  explicit Init_PostFinger_rx_tip_target(::omniglove_interfaces::msg::PostFinger & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PostFinger rx_tip_target(::omniglove_interfaces::msg::PostFinger::_rx_tip_target_type arg)
  {
    msg_.rx_tip_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFinger msg_;
};

class Init_PostFinger_landmarks
{
public:
  explicit Init_PostFinger_landmarks(::omniglove_interfaces::msg::PostFinger & msg)
  : msg_(msg)
  {}
  Init_PostFinger_rx_tip_target landmarks(::omniglove_interfaces::msg::PostFinger::_landmarks_type arg)
  {
    msg_.landmarks = std::move(arg);
    return Init_PostFinger_rx_tip_target(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFinger msg_;
};

class Init_PostFinger_joints_rad
{
public:
  Init_PostFinger_joints_rad()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostFinger_landmarks joints_rad(::omniglove_interfaces::msg::PostFinger::_joints_rad_type arg)
  {
    msg_.joints_rad = std::move(arg);
    return Init_PostFinger_landmarks(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostFinger msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PostFinger>()
{
  return omniglove_interfaces::msg::builder::Init_PostFinger_joints_rad();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__BUILDER_HPP_
