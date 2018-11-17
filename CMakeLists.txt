cmake_minimum_required(VERSION 3.12)
project(School)

# Set options for lib
set(CMAKE_CXX_STANDARD 14)
set(School_VERSION_MAJOR 0)
set(School_VERSION_MINOR 1)

# Add a config file
configure_file (
        "${PROJECT_SOURCE_DIR}/SchoolConfig.h.in"
        "${PROJECT_BINARY_DIR}/SchoolConfig.h"
)

# Include libs
include_directories (
        "${PROJECT_SOURCE_DIR}/project/GeneticAlgorithm"
        "${PROJECT_SOURCE_DIR}/project/InputValidator"
        "${PROJECT_SOURCE_DIR}/project/Macros"
        "${PROJECT_SOURCE_DIR}/project/RandomWrapper"
)

add_subdirectory(project/InputValidator)
add_subdirectory(project/RandomWrapper)

add_executable(
        # Project name
        project-general-genetic-algo
        # Main function
        runnable/GeneralGeneticAlgorithm/GeneticAlgo.cpp
        project/Macros/GETSET.h
        project/InputValidator/InputValidator.cpp
        project/InputValidator/InputValidator.h
        project/InputValidator/InputValidationException.cpp
        project/InputValidator/InputValidationException.h
        runnable/GeneralGeneticAlgorithm/GeneralGeneticAlgorithmApp.cpp
        runnable/GeneralGeneticAlgorithm/GeneralGeneticAlgorithmApp.h
        project/GeneticAlgorithm/GeneticAlgorithm.h
        project/GeneticAlgorithm/Instances.cpp
        project/GeneticAlgorithm/Instances.h
        project/GeneticAlgorithm/Individual.cpp
        project/GeneticAlgorithm/Individual.h
        project/GeneticAlgorithm/Settings.cpp
        project/GeneticAlgorithm/Settings.h
        project/RandomWrapper/RandomWrapper.cpp project/RandomWrapper/RandomWrapper.h
        project/GeneticAlgorithm/Genotype.cpp
        project/GeneticAlgorithm/Genotype.h
        SchoolConfig.h.in runnable/GeneralGeneticAlgorithm/Knapsack.cpp runnable/GeneralGeneticAlgorithm/Knapsack.h)

enable_testing()
include_directories(lib/gtest)

add_executable(runUnitTests
        test/Example.gtest.cpp
        )

add_test(
        NAME runUnitTests
        COMMAND runUnitTests
)