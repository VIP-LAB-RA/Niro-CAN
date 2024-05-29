// Generated by gencpp from file can_package/CONTROL_MSG_1.msg
// DO NOT EDIT!


#ifndef CAN_PACKAGE_MESSAGE_CONTROL_MSG_1_H
#define CAN_PACKAGE_MESSAGE_CONTROL_MSG_1_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace can_package
{
template <class ContainerAllocator>
struct CONTROL_MSG_1_
{
  typedef CONTROL_MSG_1_<ContainerAllocator> Type;

  CONTROL_MSG_1_()
    : ControlSW(false)
    , EPS_En(false)
    , SCC_En(false)
    , AEB_Act(false)
    , EPS_Interval(0)
    , AEB_decel_value(0)
    , Alive_count(0)  {
    }
  CONTROL_MSG_1_(const ContainerAllocator& _alloc)
    : ControlSW(false)
    , EPS_En(false)
    , SCC_En(false)
    , AEB_Act(false)
    , EPS_Interval(0)
    , AEB_decel_value(0)
    , Alive_count(0)  {
  (void)_alloc;
    }



   typedef uint8_t _ControlSW_type;
  _ControlSW_type ControlSW;

   typedef uint8_t _EPS_En_type;
  _EPS_En_type EPS_En;

   typedef uint8_t _SCC_En_type;
  _SCC_En_type SCC_En;

   typedef uint8_t _AEB_Act_type;
  _AEB_Act_type AEB_Act;

   typedef uint8_t _EPS_Interval_type;
  _EPS_Interval_type EPS_Interval;

   typedef uint8_t _AEB_decel_value_type;
  _AEB_decel_value_type AEB_decel_value;

   typedef uint8_t _Alive_count_type;
  _Alive_count_type Alive_count;





  typedef boost::shared_ptr< ::can_package::CONTROL_MSG_1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::can_package::CONTROL_MSG_1_<ContainerAllocator> const> ConstPtr;

}; // struct CONTROL_MSG_1_

typedef ::can_package::CONTROL_MSG_1_<std::allocator<void> > CONTROL_MSG_1;

typedef boost::shared_ptr< ::can_package::CONTROL_MSG_1 > CONTROL_MSG_1Ptr;
typedef boost::shared_ptr< ::can_package::CONTROL_MSG_1 const> CONTROL_MSG_1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::can_package::CONTROL_MSG_1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::can_package::CONTROL_MSG_1_<ContainerAllocator1> & lhs, const ::can_package::CONTROL_MSG_1_<ContainerAllocator2> & rhs)
{
  return lhs.ControlSW == rhs.ControlSW &&
    lhs.EPS_En == rhs.EPS_En &&
    lhs.SCC_En == rhs.SCC_En &&
    lhs.AEB_Act == rhs.AEB_Act &&
    lhs.EPS_Interval == rhs.EPS_Interval &&
    lhs.AEB_decel_value == rhs.AEB_decel_value &&
    lhs.Alive_count == rhs.Alive_count;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::can_package::CONTROL_MSG_1_<ContainerAllocator1> & lhs, const ::can_package::CONTROL_MSG_1_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace can_package

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::can_package::CONTROL_MSG_1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::can_package::CONTROL_MSG_1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::can_package::CONTROL_MSG_1_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "476713e91b4fe704c7741061e3ed1316";
  }

  static const char* value(const ::can_package::CONTROL_MSG_1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x476713e91b4fe704ULL;
  static const uint64_t static_value2 = 0xc7741061e3ed1316ULL;
};

template<class ContainerAllocator>
struct DataType< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "can_package/CONTROL_MSG_1";
  }

  static const char* value(const ::can_package::CONTROL_MSG_1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ControlSW\n"
"bool EPS_En\n"
"bool SCC_En\n"
"bool AEB_Act\n"
"uint8 EPS_Interval \n"
"uint8 AEB_decel_value\n"
"uint8 Alive_count\n"
;
  }

  static const char* value(const ::can_package::CONTROL_MSG_1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ControlSW);
      stream.next(m.EPS_En);
      stream.next(m.SCC_En);
      stream.next(m.AEB_Act);
      stream.next(m.EPS_Interval);
      stream.next(m.AEB_decel_value);
      stream.next(m.Alive_count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CONTROL_MSG_1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::can_package::CONTROL_MSG_1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::can_package::CONTROL_MSG_1_<ContainerAllocator>& v)
  {
    s << indent << "ControlSW: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ControlSW);
    s << indent << "EPS_En: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EPS_En);
    s << indent << "SCC_En: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.SCC_En);
    s << indent << "AEB_Act: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.AEB_Act);
    s << indent << "EPS_Interval: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.EPS_Interval);
    s << indent << "AEB_decel_value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.AEB_decel_value);
    s << indent << "Alive_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Alive_count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAN_PACKAGE_MESSAGE_CONTROL_MSG_1_H