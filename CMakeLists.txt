# cmake_minimum_required(VERSION <specify CMake version here>)
project(School)

set(CMAKE_CXX_STANDARD 14)

add_executable(School main.cpp lib/Macros/GETSET.cpp lib/CustomAlgorithms/Heuristic/GeneticKnapsack/GeneticAlgorithm.cpp lib/CustomAlgorithms/Heuristic/GeneticKnapsack/GeneticAlgorithm.h lib/InputValidator/InputValidator.cpp lib/InputValidator/InputValidator.h lib/InputValidator/InputValidationException.cpp lib/InputValidator/InputValidationException.h lib/CustomAlgorithms/Heuristic/GeneticKnapsack/Instance.cpp lib/CustomAlgorithms/Heuristic/GeneticKnapsack/Instance.h)