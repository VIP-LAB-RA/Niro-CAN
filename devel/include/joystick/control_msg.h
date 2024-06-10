// Generated by gencpp from file joystick/control_msg.msg
// DO NOT EDIT!


#ifndef JOYSTICK_MESSAGE_CONTROL_MSG_H
#define JOYSTICK_MESSAGE_CONTROL_MSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace joystick
{
template <class ContainerAllocator>
struct control_msg_
{
  typedef control_msg_<ContainerAllocator> Type;

  control_msg_()
    : EPS_en(0)
    , ControlSW(0)
    , EPS_Interval(0)
    , SCC_En(0)
    , AEB_Act(0)
    , AEB_decel_value(0)
    , Alive_count(0)
    , SCC_value(0.0)
    , EPS_value(0.0)  {
    }
  control_msg_(const ContainerAllocator& _alloc)
    : EPS_en(0)
    , ControlSW(0)
    , EPS_Interval(0)
    , SCC_En(0)
    , AEB_Act(0)
    , AEB_decel_value(0)
    , Alive_count(0)
    , SCC_value(0.0)
    , EPS_value(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _EPS_en_type;
  _EPS_en_type EPS_en;

   typedef uint8_t _ControlSW_type;
  _ControlSW_type ControlSW;

   typedef uint8_t _EPS_Interval_type;
  _EPS_Interval_type EPS_Interval;

   typedef uint8_t _SCC_En_type;
  _SCC_En_type SCC_En;

   typedef uint8_t _AEB_Act_type;
  _AEB_Act_type AEB_Act;

   typedef uint8_t _AEB_decel_value_type;
  _AEB_decel_value_type AEB_decel_value;

   typedef uint8_t _Alive_count_type;
  _Alive_count_type Alive_count;

   typedef float _SCC_value_type;
  _SCC_value_type SCC_value;

   typedef float _EPS_value_type;
  _EPS_value_type EPS_value;





  typedef boost::shared_ptr< ::joystick::control_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::joystick::control_msg_<ContainerAllocator> const> ConstPtr;

}; // struct control_msg_

typedef ::joystick::control_msg_<std::allocator<void> > control_msg;

typedef boost::shared_ptr< ::joystick::control_msg > control_msgPtr;
typedef boost::shared_ptr< ::joystick::control_msg const> control_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::joystick::control_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::joystick::control_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::joystick::control_msg_<ContainerAllocator1> & lhs, const ::joystick::control_msg_<ContainerAllocator2> & rhs)
{
  return lhs.EPS_en == rhs.EPS_en &&
    lhs.ControlSW == rhs.ControlSW &&
    lhs.EPS_Interval == rhs.EPS_Interval &&
    lhs.SCC_En == rhs.SCC_En &&
    lhs.AEB_Act == rhs.AEB_Act &&
    lhs.AEB_decel_value == rhs.AEB_decel_value &&
    lhs.Alive_count == rhs.Alive_count &&
    lhs.SCC_value == rhs.SCC_value &&
    lhs.EPS_value == rhs.EPS_value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::joystick::control_msg_<ContainerAllocator1> & lhs, const ::joystick::control_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace joystick

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::joystick::control_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::joystick::control_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::joystick::control_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::joystick::control_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::joystick::control_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::joystick::control_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::joystick::control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4e1b84ccf5a5c6a0e362e2cdfaeae72d";
  }

  static const char* value(const ::joystick::control_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4e1b84ccf5a5c6a0ULL;
  static const uint64_t static_value2 = 0xe362e2cdfaeae72dULL;
};

template<class ContainerAllocator>
struct DataType< ::joystick::control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "joystick/control_msg";
  }

  static const char* value(const ::joystick::control_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::joystick::control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 EPS_en\n"
"uint8 ControlSW\n"
"uint8 EPS_Interval\n"
"uint8 SCC_En\n"
"uint8 AEB_Act\n"
"uint8 AEB_decel_value\n"
"uint8 Alive_count\n"
"float32 SCC_value\n"
"float32 EPS_value\n"
"\n"
;
  }

  static const char* value(const ::joystick::control_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::joystick::control_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.EPS_en);
      stream.next(m.ControlSW);
      stream.next(m.EPS_Interval);
      stream.next(m.SCC_En);
      stream.next(m.AEB_Act);
      stream.next(m.AEB_decel_value);
      stream.next(m.Alive_count);
      stream.next(m.SCC_value);
      stream.next(m.EPS_value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct control_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::joystick::control_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::joystick::control_msg_<ContainerAllocator>& v)
  {
    s << indent << "EPS_en: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EPS_en);
    s << indent << "ControlSW: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ControlSW);
    s << indent << "EPS_Interval: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EPS_Interval);
    s << indent << "SCC_En: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.SCC_En);
    s << indent << "AEB_Act: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.AEB_Act);
    s << indent << "AEB_decel_value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.AEB_decel_value);
    s << indent << "Alive_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Alive_count);
    s << indent << "SCC_value: ";
    Printer<float>::stream(s, indent + "  ", v.SCC_value);
    s << indent << "EPS_value: ";
    Printer<float>::stream(s, indent + "  ", v.EPS_value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JOYSTICK_MESSAGE_CONTROL_MSG_H