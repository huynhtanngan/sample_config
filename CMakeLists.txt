cmake_minimum_required(VERSION 3.10)
project(sample_config)

set(CMAKE_CXX_STANDARD 17)

INCLUDE_DIRECTORIES("src")

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

ADD_SUBDIRECTORY(proto)

file(GLOB_RECURSE SOURCE "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_executable(sample_config ${SOURCE})
TARGET_LINK_LIBRARIES(sample_config proto ${PROTOBUF_LIBRARY})