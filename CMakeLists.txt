cmake_minimum_required(VERSION 2.8.7)
project(FileSystem)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/tests/)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/examples/main.cpp)
