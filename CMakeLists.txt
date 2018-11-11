# cmake_minimum_required(VERSION <specify CMake version here>)
project(School)

set(CMAKE_CXX_STANDARD 14)

add_executable(School main.cpp lib/Backpack/Item.cpp lib/Backpack/Item.h lib/Backpack/Backpack.cpp lib/Backpack/Backpack.h lib/Genetics/GeneticsAlgorith.cpp lib/Genetics/GeneticsAlgorith.h lib/Genetics/Instance.cpp lib/Genetics/Instance.h)