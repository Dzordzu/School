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
include_directories(lib/googletest-release-1.8.1)
add_subdirectory(lib/googletest-release-1.8.1)
enable_testing()

include_directories (
        "${PROJECT_SOURCE_DIR}/project/InputValidator"
        "${PROJECT_SOURCE_DIR}/project/RandomWrapper"
        "${PROJECT_SOURCE_DIR}/project/GeneticAlgorithm"
)

# add_subdirectory()
add_subdirectory(project/InputValidator)
add_subdirectory(project/GeneticAlgorithm)
add_subdirectory(project/RandomWrapper)

########################
# GeneticAlgorithm App #
########################
add_executable(
        GA
        "${PROJECT_SOURCE_DIR}/runnable/GeneralGeneticAlgorithm/GeneticAlgo.cpp"
)
target_link_libraries(
        GA
        GeneticAlgorithm
)

add_executable(runUnitTests
        test/Example.gtest.cpp
        )
target_link_libraries(runUnitTests
        gtest
)
add_test(
        NAME runUnitTests
        COMMAND runUnitTests
)