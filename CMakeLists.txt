# cmake_minimum_required(VERSION <specify CMake version here>)
project(School)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        School main.cpp lib/Macros/GETSET.h
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Implementation.cpp
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Implementation.h
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/GeneticAlgorithm.cpp
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/GeneticAlgorithm.h
        lib/InputValidator/InputValidator.cpp lib/InputValidator/InputValidator.h
        lib/InputValidator/InputValidationException.cpp
        lib/InputValidator/InputValidationException.h
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Instance.cpp
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Instance.h
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Knapsack.cpp
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Knapsack.h
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/KnapsackItem.cpp
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/KnapsackItem.h
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/WorkingSet.cpp
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/WorkingSet.h
        lib/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/RandomWrapper.h
        lib/KnapsackApp.cpp lib/KnapsackApp.h
        lib/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/GeneticAlgorithm.cpp
        lib/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/GeneticAlgorithm.h
)