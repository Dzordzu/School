cmake_minimum_required(VERSION 3.12)
project(School)

# Set options for lib
set(CMAKE_CXX_STANDARD 14)
set(School_VERSION_MAJOR 1)
set(School_VERSION_MINOR 0)

# Add a config file
configure_file (
        "${PROJECT_SOURCE_DIR}/SchoolConfig.h.in"
        "${PROJECT_BINARY_DIR}/SchoolConfig.h"
)

# Include libs
include_directories (
        "${PROJECT_SOURCE_DIR}"
)

# add_subdirectory()
# add_executable()

enable_testing()
include_directories(lib/gtest)

add_executable(runUnitTests
        test/Example.gtest.cpp
        )

add_test(
        NAME runUnitTests
        COMMAND runUnitTests
)