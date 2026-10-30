// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/TactileFinger.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_finger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_TactileFinger_root
{
public:
  explicit Init_TactileFinger_root(::omniglove_interfaces::msg::TactileFinger & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::TactileFinger root(::omniglove_interfaces::msg::TactileFinger::_root_type arg)
  {
    msg_.root = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileFinger msg_;
};

class Init_TactileFinger_middle
{
public:
  explicit Init_TactileFinger_middle(::omniglove_interfaces::msg::TactileFinger & msg)
  : msg_(msg)
  {}
  Init_TactileFinger_root middle(::omniglove_interfaces::msg::TactileFinger::_middle_type arg)
  {
    msg_.middle = std::move(arg);
    return Init_TactileFinger_root(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileFinger msg_;
};

class Init_TactileFinger_pad
{
public:
  explicit Init_TactileFinger_pad(::omniglove_interfaces::msg::TactileFinger & msg)
  : msg_(msg)
  {}
  Init_TactileFinger_middle pad(::omniglove_interfaces::msg::TactileFinger::_pad_type arg)
  {
    msg_.pad = std::move(arg);
    return Init_TactileFinger_middle(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileFinger msg_;
};

class Init_TactileFinger_tip
{
public:
  Init_TactileFinger_tip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactileFinger_pad tip(::omniglove_interfaces::msg::TactileFinger::_tip_type arg)
  {
    msg_.tip = std::move(arg);
    return Init_TactileFinger_pad(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileFinger msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::TactileFinger>()
{
  return omniglove_interfaces::msg::builder::Init_TactileFinger_tip();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__BUILDER_HPP_
