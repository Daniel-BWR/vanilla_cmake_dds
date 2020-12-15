# mkir build && cd build
#  cmake ..
#cmake --build .

cmake_minimum_required(VERSION 3.5)

message(STATUS "This is a ConnextDDS example built with CMake.")
message(STATUS "RTI Target architecture: x64Linux4gcc7.3.0")

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/x64Linux4gcc7.3.0.cmake")

##################### Find the ConnextDDS folder #####################

set(CONNEXTDDS_DIR "/opt/rti_connext_dds-6.0.1")

if(NOT CONNEXTDDS_DIR)
    set(error
        "CONNEXTDDS_DIR not specified. Please set -DCONNEXTDDS_DIR= to "
        "your RTI Connext DDS installation directory")
    message(FATAL_ERROR ${error})
endif()

message(STATUS "RTI Connext DDS installation directory: ${CONNEXTDDS_DIR}")

##################### Map generated type files #####################
set(CODEGEN_C_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/genCode/VideoData.cxx"
        "${CMAKE_CURRENT_SOURCE_DIR}/genCode/VideoDataPlugin.cxx"
        )

set(CODEGEN_HEADER_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/genCode/VideoData.hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/genCode/VideoDataPlugin.hpp"
        )

set(CODEGEN_GENERATED_SOURCE_FILES
        ${CODEGEN_C_SOURCES}
        ${CODEGEN_HEADER_SOURCES}
        )


# Assuming generated code already present
# add_custom_command(
#     OUTPUT
#         ${CODEGEN_GENERATED_SOURCE_FILES}
#     COMMAND
#         ${CMAKE_COMMAND} -E make_directory "${CMAKE_CURRENT_BINARY_DIR}/rti"
#     COMMAND
#         ${RTICODEGEN} "${CMAKE_CURRENT_SOURCE_DIR}/ShapeType.idl"
#             -inputIdl
#             -ppDisable
#             -d "${CMAKE_CURRENT_BINARY_DIR}/rti"
#             -language C++11
#             -create typefiles
#             -platform x64Linux3gcc5.4.0

#     COMMENT "Generating ConnextDDS type files"
#     DEPENDS
#         "${CMAKE_CURRENT_SOURCE_DIR}/ShapeType.idl"
#     VERBATIM
# )

# add_custom_target(generate_codegen_types
#     DEPENDS
#         ${CODEGEN_GENERATED_SOURCE_FILES}
# )

########### Copy the USER_QOS_PROFILES.xml to the binary fodler ###############
add_custom_command(
    OUTPUT
        "${CMAKE_CURRENT_BINARY_DIR}/USER_QOS_PROFILES.xml"
    COMMAND
        ${CMAKE_COMMAND} -E copy
            "${CMAKE_CURRENT_SOURCE_DIR}/USER_QOS_PROFILES.xml"
            "${CMAKE_CURRENT_BINARY_DIR}/USER_QOS_PROFILES.xml"

    COMMENT "Copying USER_QOS_PROFILES.xml to the binary dir"
    DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/USER_QOS_PROFILES.xml"
    VERBATIM
)

add_custom_target(copy_qos_profiles
    DEPENDS
        "${CMAKE_CURRENT_BINARY_DIR}/USER_QOS_PROFILES.xml"
)


##################### Find ConnextDDS libraries #####################
set(lib_prefix "")

set(rti_compile_definitions RTI_UNIX RTI_LINUX RTI_64BIT)

if(NOT BUILD_SHARED_LIBS)
    set(BUILD_SHARED_LIBS OFF)
    set(lib_prefix "z")
    message(STATUS "Building in static mode")
    set(rti_compile_definitions ${rti_compile_definitions} RTI_STATIC)
else()
    message(STATUS "Building in dynamic mode")
endif()

# Ensuring a value for CMAKE_BUILD_TYPE
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

if("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    set(lib_prefix "${lib_prefix}d")
    message(STATUS "Building in Debug mode")
else()
    message(STATUS "Building in Release mode")
endif()

set(library_folder "${CONNEXTDDS_DIR}/lib/x64Linux4gcc7.3.0")
# message(STATUS "${CONNEXTDDS_DIR}/lib/x64Linux3gcc5.4.0")

find_library(nddscore
    name nddscore${lib_prefix}
    PATHS ${library_folder}
    DOC "NDDS Core library"
)

find_library(
    nddsc
    name nddsc${lib_prefix}
    PATHS ${library_folder}
    DOC "NDDS C library"
)

find_library(
    nddscpp
    name nddscpp${lib_prefix}
    PATHS ${library_folder}
    DOC "NDDS Cpp library"
)

find_library(
    nddscpp2
    name nddscpp2${lib_prefix}
    PATHS ${library_folder}
    DOC "NDDS modern CPP library"
)


##################### Build the ConnextDDS applications #####################


## Build the publisher
add_executable(publisher
    "${CMAKE_CURRENT_SOURCE_DIR}/ShapeType_publisher.cxx"
    ${CODEGEN_C_SOURCES}
)

target_compile_definitions(publisher
    PRIVATE
        ${rti_compile_definitions}
)

target_compile_options(publisher
    PRIVATE
        -m64 -Wall -std=c++11
)

target_include_directories(publisher
    PRIVATE
        "${CONNEXTDDS_DIR}/include"
        "${CONNEXTDDS_DIR}/include/ndds"
        "${CONNEXTDDS_DIR}/include/ndds/hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/genCode"
)

target_link_libraries(publisher
    PRIVATE
        ${nddscpp2}
        ${nddsc}
        ${nddscore}
        -ldl -lnsl -lm -lpthread -lrt -m64 -Wl,--no-as-needed
)

add_dependencies(publisher
    # generate_codegen_types
    copy_qos_profiles
)

# Build the subscriber
add_executable(subscriber
    "${CMAKE_CURRENT_SOURCE_DIR}/ShapeType_subscriber.cxx"
    ${CODEGEN_C_SOURCES}
)

target_compile_definitions(subscriber
    PRIVATE
        ${rti_compile_definitions}
)

target_compile_options(subscriber
    PRIVATE
        -m64 -Wall -std=c++11
)

target_include_directories(subscriber
    PRIVATE
        "${CONNEXTDDS_DIR}/include"
        "${CONNEXTDDS_DIR}/include/ndds"
        "${CONNEXTDDS_DIR}/include/ndds/hpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/genCode"
)

target_link_libraries(subscriber
    PRIVATE
        ${nddscpp2}
        ${nddsc}
        ${nddscore}
        -ldl -lnsl -lm -lpthread -lrt -m64 -Wl,--no-as-needed
)

add_dependencies(subscriber
    # generate_codegen_types
    copy_qos_profiles
)
