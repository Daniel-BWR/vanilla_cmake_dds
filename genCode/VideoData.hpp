

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoData.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef VideoData_1974959932_hpp
#define VideoData_1974959932_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace com {
    namespace media {
        namespace generated {

            static const std::string VIDEO_TOPIC = "VideoData";

            static const std::string QOS_LIBRARY = "RTIExampleQosLibrary";

            static const std::string QOS_PROFILE_STREAMING_DATA = "StreamingVideoData";

            static const std::string QOS_PROFILE_MULTICAST_DATA = "MulticastVideo";

            static const int32_t MAX_BUFFER_SIZE = 1048576;

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< uint8_t >;
            template class NDDSUSERDllExport std::vector< uint8_t >;
            #endif
            class NDDSUSERDllExport VideoStream {
              public:
                VideoStream();

                VideoStream(
                    int32_t stream_id,
                    uint32_t flags,
                    uint32_t sequence_number,
                    uint32_t width,
                    uint32_t height,
                    const ::rti::core::bounded_sequence< uint8_t, (com::media::generated::MAX_BUFFER_SIZE) >& frame);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                VideoStream (VideoStream&&) = default;
                VideoStream& operator=(VideoStream&&) = default;
                VideoStream& operator=(const VideoStream&) = default;
                VideoStream(const VideoStream&) = default;
                #else
                VideoStream(VideoStream&& other_) OMG_NOEXCEPT;  
                VideoStream& operator=(VideoStream&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                int32_t& stream_id() OMG_NOEXCEPT {
                    return m_stream_id_;
                }

                const int32_t& stream_id() const OMG_NOEXCEPT {
                    return m_stream_id_;
                }

                void stream_id(int32_t value) {
                    m_stream_id_ = value;
                }

                uint32_t& flags() OMG_NOEXCEPT {
                    return m_flags_;
                }

                const uint32_t& flags() const OMG_NOEXCEPT {
                    return m_flags_;
                }

                void flags(uint32_t value) {
                    m_flags_ = value;
                }

                uint32_t& sequence_number() OMG_NOEXCEPT {
                    return m_sequence_number_;
                }

                const uint32_t& sequence_number() const OMG_NOEXCEPT {
                    return m_sequence_number_;
                }

                void sequence_number(uint32_t value) {
                    m_sequence_number_ = value;
                }

                uint32_t& width() OMG_NOEXCEPT {
                    return m_width_;
                }

                const uint32_t& width() const OMG_NOEXCEPT {
                    return m_width_;
                }

                void width(uint32_t value) {
                    m_width_ = value;
                }

                uint32_t& height() OMG_NOEXCEPT {
                    return m_height_;
                }

                const uint32_t& height() const OMG_NOEXCEPT {
                    return m_height_;
                }

                void height(uint32_t value) {
                    m_height_ = value;
                }

                ::rti::core::bounded_sequence< uint8_t, (com::media::generated::MAX_BUFFER_SIZE) >& frame() OMG_NOEXCEPT {
                    return m_frame_;
                }

                const ::rti::core::bounded_sequence< uint8_t, (com::media::generated::MAX_BUFFER_SIZE) >& frame() const OMG_NOEXCEPT {
                    return m_frame_;
                }

                void frame(const ::rti::core::bounded_sequence< uint8_t, (com::media::generated::MAX_BUFFER_SIZE) >& value) {
                    m_frame_ = value;
                }

                bool operator == (const VideoStream& other_) const;
                bool operator != (const VideoStream& other_) const;

                void swap(VideoStream& other_) OMG_NOEXCEPT ;

              private:

                int32_t m_stream_id_;
                uint32_t m_flags_;
                uint32_t m_sequence_number_;
                uint32_t m_width_;
                uint32_t m_height_;
                ::rti::core::bounded_sequence< uint8_t, (com::media::generated::MAX_BUFFER_SIZE) > m_frame_;

            };

            inline void swap(VideoStream& a, VideoStream& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VideoStream& sample);

        } // namespace generated  
    } // namespace media  
} // namespace com  

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< com::media::generated::VideoStream > {
            NDDSUSERDllExport static std::string value() {
                return "com::media::generated::VideoStream";
            }
        };

        template<>
        struct is_topic_type< com::media::generated::VideoStream > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< com::media::generated::VideoStream > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const com::media::generated::VideoStream& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(com::media::generated::VideoStream& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(com::media::generated::VideoStream& sample);

            NDDSUSERDllExport 
            static void allocate_sample(com::media::generated::VideoStream& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< com::media::generated::VideoStream > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< com::media::generated::VideoStream > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // VideoData_1974959932_hpp

