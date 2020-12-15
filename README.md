gal@ubuntu:~/Desktop/rti_cmake_examples/vanila_cmake_cpp2/build$ cmake ..
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- The C compiler identification is GNU 8.3.0
-- The CXX compiler identification is GNU 8.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc - works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ - works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- This is a ConnextDDS example built with CMake.
-- RTI Target architecture: x64Linux3gcc5.4.0
-- RTI Connext DDS installation directory: /opt/rti_connext_dds-6.0.0
-- Building in static mode
-- Building in Debug mode
-- Configuring done
-- Generating done
-- Build files have been written to: /home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/build
gal@ubuntu:~/Desktop/rti_cmake_examples/vanila_cmake_cpp2/build$ cmake --build .Scanning dependencies of target copy_qos_profiles
[ 11%] Copying USER_QOS_PROFILES.xml to the binary dir
[ 11%] Built target copy_qos_profiles
Scanning dependencies of target subscriber
[ 22%] Building CXX object CMakeFiles/subscriber.dir/ShapeType_subscriber.cxx.o
In file included from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/policy/policyfwd.hpp:25,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/corefwd.hpp:31,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/detail/corefwd.hpp:28,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/corefwd.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/policy/CorePolicy.hpp:35,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/policy/detail/CorePolicy.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/policy/CorePolicy.hpp:27,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/qos/DataReaderQosImpl.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/qos/detail/DataReaderQos.hpp:27,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/qos/DataReaderQos.hpp:25,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/ddssub.hpp:34,
                 from /home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_subscriber.cxx:48:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::xtypes::DynamicDataImpl; NATIVE_T = DDS_DynamicData; ADAPTER = rti::core::DynamicDataNativeAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/xtypes/DynamicDataImpl.hpp:1102:26:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicDataImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicDataImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicDataImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicDataImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/xtypes/DynamicTypeImpl.hpp:150:41:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/LongDouble.hpp:49:21:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::InconsistentTopicStatus; NATIVE_T = DDS_InconsistentTopicStatus; ADAPTER = rti::core::status::InconsistentTopicStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::InconsistentTopicStatus; NATIVE_T = DDS_InconsistentTopicStatus; ADAPTER = rti::core::status::InconsistentTopicStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:34:19:   required from ‘static void rti::topic::detail::TopicListenerForwarder<TOPIC, LISTENER>::inconsistent_topic_forward(void*, DDS_Topic*, const DDS_InconsistentTopicStatus*) [with TOPIC = dds::topic::Topic<ShapeTypeExtended, rti::topic::TopicImpl>; LISTENER = dds::topic::TopicListener<ShapeTypeExtended>; DDS_Topic = DDS_TopicWrapperI]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/detail/TopicListenerForwarder.hpp:41:43:   required from ‘DDS_TopicListener rti::topic::detail::create_native_listener(dds::topic::TopicListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/TopicImpl.hpp:99:52:   required from ‘rti::topic::detail::TopicCreationResult rti::topic::detail::create_native_topic(const DomainParticipant&, const string&, const string&, const TopicQos*, dds::topic::TopicListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; rti::topic::detail::TopicCreationResult = std::pair<std::pair<DDS_EntityImpl*, bool>, DDS_TopicDescriptionImpl*>; dds::domain::DomainParticipant = dds::domain::TDomainParticipant<rti::domain::DomainParticipantImpl>; std::__cxx11::string = std::__cxx11::basic_string<char>; dds::topic::qos::TopicQos = dds::core::TEntityQos<rti::topic::qos::TopicQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/TopicImpl.hpp:133:43:   required from ‘rti::topic::TopicImpl<T>::TopicImpl(const DomainParticipant&, const string&) [with T = ShapeTypeExtended; dds::domain::DomainParticipant = dds::domain::TDomainParticipant<rti::domain::DomainParticipantImpl>; std::__cxx11::string = std::__cxx11::basic_string<char>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/topic/TTopic.hpp:82:41:   required from ‘dds::topic::Topic<T, DELEGATE>::Topic(const DomainParticipant&, const string&) [with T = ShapeTypeExtended; DELEGATE = rti::topic::TopicImpl; dds::domain::DomainParticipant = dds::domain::TDomainParticipant<rti::domain::DomainParticipantImpl>; std::__cxx11::string = std::__cxx11::basic_string<char>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_subscriber.cxx:75:88:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::InconsistentTopicStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::InconsistentTopicStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::InconsistentTopicStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::InconsistentTopicStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::RequestedDeadlineMissedStatus; NATIVE_T = DDS_RequestedDeadlineMissedStatus; ADAPTER = rti::core::status::RequestedDeadlineMissedStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::RequestedDeadlineMissedStatus; NATIVE_T = DDS_RequestedDeadlineMissedStatus; ADAPTER = rti::core::status::RequestedDeadlineMissedStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:350:19:   required from ‘static void rti::sub::detail::DataReaderListenerForwarder<READER, LISTENER>::requested_deadline_missed_forward(void*, DDS_DataReader*, const DDS_RequestedDeadlineMissedStatus*) [with READER = dds::sub::DataReader<ShapeTypeExtended>; LISTENER = dds::sub::DataReaderListener<ShapeTypeExtended>; DDS_DataReader = DDS_DataReaderImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/detail/DataReaderListenerForwarder.hpp:44:50:   required from ‘DDS_DataReaderListener rti::sub::detail::create_native_listener(dds::sub::DataReaderListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:223:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::sub::detail::create_native_reader(const Subscriber&, const dds::topic::TopicDescription<T>&, const DataReaderQos*, dds::sub::DataReaderListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>; dds::sub::qos::DataReaderQos = dds::core::TEntityQos<rti::sub::qos::DataReaderQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:253:41:   required from ‘rti::sub::DataReaderImpl<T>::DataReaderImpl(const Subscriber&, const dds::topic::TopicDescription<T>&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/TDataReader.hpp:542:44:   required from ‘dds::sub::DataReader<T, DELEGATE>::DataReader(const Subscriber&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::sub::DataReaderImpl; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_subscriber.cxx:78:92:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::RequestedDeadlineMissedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::RequestedDeadlineMissedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::RequestedDeadlineMissedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::RequestedDeadlineMissedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::RequestedIncompatibleQosStatus; NATIVE_T = DDS_RequestedIncompatibleQosStatus; ADAPTER = rti::core::status::RequestedIncompatibleQosStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::RequestedIncompatibleQosStatus; NATIVE_T = DDS_RequestedIncompatibleQosStatus; ADAPTER = rti::core::status::RequestedIncompatibleQosStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:435:19:   required from ‘static void rti::sub::detail::DataReaderListenerForwarder<READER, LISTENER>::requested_incompatible_qos_forward(void*, DDS_DataReader*, const DDS_RequestedIncompatibleQosStatus*) [with READER = dds::sub::DataReader<ShapeTypeExtended>; LISTENER = dds::sub::DataReaderListener<ShapeTypeExtended>; DDS_DataReader = DDS_DataReaderImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/detail/DataReaderListenerForwarder.hpp:46:51:   required from ‘DDS_DataReaderListener rti::sub::detail::create_native_listener(dds::sub::DataReaderListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:223:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::sub::detail::create_native_reader(const Subscriber&, const dds::topic::TopicDescription<T>&, const DataReaderQos*, dds::sub::DataReaderListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>; dds::sub::qos::DataReaderQos = dds::core::TEntityQos<rti::sub::qos::DataReaderQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:253:41:   required from ‘rti::sub::DataReaderImpl<T>::DataReaderImpl(const Subscriber&, const dds::topic::TopicDescription<T>&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/TDataReader.hpp:542:44:   required from ‘dds::sub::DataReader<T, DELEGATE>::DataReader(const Subscriber&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::sub::DataReaderImpl; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_subscriber.cxx:78:92:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::RequestedIncompatibleQosStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::RequestedIncompatibleQosStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::RequestedIncompatibleQosStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::RequestedIncompatibleQosStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::SampleRejectedStatus; NATIVE_T = DDS_SampleRejectedStatus; ADAPTER = rti::core::status::SampleRejectedStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::SampleRejectedStatus; NATIVE_T = DDS_SampleRejectedStatus; ADAPTER = rti::core::status::SampleRejectedStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:202:19:   required from ‘static void rti::sub::detail::DataReaderListenerForwarder<READER, LISTENER>::sample_rejected_forward(void*, DDS_DataReader*, const DDS_SampleRejectedStatus*) [with READER = dds::sub::DataReader<ShapeTypeExtended>; LISTENER = dds::sub::DataReaderListener<ShapeTypeExtended>; DDS_DataReader = DDS_DataReaderImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/detail/DataReaderListenerForwarder.hpp:48:40:   required from ‘DDS_DataReaderListener rti::sub::detail::create_native_listener(dds::sub::DataReaderListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:223:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::sub::detail::create_native_reader(const Subscriber&, const dds::topic::TopicDescription<T>&, const DataReaderQos*, dds::sub::DataReaderListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>; dds::sub::qos::DataReaderQos = dds::core::TEntityQos<rti::sub::qos::DataReaderQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:253:41:   required from ‘rti::sub::DataReaderImpl<T>::DataReaderImpl(const Subscriber&, const dds::topic::TopicDescription<T>&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/TDataReader.hpp:542:44:   required from ‘dds::sub::DataReader<T, DELEGATE>::DataReader(const Subscriber&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::sub::DataReaderImpl; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_subscriber.cxx:78:92:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::SampleRejectedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::SampleRejectedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::SampleRejectedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::SampleRejectedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::LivelinessChangedStatus; NATIVE_T = DDS_LivelinessChangedStatus; ADAPTER = rti::core::status::LivelinessChangedStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::LivelinessChangedStatus; NATIVE_T = DDS_LivelinessChangedStatus; ADAPTER = rti::core::status::LivelinessChangedStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:271:19:   required from ‘static void rti::sub::detail::DataReaderListenerForwarder<READER, LISTENER>::liveliness_changed_forward(void*, DDS_DataReader*, const DDS_LivelinessChangedStatus*) [with READER = dds::sub::DataReader<ShapeTypeExtended>; LISTENER = dds::sub::DataReaderListener<ShapeTypeExtended>; DDS_DataReader = DDS_DataReaderImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/detail/DataReaderListenerForwarder.hpp:50:43:   required from ‘DDS_DataReaderListener rti::sub::detail::create_native_listener(dds::sub::DataReaderListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:223:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::sub::detail::create_native_reader(const Subscriber&, const dds::topic::TopicDescription<T>&, const DataReaderQos*, dds::sub::DataReaderListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>; dds::sub::qos::DataReaderQos = dds::core::TEntityQos<rti::sub::qos::DataReaderQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:253:41:   required from ‘rti::sub::DataReaderImpl<T>::DataReaderImpl(const Subscriber&, const dds::topic::TopicDescription<T>&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/TDataReader.hpp:542:44:   required from ‘dds::sub::DataReader<T, DELEGATE>::DataReader(const Subscriber&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::sub::DataReaderImpl; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_subscriber.cxx:78:92:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::LivelinessChangedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::LivelinessChangedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::LivelinessChangedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::LivelinessChangedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::SubscriptionMatchedStatus; NATIVE_T = DDS_SubscriptionMatchedStatus; ADAPTER = rti::core::status::SubscriptionMatchedStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::SubscriptionMatchedStatus; NATIVE_T = DDS_SubscriptionMatchedStatus; ADAPTER = rti::core::status::SubscriptionMatchedStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:551:19:   required from ‘static void rti::sub::detail::DataReaderListenerForwarder<READER, LISTENER>::subscription_matched_forward(void*, DDS_DataReader*, const DDS_SubscriptionMatchedStatus*) [with READER = dds::sub::DataReader<ShapeTypeExtended>; LISTENER = dds::sub::DataReaderListener<ShapeTypeExtended>; DDS_DataReader = DDS_DataReaderImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/detail/DataReaderListenerForwarder.hpp:54:45:   required from ‘DDS_DataReaderListener rti::sub::detail::create_native_listener(dds::sub::DataReaderListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:223:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::sub::detail::create_native_reader(const Subscriber&, const dds::topic::TopicDescription<T>&, const DataReaderQos*, dds::sub::DataReaderListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>; dds::sub::qos::DataReaderQos = dds::core::TEntityQos<rti::sub::qos::DataReaderQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:253:41:   required from ‘rti::sub::DataReaderImpl<T>::DataReaderImpl(const Subscriber&, const dds::topic::TopicDescription<T>&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/TDataReader.hpp:542:44:   required from ‘dds::sub::DataReader<T, DELEGATE>::DataReader(const Subscriber&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::sub::DataReaderImpl; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_subscriber.cxx:78:92:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::SubscriptionMatchedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::SubscriptionMatchedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::SubscriptionMatchedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::SubscriptionMatchedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::SampleLostStatus; NATIVE_T = DDS_SampleLostStatus; ADAPTER = rti::core::status::SampleLostStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::SampleLostStatus; NATIVE_T = DDS_SampleLostStatus; ADAPTER = rti::core::status::SampleLostStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:170:19:   required from ‘static void rti::sub::detail::DataReaderListenerForwarder<READER, LISTENER>::sample_lost_forward(void*, DDS_DataReader*, const DDS_SampleLostStatus*) [with READER = dds::sub::DataReader<ShapeTypeExtended>; LISTENER = dds::sub::DataReaderListener<ShapeTypeExtended>; DDS_DataReader = DDS_DataReaderImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/detail/DataReaderListenerForwarder.hpp:56:36:   required from ‘DDS_DataReaderListener rti::sub::detail::create_native_listener(dds::sub::DataReaderListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:223:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::sub::detail::create_native_reader(const Subscriber&, const dds::topic::TopicDescription<T>&, const DataReaderQos*, dds::sub::DataReaderListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>; dds::sub::qos::DataReaderQos = dds::core::TEntityQos<rti::sub::qos::DataReaderQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/sub/DataReaderImpl.hpp:253:41:   required from ‘rti::sub::DataReaderImpl<T>::DataReaderImpl(const Subscriber&, const dds::topic::TopicDescription<T>&) [with T = ShapeTypeExtended; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/sub/TDataReader.hpp:542:44:   required from ‘dds::sub::DataReader<T, DELEGATE>::DataReader(const Subscriber&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::sub::DataReaderImpl; dds::sub::Subscriber = dds::sub::TSubscriber<rti::sub::SubscriberImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_subscriber.cxx:78:92:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::SampleLostStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::SampleLostStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::SampleLostStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::SampleLostStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
[ 33%] Building CXX object CMakeFiles/subscriber.dir/genCode/ShapeType.cxx.o
In file included from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/policy/policyfwd.hpp:25,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/corefwd.hpp:31,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/array.hpp:29,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/Vector.hpp:33,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/detail/Vector.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/vector.hpp:30,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/cdr/Serialization.hpp:34,
                 from /home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/genCode/ShapeType.cxx:15:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/LongDouble.hpp:49:21:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/xtypes/DynamicTypeImpl.hpp:150:41:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
[ 44%] Building CXX object CMakeFiles/subscriber.dir/genCode/ShapeTypePlugin.cxx.o
In file included from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/policy/policyfwd.hpp:25,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/corefwd.hpp:31,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/array.hpp:29,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/Vector.hpp:33,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/detail/Vector.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/vector.hpp:30,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/cdr/Serialization.hpp:34,
                 from /home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/genCode/ShapeTypePlugin.cxx:59:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/LongDouble.hpp:49:21:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/xtypes/DynamicTypeImpl.hpp:150:41:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
[ 55%] Linking CXX executable subscriber
[ 55%] Built target subscriber
Scanning dependencies of target publisher
[ 66%] Building CXX object CMakeFiles/publisher.dir/ShapeType_publisher.cxx.o
In file included from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/policy/policyfwd.hpp:25,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/corefwd.hpp:31,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/detail/corefwd.hpp:28,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/corefwd.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/policy/CorePolicy.hpp:35,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/policy/detail/CorePolicy.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/policy/CorePolicy.hpp:27,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/qos/DataWriterQosImpl.hpp:27,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/pub/qos/detail/DataWriterQos.hpp:27,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/pub/qos/DataWriterQos.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/pub/ddspub.hpp:30,
                 from /home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_publisher.cxx:47:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/xtypes/DynamicTypeImpl.hpp:150:41:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/LongDouble.hpp:49:21:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::InconsistentTopicStatus; NATIVE_T = DDS_InconsistentTopicStatus; ADAPTER = rti::core::status::InconsistentTopicStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::InconsistentTopicStatus; NATIVE_T = DDS_InconsistentTopicStatus; ADAPTER = rti::core::status::InconsistentTopicStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:34:19:   required from ‘static void rti::topic::detail::TopicListenerForwarder<TOPIC, LISTENER>::inconsistent_topic_forward(void*, DDS_Topic*, const DDS_InconsistentTopicStatus*) [with TOPIC = dds::topic::Topic<ShapeTypeExtended>; LISTENER = dds::topic::TopicListener<ShapeTypeExtended>; DDS_Topic = DDS_TopicWrapperI]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/detail/TopicListenerForwarder.hpp:41:43:   required from ‘DDS_TopicListener rti::topic::detail::create_native_listener(dds::topic::TopicListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/TopicImpl.hpp:99:52:   required from ‘rti::topic::detail::TopicCreationResult rti::topic::detail::create_native_topic(const DomainParticipant&, const string&, const string&, const TopicQos*, dds::topic::TopicListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; rti::topic::detail::TopicCreationResult = std::pair<std::pair<DDS_EntityImpl*, bool>, DDS_TopicDescriptionImpl*>; dds::domain::DomainParticipant = dds::domain::TDomainParticipant<rti::domain::DomainParticipantImpl>; std::__cxx11::string = std::__cxx11::basic_string<char>; dds::topic::qos::TopicQos = dds::core::TEntityQos<rti::topic::qos::TopicQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/TopicImpl.hpp:133:43:   required from ‘rti::topic::TopicImpl<T>::TopicImpl(const DomainParticipant&, const string&) [with T = ShapeTypeExtended; dds::domain::DomainParticipant = dds::domain::TDomainParticipant<rti::domain::DomainParticipantImpl>; std::__cxx11::string = std::__cxx11::basic_string<char>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/topic/TTopic.hpp:82:41:   required from ‘dds::topic::Topic<T, DELEGATE>::Topic(const DomainParticipant&, const string&) [with T = ShapeTypeExtended; DELEGATE = rti::topic::TopicImpl; dds::domain::DomainParticipant = dds::domain::TDomainParticipant<rti::domain::DomainParticipantImpl>; std::__cxx11::string = std::__cxx11::basic_string<char>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_publisher.cxx:58:89:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::InconsistentTopicStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::InconsistentTopicStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::InconsistentTopicStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::InconsistentTopicStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::OfferedDeadlineMissedStatus; NATIVE_T = DDS_OfferedDeadlineMissedStatus; ADAPTER = rti::core::status::OfferedDeadlineMissedStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::OfferedDeadlineMissedStatus; NATIVE_T = DDS_OfferedDeadlineMissedStatus; ADAPTER = rti::core::status::OfferedDeadlineMissedStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:316:19:   required from ‘static void rti::pub::detail::DataWriterListenerForwarder<WRITER, LISTENER>::offered_deadline_missed_forward(void*, DDS_DataWriter*, const DDS_OfferedDeadlineMissedStatus*) [with WRITER = dds::pub::DataWriter<ShapeTypeExtended>; LISTENER = dds::pub::DataWriterListener<ShapeTypeExtended>; DDS_DataWriter = DDS_DataWriterImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/detail/DataWriterListenerForwarder.hpp:447:48:   required from ‘DDS_DataWriterListener rti::pub::detail::create_native_listener(dds::pub::DataWriterListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/DataWriterImpl.hpp:380:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::pub::detail::create_native_writer(const Publisher&, const dds::topic::Topic<T>&, const DataWriterQos*, dds::pub::DataWriterListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>; dds::pub::qos::DataWriterQos = dds::core::TEntityQos<rti::pub::qos::DataWriterQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/DataWriterImpl.hpp:398:57:   required from ‘rti::pub::DataWriterImpl<T>::DataWriterImpl(const Publisher&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/pub/TDataWriter.hpp:83:42:   required from ‘dds::pub::DataWriter<T, DELEGATE>::DataWriter(const Publisher&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::pub::DataWriterImpl; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_publisher.cxx:61:91:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::OfferedDeadlineMissedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::OfferedDeadlineMissedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::OfferedDeadlineMissedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::OfferedDeadlineMissedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::LivelinessLostStatus; NATIVE_T = DDS_LivelinessLostStatus; ADAPTER = rti::core::status::LivelinessLostStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::LivelinessLostStatus; NATIVE_T = DDS_LivelinessLostStatus; ADAPTER = rti::core::status::LivelinessLostStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:242:19:   required from ‘static void rti::pub::detail::DataWriterListenerForwarder<WRITER, LISTENER>::liveliness_lost_forward(void*, DDS_DataWriter*, const DDS_LivelinessLostStatus*) [with WRITER = dds::pub::DataWriter<ShapeTypeExtended>; LISTENER = dds::pub::DataWriterListener<ShapeTypeExtended>; DDS_DataWriter = DDS_DataWriterImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/detail/DataWriterListenerForwarder.hpp:449:40:   required from ‘DDS_DataWriterListener rti::pub::detail::create_native_listener(dds::pub::DataWriterListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/DataWriterImpl.hpp:380:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::pub::detail::create_native_writer(const Publisher&, const dds::topic::Topic<T>&, const DataWriterQos*, dds::pub::DataWriterListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>; dds::pub::qos::DataWriterQos = dds::core::TEntityQos<rti::pub::qos::DataWriterQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/DataWriterImpl.hpp:398:57:   required from ‘rti::pub::DataWriterImpl<T>::DataWriterImpl(const Publisher&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/pub/TDataWriter.hpp:83:42:   required from ‘dds::pub::DataWriter<T, DELEGATE>::DataWriter(const Publisher&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::pub::DataWriterImpl; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_publisher.cxx:61:91:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::LivelinessLostStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::LivelinessLostStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::LivelinessLostStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::LivelinessLostStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::OfferedIncompatibleQosStatus; NATIVE_T = DDS_OfferedIncompatibleQosStatus; ADAPTER = rti::core::status::OfferedIncompatibleQosStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::OfferedIncompatibleQosStatus; NATIVE_T = DDS_OfferedIncompatibleQosStatus; ADAPTER = rti::core::status::OfferedIncompatibleQosStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:385:19:   required from ‘static void rti::pub::detail::DataWriterListenerForwarder<WRITER, LISTENER>::offered_incompatible_qos_forward(void*, DDS_DataWriter*, const DDS_OfferedIncompatibleQosStatus*) [with WRITER = dds::pub::DataWriter<ShapeTypeExtended>; LISTENER = dds::pub::DataWriterListener<ShapeTypeExtended>; DDS_DataWriter = DDS_DataWriterImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/detail/DataWriterListenerForwarder.hpp:451:49:   required from ‘DDS_DataWriterListener rti::pub::detail::create_native_listener(dds::pub::DataWriterListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/DataWriterImpl.hpp:380:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::pub::detail::create_native_writer(const Publisher&, const dds::topic::Topic<T>&, const DataWriterQos*, dds::pub::DataWriterListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>; dds::pub::qos::DataWriterQos = dds::core::TEntityQos<rti::pub::qos::DataWriterQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/DataWriterImpl.hpp:398:57:   required from ‘rti::pub::DataWriterImpl<T>::DataWriterImpl(const Publisher&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/pub/TDataWriter.hpp:83:42:   required from ‘dds::pub::DataWriter<T, DELEGATE>::DataWriter(const Publisher&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::pub::DataWriterImpl; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_publisher.cxx:61:91:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::OfferedIncompatibleQosStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::OfferedIncompatibleQosStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::OfferedIncompatibleQosStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::OfferedIncompatibleQosStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::status::PublicationMatchedStatus; NATIVE_T = DDS_PublicationMatchedStatus; ADAPTER = rti::core::status::PublicationMatchedStatusAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::status::PublicationMatchedStatus; NATIVE_T = DDS_PublicationMatchedStatus; ADAPTER = rti::core::status::PublicationMatchedStatusAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/status/Status.hpp:490:19:   required from ‘static void rti::pub::detail::DataWriterListenerForwarder<WRITER, LISTENER>::publication_matched_forward(void*, DDS_DataWriter*, const DDS_PublicationMatchedStatus*) [with WRITER = dds::pub::DataWriter<ShapeTypeExtended>; LISTENER = dds::pub::DataWriterListener<ShapeTypeExtended>; DDS_DataWriter = DDS_DataWriterImpl]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/detail/DataWriterListenerForwarder.hpp:453:44:   required from ‘DDS_DataWriterListener rti::pub::detail::create_native_listener(dds::pub::DataWriterListener<T>*) [with T = ShapeTypeExtended]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/DataWriterImpl.hpp:380:52:   required from ‘std::pair<DDS_EntityImpl*, bool> rti::pub::detail::create_native_writer(const Publisher&, const dds::topic::Topic<T>&, const DataWriterQos*, dds::pub::DataWriterListener<T>*, const dds::core::status::StatusMask&) [with T = ShapeTypeExtended; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>; dds::pub::qos::DataWriterQos = dds::core::TEntityQos<rti::pub::qos::DataWriterQosImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/pub/DataWriterImpl.hpp:398:57:   required from ‘rti::pub::DataWriterImpl<T>::DataWriterImpl(const Publisher&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/pub/TDataWriter.hpp:83:42:   required from ‘dds::pub::DataWriter<T, DELEGATE>::DataWriter(const Publisher&, const dds::topic::Topic<T>&) [with T = ShapeTypeExtended; DELEGATE = rti::pub::DataWriterImpl; dds::pub::Publisher = dds::pub::TPublisher<rti::pub::PublisherImpl>]’
/home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/ShapeType_publisher.cxx:61:91:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::PublicationMatchedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::PublicationMatchedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::status::PublicationMatchedStatus>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::status::PublicationMatchedStatus>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
[ 77%] Building CXX object CMakeFiles/publisher.dir/genCode/ShapeType.cxx.o
In file included from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/policy/policyfwd.hpp:25,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/corefwd.hpp:31,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/array.hpp:29,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/Vector.hpp:33,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/detail/Vector.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/vector.hpp:30,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/cdr/Serialization.hpp:34,
                 from /home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/genCode/ShapeType.cxx:15:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/LongDouble.hpp:49:21:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/xtypes/DynamicTypeImpl.hpp:150:41:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
[ 88%] Building CXX object CMakeFiles/publisher.dir/genCode/ShapeTypePlugin.cxx.o
In file included from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/policy/policyfwd.hpp:25,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/corefwd.hpp:31,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/array.hpp:29,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/Vector.hpp:33,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/detail/Vector.hpp:26,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/dds/core/vector.hpp:30,
                 from /opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/topic/cdr/Serialization.hpp:34,
                 from /home/gal/Desktop/rti_cmake_examples/vanila_cmake_cpp2/genCode/ShapeTypePlugin.cxx:59:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::LongDouble; NATIVE_T = RTICdrLongDouble; ADAPTER = rti::core::PODNativeAdapter<RTICdrLongDouble>]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/LongDouble.hpp:49:21:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::LongDouble>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::LongDouble>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp: In instantiation of ‘void rti::core::swap(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&, rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’:
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:178:13:   required from ‘rti::core::NativeValueType<T, NATIVE_T, ADAPTER>& rti::core::NativeValueType<T, NATIVE_T, ADAPTER>::operator=(rti::core::NativeValueType<T, NATIVE_T, ADAPTER>&&) [with T = rti::core::xtypes::DynamicTypeImpl; NATIVE_T = DDS_TypeCode; ADAPTER = rti::core::DynamicTypeNativeAdapter]’
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/xtypes/DynamicTypeImpl.hpp:150:41:   required from here
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:223:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&left, &right, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:224:11: warning: ‘void* memcpy(void*, const void*, size_t)’ writing to an object of type ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ with no trivial copy-assignment; use copy-assignment instead [-Wclass-memaccess]
     memcpy(&right, &tmp, sizeof(native_type));
     ~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/opt/rti_connext_dds-6.0.0/include/ndds/hpp/rti/core/NativeValueType.hpp:124:7: note: ‘class rti::core::NativeValueType<rti::core::xtypes::DynamicTypeImpl>’ declared here
 class NativeValueType {
       ^~~~~~~~~~~~~~~
[100%] Linking CXX executable publisher
[100%] Built target publisher

