

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from VideoData.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "VideoDataPlugin.hpp"

namespace com {
    namespace media {
        namespace generated {

            /* ----------------------------------------------------------------------------
            *  Type VideoStream
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            VideoStream *
            VideoStreamPluginSupport_create_data(void)
            {
                try {
                    VideoStream *sample = new VideoStream;    
                    ::rti::topic::allocate_sample(*sample);
                    return sample;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            VideoStreamPluginSupport_destroy_data(
                VideoStream *sample) 
            {
                delete sample;
            }

            RTIBool 
            VideoStreamPluginSupport_copy_data(
                VideoStream *dst,
                const VideoStream *src)
            {
                try {
                    *dst = *src;
                } catch (...) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            VideoStream *
            VideoStreamPluginSupport_create_key(void)
            {
                return VideoStreamPluginSupport_create_data();
            }

            void 
            VideoStreamPluginSupport_destroy_key(
                VideoStreamKeyHolder *key) 
            {
                VideoStreamPluginSupport_destroy_data(key);
            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            VideoStreamPlugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                struct RTIXCdrInterpreterPrograms *programs = NULL;
                struct PRESTypePluginDefaultParticipantData *pd = NULL;
                struct RTIXCdrInterpreterProgramsGenProperty programProperty =
                RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */
                pd = (struct PRESTypePluginDefaultParticipantData *)
                PRESTypePluginDefaultParticipantData_new(participant_info);

                programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
                programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
                programProperty.resolveAlias = RTI_XCDR_TRUE;
                programProperty.inlineStruct = RTI_XCDR_TRUE;
                programProperty.optimizeEnum = RTI_XCDR_TRUE;

                programProperty.externalReferenceSize = 
                (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
                programProperty.getExternalRefPointerFcn = 
                ::rti::topic::interpreter::get_external_value_pointer;

                programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
                    DDS_TypeCodeFactory_get_instance(),
                    (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< VideoStream >::get().native()
                    ,
                    &programProperty,
                    RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

                if (programs == NULL) {
                    PRESTypePluginDefaultParticipantData_delete(
                        (PRESTypePluginParticipantData)pd);
                    return NULL;
                }

                pd->programs = programs;
                return (PRESTypePluginParticipantData)pd;
            }

            void 
            VideoStreamPlugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {
                if (participant_data != NULL) {
                    struct PRESTypePluginDefaultParticipantData *pd = 
                    (struct PRESTypePluginDefaultParticipantData *)participant_data;

                    if (pd->programs != NULL) {
                        DDS_TypeCodeFactory_remove_programs_from_global_list(
                            DDS_TypeCodeFactory_get_instance(),
                            pd->programs);
                        pd->programs = NULL;
                    }
                    PRESTypePluginDefaultParticipantData_delete(participant_data);
                }
            }

            PRESTypePluginEndpointData
            VideoStreamPlugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                try {
                    PRESTypePluginEndpointData epd = NULL;
                    unsigned int serializedSampleMaxSize = 0;

                    unsigned int serializedKeyMaxSize = 0;
                    unsigned int serializedKeyMaxSizeV2 = 0;

                    if (top_level_registration) {} /* To avoid warnings */
                    if (containerPluginContext) {} /* To avoid warnings */

                    if (participant_data == NULL) {
                        return NULL;
                    } 

                    epd = PRESTypePluginDefaultEndpointData_new(
                        participant_data,
                        endpoint_info,
                        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                        VideoStreamPluginSupport_create_data,
                        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                        VideoStreamPluginSupport_destroy_data,
                        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
                        com::media::generated::VideoStreamPluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
                        com::media::generated::VideoStreamPluginSupport_destroy_key);

                    if (epd == NULL) {
                        return NULL;
                    } 

                    serializedKeyMaxSize =  com::media::generated::VideoStreamPlugin_get_serialized_key_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                    serializedKeyMaxSizeV2 = VideoStreamPlugin_get_serialized_key_max_size_for_keyhash(
                        epd,
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
                        0);

                    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
                        epd,
                        endpoint_info,
                        serializedKeyMaxSize,
                        serializedKeyMaxSizeV2))  
                    {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }

                    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                        serializedSampleMaxSize = com::media::generated::VideoStreamPlugin_get_serialized_sample_max_size(
                            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
                        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                            epd,
                            endpoint_info,
                            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                            com::media::generated::VideoStreamPlugin_get_serialized_sample_max_size, epd,
                            (PRESTypePluginGetSerializedSampleSizeFunction)
                            PRESTypePlugin_interpretedGetSerializedSampleSize,
                            epd) == RTI_FALSE) {
                            PRESTypePluginDefaultEndpointData_delete(epd);
                            return NULL;
                        }
                    }

