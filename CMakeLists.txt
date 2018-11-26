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
        "${PROJECT_SOURCE_DIR}/project/InputValidator"
        "${PROJECT_SOURCE_DIR}/project/GeneticAlgorithm"
)

# add_subdirectory()
add_subdirectory(
        project/InputValidator
        project/GeneticAlgorithm
)

add_executable(
        GA
        "${PROJECT_SOURCE_DIR}/runnable/GeneralGeneticAlgorithm/GeneticAlgo.cpp"
)

target_link_libraries(
        GA
        GeneticAlgorithm
)

enable_testing()
include_directories(lib/gtest)

add_executable(runUnitTests
        test/Example.gtest.cpp
        project/GeneticAlgorithm/GeneticAlgorithm.cpp project/GeneticAlgorithm/GeneticAlgorithm.h project/GeneticAlgorithm/Problem.cpp project/GeneticAlgorithm/Problem.h project/GeneticAlgorithm/Instance.cpp project/GeneticAlgorithm/Instance.h project/GeneticAlgorithm/StopCondition.cpp project/GeneticAlgorithm/StopCondition.h)

add_test(
        NAME runUnitTests
        COMMAND runUnitTests
)