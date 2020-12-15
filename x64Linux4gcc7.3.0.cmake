# (c) 2019 Copyright, Real-Time Innovations, Inc. All rights reserved.
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of this file solely for use with RTI Connext DDS.  Licensee may
# redistribute copies of this file provided that all such copies are subject
# to this license.
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_VERSION 3.6.11+)
set(CMAKE_SYSTEM_PROCESSOR linux)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

# Support C17
#set(CMAKE_C_STANDARD 17)

# This ensures that things like gnu++11 get passed correctly
set(CMAKE_CXX_STANDARD 17)

# We require a C++11 compliant compiler
set(CMAKE_CXX_STANDARD_REQUIRED ON)