                    return epd;
                } catch (...) {
                    return NULL;
                }
            }

            void 
            VideoStreamPlugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  
                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            VideoStreamPlugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                VideoStream *sample,
                void *handle)
            {
                try {
                    ::rti::topic::reset_sample(*sample);
                } catch(const std::exception& ex) {
                    RTICdrLog_logWithFunctionName(
                        RTI_LOG_BIT_EXCEPTION,
                        "VideoStreamPlugin_return_sample",
                        &RTI_LOG_ANY_FAILURE_s,
                        "exception: ",
                        ex.what());           
                }

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            VideoStreamPlugin_copy_sample(
                PRESTypePluginEndpointData,
                VideoStream *dst,
                const VideoStream *src)
            {
                return com::media::generated::VideoStreamPluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            VideoStreamPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool
            VideoStreamPlugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const VideoStream *sample,
                ::dds::core::policy::DataRepresentationId representation)
            {
                using namespace ::dds::core::policy;

                try{
                    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
                    struct RTICdrStream stream;
                    struct PRESTypePluginDefaultEndpointData epd;
                    RTIBool result;
                    struct PRESTypePluginDefaultParticipantData pd;
                    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                    RTIXCdrTypePluginProgramContext_INTIALIZER;
                    struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

                    if (length == NULL) {
                        return RTI_FALSE;
                    }

                    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
                    epd.programContext = defaultProgramConext;  
                    epd._participantData = &pd;
                    epd.typePlugin = &plugin;
                    epd.programContext.endpointPluginData = &epd;
                    plugin.typeCode = (struct RTICdrTypeCode *)
                    (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< VideoStream >::get().native()
                    ;
                    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                    VideoStream, 
                    true, true, true>();

                    encapsulationId = DDS_TypeCode_get_native_encapsulation(
                        (DDS_TypeCode *) plugin.typeCode,
                        representation);

                    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
                        return RTI_FALSE;
                    }

                    epd._maxSizeSerializedSample =
                    VideoStreamPlugin_get_serialized_sample_max_size(
                        (PRESTypePluginEndpointData)&epd, 
                        RTI_TRUE, 
                        encapsulationId,
                        0);

                    if (buffer == NULL) {
                        *length = 
                        PRESTypePlugin_interpretedGetSerializedSampleSize(
                            (PRESTypePluginEndpointData)&epd,
                            RTI_TRUE,
                            encapsulationId,
                            0,
                            sample);

                        if (*length == 0) {
                            return RTI_FALSE;
                        }

                        return RTI_TRUE;
                    }    

                    RTICdrStream_init(&stream);
                    RTICdrStream_set(&stream, (char *)buffer, *length);

                    result = PRESTypePlugin_interpretedSerialize(
                        (PRESTypePluginEndpointData)&epd, 
                        sample, 
                        &stream, 
                        RTI_TRUE, 
                        encapsulationId,
                        RTI_TRUE, 
                        NULL);  

                    *length = RTICdrStream_getCurrentPositionOffset(&stream);
                    return result;     
                } catch (...) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            VideoStreamPlugin_deserialize_from_cdr_buffer(
                VideoStream *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultParticipantData pd;
                struct RTIXCdrTypePluginProgramContext defaultProgramConext =
                RTIXCdrTypePluginProgramContext_INTIALIZER;
                struct PRESTypePlugin plugin;
                struct PRESTypePluginDefaultEndpointData epd;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                epd.programContext = defaultProgramConext;  
                epd._participantData = &pd;
                epd.typePlugin = &plugin;
                epd.programContext.endpointPluginData = &epd;
                plugin.typeCode = (struct RTICdrTypeCode *)
                (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< VideoStream >::get().native()
                ;
                pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
                VideoStream, 
                true, true, true>();

                epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
                epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

                ::rti::topic::reset_sample(*sample);
                return PRESTypePlugin_interpretedDeserialize( 
                    (PRESTypePluginEndpointData)&epd,
                    sample,
                    &stream, 
                    RTI_TRUE, 
                    RTI_TRUE, 
                    NULL);
            }

            unsigned int 
            VideoStreamPlugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                try {
                    unsigned int size;
                    RTIBool overflow = RTI_FALSE;

                    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
                        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                    if (overflow) {
                        size = RTI_CDR_MAX_SERIALIZED_SIZE;
                    }

                    return size;
                } catch (...) {
                    return 0;
                }    
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            VideoStreamPlugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_USER_KEY;
            }

            RTIBool VideoStreamPlugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoStream **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {
                    RTIBool result;
                    if (drop_sample) {} /* To avoid warnings */
                    stream->_xTypesState.unassignable = RTI_FALSE;
                    result= PRESTypePlugin_interpretedDeserializeKey( 
                        endpoint_data, (sample != NULL)?*sample:NULL, stream,
                        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                    if (result) {
                        if (stream->_xTypesState.unassignable) {
                            result = RTI_FALSE;
                        }
                    }
                    return result;    
                } catch (...) {
                    return RTI_FALSE;
                }     
            }

            unsigned int
            VideoStreamPlugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                try {
                    unsigned int size;
                    RTIBool overflow = RTI_FALSE;

                    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
                        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
                    if (overflow) {
                        size = RTI_CDR_MAX_SERIALIZED_SIZE;
                    }

                    return size;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            unsigned int
            VideoStreamPlugin_get_serialized_key_max_size_for_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
                    endpoint_data,
                    &overflow,
                    encapsulation_id,
                    current_alignment);
                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            VideoStreamPlugin_instance_to_key(
                PRESTypePluginEndpointData endpoint_data,
                VideoStreamKeyHolder *dst, 
                const VideoStream *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   

                    dst->stream_id() = src->stream_id();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            VideoStreamPlugin_key_to_instance(
                PRESTypePluginEndpointData endpoint_data,
                VideoStream *dst, const
                VideoStreamKeyHolder *src)
            {
                try {
                    if (endpoint_data) {} /* To avoid warnings */   
                    dst->stream_id() = src->stream_id();
                    return RTI_TRUE;
                } catch (...) {
                    return RTI_FALSE;
                }    
            }

            RTIBool 
            VideoStreamPlugin_instance_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                DDS_KeyHash_t *keyhash,
                const VideoStream *instance,
                RTIEncapsulationId encapsulationId)
            {
                try {
                    struct RTICdrStream * md5Stream = NULL;
                    struct RTICdrStreamState cdrState;
                    char * buffer = NULL;
                    RTIXCdrBoolean iCdrv2;

                    iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
                    RTICdrStreamState_init(&cdrState);
                    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

                    if (md5Stream == NULL) {
                        return RTI_FALSE;
                    }

                    RTICdrStream_resetPosition(md5Stream);
                    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

                    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                        endpoint_data,
                        instance,
                        md5Stream,
                        iCdrv2?
                        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                        NULL)) 
                    {
                        int size;

                        RTICdrStream_pushState(md5Stream, &cdrState, -1);

                        size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
                            endpoint_data,
                            RTI_FALSE,
                            iCdrv2?
                            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                            0,
                            instance);

                        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
                            RTICdrStream_popState(md5Stream, &cdrState);        
                            return RTI_FALSE;
                        }   

                        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

                        if (buffer == NULL) {
                            RTICdrStream_popState(md5Stream, &cdrState);
                            return RTI_FALSE;
                        }

                        RTICdrStream_set(md5Stream, buffer, size);
                        RTIOsapiMemory_zero(
                            RTICdrStream_getBuffer(md5Stream),
                            RTICdrStream_getBufferLength(md5Stream));
                        RTICdrStream_resetPosition(md5Stream);
                        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
                        if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                            endpoint_data,
                            instance,
                            md5Stream, 
                            iCdrv2?
                            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                            NULL)) 
                        {
                            RTICdrStream_popState(md5Stream, &cdrState);
                            RTIOsapiHeap_freeBuffer(buffer);
                            return RTI_FALSE;
                        }        
                    }   

                    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
                    (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
                    PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
                        RTICdrStream_computeMD5(md5Stream, keyhash->value);
                    } else {
                        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
                        RTIOsapiMemory_copy(
                            keyhash->value, 
                            RTICdrStream_getBuffer(md5Stream), 
                            RTICdrStream_getCurrentPositionOffset(md5Stream));
                    }

                    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

                    if (buffer != NULL) {
                        RTICdrStream_popState(md5Stream, &cdrState);
                        RTIOsapiHeap_freeBuffer(buffer);
                    }

                    return RTI_TRUE;

                } catch (...) {
                    return RTI_FALSE;
                }
            }

            RTIBool 
            VideoStreamPlugin_serialized_sample_to_keyhash(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                DDS_KeyHash_t *keyhash,
                RTIBool deserialize_encapsulation,
                void *endpoint_plugin_qos)
            {
                VideoStream * sample = NULL;
                sample = (VideoStream *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (!PRESTypePlugin_interpretedSerializedSampleToKey(
                    endpoint_data,
                    sample,
                    stream, 
                    deserialize_encapsulation, 
                    RTI_TRUE,
                    endpoint_plugin_qos)) {
                    return RTI_FALSE;
                }
                if (!com::media::generated::VideoStreamPlugin_instance_to_keyhash(
                    endpoint_data,
                    keyhash,
                    sample,
                    RTICdrStream_getEncapsulationKind(stream))) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;   
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *VideoStreamPlugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);
                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                com::media::generated::VideoStreamPlugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                com::media::generated::VideoStreamPlugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                com::media::generated::VideoStreamPlugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                com::media::generated::VideoStreamPlugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                com::media::generated::VideoStreamPlugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                VideoStreamPlugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                VideoStreamPlugin_destroy_sample;

                plugin->serializeFnc = 
                (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                com::media::generated::VideoStreamPlugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleMinSize;
                plugin->getDeserializedSampleMaxSizeFnc = NULL; 
                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                VideoStreamPlugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                VideoStreamPlugin_return_sample;
                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                com::media::generated::VideoStreamPlugin_get_key_kind;

                plugin->getSerializedKeyMaxSizeFnc =   
                (PRESTypePluginGetSerializedKeyMaxSizeFunction)
                com::media::generated::VideoStreamPlugin_get_serialized_key_max_size;
                plugin->serializeKeyFnc =
                (PRESTypePluginSerializeKeyFunction)
                PRESTypePlugin_interpretedSerializeKey;
                plugin->deserializeKeyFnc =
                (PRESTypePluginDeserializeKeyFunction)
                com::media::generated::VideoStreamPlugin_deserialize_key;
                plugin->deserializeKeySampleFnc =
                (PRESTypePluginDeserializeKeySampleFunction)
                PRESTypePlugin_interpretedDeserializeKey;

                plugin-> instanceToKeyHashFnc = 
                (PRESTypePluginInstanceToKeyHashFunction)
                com::media::generated::VideoStreamPlugin_instance_to_keyhash;
                plugin->serializedSampleToKeyHashFnc = 
                (PRESTypePluginSerializedSampleToKeyHashFunction)
                com::media::generated::VideoStreamPlugin_serialized_sample_to_keyhash;

                plugin->getKeyFnc =
                (PRESTypePluginGetKeyFunction)
                VideoStreamPlugin_get_key;
                plugin->returnKeyFnc =
                (PRESTypePluginReturnKeyFunction)
                VideoStreamPlugin_return_key;

                plugin->instanceToKeyFnc =
                (PRESTypePluginInstanceToKeyFunction)
                com::media::generated::VideoStreamPlugin_instance_to_key;
                plugin->keyToInstanceFnc =
                (PRESTypePluginKeyToInstanceFunction)
                com::media::generated::VideoStreamPlugin_key_to_instance;
                plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
                #ifdef NDDS_STANDALONE_TYPE
                plugin->typeCode = NULL; 
                #else
                plugin->typeCode = (struct RTICdrTypeCode *) 
                &::rti::topic::dynamic_type< com::media::generated::VideoStream >::get().native();
                #endif
                plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                VideoStreamPlugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                VideoStreamPlugin_return_buffer;
                plugin->getBufferWithParams = NULL;
                plugin->returnBufferWithParams = NULL;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize;

                plugin->getWriterLoanedSampleFnc = NULL; 
                plugin->returnWriterLoanedSampleFnc = NULL;
                plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
                plugin->validateWriterLoanedSampleFnc = NULL;
                plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

                static const char * TYPE_NAME = "com::media::generated::VideoStream";
                plugin->endpointTypeName = TYPE_NAME;
                plugin->isMetpType = RTI_FALSE;
                return plugin;
            }

            void
            VideoStreamPlugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace generated  */
    } /* namespace media  */
} /* namespace com  */
#undef RTI_CDR_CURRENT_SUBMODULE 
