cmake_minimum_required(VERSION 3.9)
project(zeroMQ_Server)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp server.h server.cpp)
add_executable(zeroMQ_Server ${SOURCE_FILES})