cmake_minimum_required(VERSION 3.10)
project(sample_config)

set(CMAKE_CXX_STANDARD 17)

INCLUDE_DIRECTORIES("src")

INCLUDE_DIRECTORIES("libs/jsoncpp/include")

file(GLOB_RECURSE SOURCE "${CMAKE_SOURCE_DIR}/src/*.cpp")

file(GLOB_RECURSE LIBRARY_SOURCE "${CMAKE_SOURCE_DIR}/libs/*.cpp")

add_executable(sample_config ${SOURCE} ${LIBRARY_SOURCE})