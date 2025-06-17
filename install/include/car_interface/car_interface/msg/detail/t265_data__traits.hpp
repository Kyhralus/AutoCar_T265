// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interface:msg/T265Data.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__T265_DATA__TRAITS_HPP_
#define CAR_INTERFACE__MSG__DETAIL__T265_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "car_interface/msg/detail/t265_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace car_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const T265Data & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_x
  {
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << ", ";
  }

  // member: pos_y
  {
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << ", ";
  }

  // member: pos_z
  {
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: pos_orient_x
  {
    out << "pos_orient_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_orient_x, out);
    out << ", ";
  }

  // member: pos_orient_y
  {
    out << "pos_orient_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_orient_y, out);
    out << ", ";
  }

  // member: pos_orient_z
  {
    out << "pos_orient_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_orient_z, out);
    out << ", ";
  }

  // member: pos_orient_w
  {
    out << "pos_orient_w: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_orient_w, out);
    out << ", ";
  }

  // member: vel_linear_x
  {
    out << "vel_linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_linear_x, out);
    out << ", ";
  }

  // member: vel_linear_y
  {
    out << "vel_linear_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_linear_y, out);
    out << ", ";
  }

  // member: vel_linear_z
  {
    out << "vel_linear_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_linear_z, out);
    out << ", ";
  }

  // member: vel_angular_x
  {
    out << "vel_angular_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_angular_x, out);
    out << ", ";
  }

  // member: vel_angular_y
  {
    out << "vel_angular_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_angular_y, out);
    out << ", ";
  }

  // member: vel_angular_z
  {
    out << "vel_angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_angular_z, out);
    out << ", ";
  }

  // member: acc_linear_x
  {
    out << "acc_linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_linear_x, out);
    out << ", ";
  }

  // member: acc_linear_y
  {
    out << "acc_linear_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_linear_y, out);
    out << ", ";
  }

  // member: acc_linear_z
  {
    out << "acc_linear_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_linear_z, out);
    out << ", ";
  }

  // member: acc_angular_x
  {
    out << "acc_angular_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_angular_x, out);
    out << ", ";
  }

  // member: acc_angular_y
  {
    out << "acc_angular_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_angular_y, out);
    out << ", ";
  }

  // member: acc_angular_z
  {
    out << "acc_angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_angular_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const T265Data & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << "\n";
  }

  // member: pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: pos_orient_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_orient_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_orient_x, out);
    out << "\n";
  }

  // member: pos_orient_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_orient_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_orient_y, out);
    out << "\n";
  }

  // member: pos_orient_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_orient_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_orient_z, out);
    out << "\n";
  }

  // member: pos_orient_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_orient_w: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_orient_w, out);
    out << "\n";
  }

  // member: vel_linear_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_linear_x, out);
    out << "\n";
  }

  // member: vel_linear_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_linear_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_linear_y, out);
    out << "\n";
  }

  // member: vel_linear_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_linear_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_linear_z, out);
    out << "\n";
  }

  // member: vel_angular_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_angular_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_angular_x, out);
    out << "\n";
  }

  // member: vel_angular_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_angular_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_angular_y, out);
    out << "\n";
  }

  // member: vel_angular_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_angular_z, out);
    out << "\n";
  }

  // member: acc_linear_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_linear_x, out);
    out << "\n";
  }

  // member: acc_linear_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_linear_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_linear_y, out);
    out << "\n";
  }

  // member: acc_linear_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_linear_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_linear_z, out);
    out << "\n";
  }

  // member: acc_angular_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_angular_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_angular_x, out);
    out << "\n";
  }

  // member: acc_angular_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_angular_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_angular_y, out);
    out << "\n";
  }

  // member: acc_angular_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_angular_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const T265Data & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace car_interface

namespace rosidl_generator_traits
{

[[deprecated("use car_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_interface::msg::T265Data & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const car_interface::msg::T265Data & msg)
{
  return car_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<car_interface::msg::T265Data>()
{
  return "car_interface::msg::T265Data";
}

template<>
inline const char * name<car_interface::msg::T265Data>()
{
  return "car_interface/msg/T265Data";
}

template<>
struct has_fixed_size<car_interface::msg::T265Data>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interface::msg::T265Data>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interface::msg::T265Data>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACE__MSG__DETAIL__T265_DATA__TRAITS_HPP_
