// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interface:msg/RplidarData.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__TRAITS_HPP_
#define CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "car_interface/msg/detail/rplidar_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace car_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RplidarData & msg,
  std::ostream & out)
{
  out << "{";
  // member: dist
  {
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RplidarData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RplidarData & msg, bool use_flow_style = false)
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
  const car_interface::msg::RplidarData & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const car_interface::msg::RplidarData & msg)
{
  return car_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<car_interface::msg::RplidarData>()
{
  return "car_interface::msg::RplidarData";
}

template<>
inline const char * name<car_interface::msg::RplidarData>()
{
  return "car_interface/msg/RplidarData";
}

template<>
struct has_fixed_size<car_interface::msg::RplidarData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interface::msg::RplidarData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interface::msg::RplidarData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__TRAITS_HPP_
