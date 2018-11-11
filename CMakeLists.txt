# cmake_minimum_required(VERSION <specify CMake version here>)
project(School)

set(CMAKE_CXX_STANDARD 14)

add_executable(School main.cpp lib/Macros/GETSET.cpp)