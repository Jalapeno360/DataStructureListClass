cmake_minimum_required(VERSION 3.6)
project(DataStructures)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp List.cpp List.h)
add_executable(DataStructures ${SOURCE_FILES})