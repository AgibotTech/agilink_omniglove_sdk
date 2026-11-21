// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PostThumbLandmarks.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_thumb_landmarks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PostThumbLandmarks_tip
{
public:
  explicit Init_PostThumbLandmarks_tip(::omniglove_interfaces::msg::PostThumbLandmarks & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PostThumbLandmarks tip(::omniglove_interfaces::msg::PostThumbLandmarks::_tip_type arg)
  {
    msg_.tip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbLandmarks msg_;
};

class Init_PostThumbLandmarks_ip
{
public:
  explicit Init_PostThumbLandmarks_ip(::omniglove_interfaces::msg::PostThumbLandmarks & msg)
  : msg_(msg)
  {}
  Init_PostThumbLandmarks_tip ip(::omniglove_interfaces::msg::PostThumbLandmarks::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_PostThumbLandmarks_tip(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbLandmarks msg_;
};

class Init_PostThumbLandmarks_mcp
{
public:
  explicit Init_PostThumbLandmarks_mcp(::omniglove_interfaces::msg::PostThumbLandmarks & msg)
  : msg_(msg)
  {}
  Init_PostThumbLandmarks_ip mcp(::omniglove_interfaces::msg::PostThumbLandmarks::_mcp_type arg)
  {
    msg_.mcp = std::move(arg);
    return Init_PostThumbLandmarks_ip(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbLandmarks msg_;
};

class Init_PostThumbLandmarks_cmc
{
public:
  Init_PostThumbLandmarks_cmc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostThumbLandmarks_mcp cmc(::omniglove_interfaces::msg::PostThumbLandmarks::_cmc_type arg)
  {
    msg_.cmc = std::move(arg);
    return Init_PostThumbLandmarks_mcp(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostThumbLandmarks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PostThumbLandmarks>()
{
  return omniglove_interfaces::msg::builder::Init_PostThumbLandmarks_cmc();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__BUILDER_HPP_
