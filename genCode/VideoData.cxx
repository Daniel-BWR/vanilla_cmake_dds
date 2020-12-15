

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoData.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "VideoData.hpp"
#include "VideoDataPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace com {

    namespace media {

        namespace generated {

            // ---- VideoStream: 

            VideoStream::VideoStream() :
                m_stream_id_ (0) ,
                m_flags_ (0u) ,
                m_sequence_number_ (0u) ,
                m_width_ (0u) ,
                m_height_ (0u)  {
            }   

            VideoStream::VideoStream (
                int32_t stream_id,
                uint32_t flags,
                uint32_t sequence_number,
                uint32_t width,
                uint32_t height,
                const ::rti::core::bounded_sequence< uint8_t, (com::media::generated::MAX_BUFFER_SIZE) >& frame)
                :
                    m_stream_id_( stream_id ),
                    m_flags_( flags ),
                    m_sequence_number_( sequence_number ),
                    m_width_( width ),
                    m_height_( height ),
                    m_frame_( frame ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            VideoStream::VideoStream(VideoStream&& other_) OMG_NOEXCEPT  :m_stream_id_ (std::move(other_.m_stream_id_))
            ,
            m_flags_ (std::move(other_.m_flags_))
            ,
            m_sequence_number_ (std::move(other_.m_sequence_number_))
            ,
            m_width_ (std::move(other_.m_width_))
            ,
            m_height_ (std::move(other_.m_height_))
            ,
            m_frame_ (std::move(other_.m_frame_))
            {
            } 

            VideoStream& VideoStream::operator=(VideoStream&&  other_) OMG_NOEXCEPT {
                VideoStream tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void VideoStream::swap(VideoStream& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_stream_id_, other_.m_stream_id_);
                swap(m_flags_, other_.m_flags_);
                swap(m_sequence_number_, other_.m_sequence_number_);
                swap(m_width_, other_.m_width_);
                swap(m_height_, other_.m_height_);
                swap(m_frame_, other_.m_frame_);
            }  

            bool VideoStream::operator == (const VideoStream& other_) const {
                if (m_stream_id_ != other_.m_stream_id_) {
                    return false;
                }
                if (m_flags_ != other_.m_flags_) {
                    return false;
                }
                if (m_sequence_number_ != other_.m_sequence_number_) {
                    return false;
                }
                if (m_width_ != other_.m_width_) {
                    return false;
                }
                if (m_height_ != other_.m_height_) {
                    return false;
                }
                if (m_frame_ != other_.m_frame_) {
                    return false;
                }
                return true;
            }
            bool VideoStream::operator != (const VideoStream& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const VideoStream& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "stream_id: " << sample.stream_id()<<", ";
                o << "flags: " << sample.flags()<<", ";
                o << "sequence_number: " << sample.sequence_number()<<", ";
                o << "width: " << sample.width()<<", ";
                o << "height: " << sample.height()<<", ";
                o << "frame: " << sample.frame() ;
                o <<"]";
                return o;
            }

        } // namespace generated  

    } // namespace media  

} // namespace com  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< com::media::generated::VideoStream > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode VideoStream_g_tc_frame_sequence;

                static DDS_TypeCode_Member VideoStream_g_tc_members[6]=
                {

                    {
                        (char *)"stream_id",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"flags",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"sequence_number",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"width",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"height",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"frame",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode VideoStream_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"com::media::generated::VideoStream", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        VideoStream_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VideoStream*/

                if (is_initialized) {
                    return &VideoStream_g_tc;
                }

                VideoStream_g_tc_frame_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< uint8_t, (com::media::generated::MAX_BUFFER_SIZE) > >(((com::media::generated::MAX_BUFFER_SIZE)));

                VideoStream_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VideoStream_g_tc_frame_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                VideoStream_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                VideoStream_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                VideoStream_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                VideoStream_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                VideoStream_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                VideoStream_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& VideoStream_g_tc_frame_sequence;

                /* Initialize the values for member annotations. */
                VideoStream_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                VideoStream_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                VideoStream_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                VideoStream_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                VideoStream_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                VideoStream_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                VideoStream_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
                VideoStream_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VideoStream_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VideoStream_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[2]._annotations._defaultValue._u.ulong_value = 0u;
                VideoStream_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[2]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VideoStream_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[2]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VideoStream_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[3]._annotations._defaultValue._u.ulong_value = 0u;
                VideoStream_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[3]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VideoStream_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[3]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VideoStream_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[4]._annotations._defaultValue._u.ulong_value = 0u;
                VideoStream_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[4]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VideoStream_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VideoStream_g_tc_members[4]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VideoStream_g_tc._data._sampleAccessInfo = sample_access_info();
                VideoStream_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VideoStream_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                com::media::generated::VideoStream *sample;

                static RTIXCdrMemberAccessInfo VideoStream_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VideoStream_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VideoStream_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    com::media::generated::VideoStream);
                if (sample == NULL) {
                    return NULL;
                }

                VideoStream_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->stream_id() - (char *)sample);

                VideoStream_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->flags() - (char *)sample);

                VideoStream_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->sequence_number() - (char *)sample);

                VideoStream_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->width() - (char *)sample);

                VideoStream_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->height() - (char *)sample);

                VideoStream_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->frame() - (char *)sample);

                VideoStream_g_sampleAccessInfo.memberAccessInfos = 
                VideoStream_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(com::media::generated::VideoStream);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        VideoStream_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        VideoStream_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VideoStream_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VideoStream_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< com::media::generated::VideoStream >;

                VideoStream_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VideoStream_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VideoStream_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &VideoStream_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< com::media::generated::VideoStream >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< com::media::generated::VideoStream >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< com::media::generated::VideoStream >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                com::media::generated::VideoStreamPlugin_new,
                com::media::generated::VideoStreamPlugin_delete);
        }

        std::vector<char>& topic_type_support< com::media::generated::VideoStream >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const com::media::generated::VideoStream& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VideoStreamPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VideoStreamPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< com::media::generated::VideoStream >::from_cdr_buffer(com::media::generated::VideoStream& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VideoStreamPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create com::media::generated::VideoStream from cdr buffer");
        }

        void topic_type_support< com::media::generated::VideoStream >::reset_sample(com::media::generated::VideoStream& sample) 
        {
            sample.stream_id(0);
            sample.flags(0u);
            sample.sequence_number(0u);
            sample.width(0u);
            sample.height(0u);
            ::rti::topic::reset_sample(sample.frame());
        }

        void topic_type_support< com::media::generated::VideoStream >::allocate_sample(com::media::generated::VideoStream& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.frame(),  (com::media::generated::MAX_BUFFER_SIZE), -1);
        }

    }
}  

