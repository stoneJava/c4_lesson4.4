cmake_minimum_required(VERSION 3.5)
project(c4_lesson4_4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Point.cpp)
add_executable(c4_lesson4_4 ${SOURCE_FILES})