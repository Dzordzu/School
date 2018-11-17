# cmake_minimum_required(VERSION <specify CMake version here>)
project(School)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        School main.cpp project/Macros/GETSET.h
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Implementation.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Implementation.h
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/GeneticAlgorithm.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/GeneticAlgorithm.h
        project/InputValidator/InputValidator.cpp project/InputValidator/InputValidator.h
        project/InputValidator/InputValidationException.cpp
        project/InputValidator/InputValidationException.h
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Instance.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Instance.h
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Knapsack.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/Knapsack.h
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/KnapsackItem.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/KnapsackItem.h
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/WorkingSet.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/WorkingSet.h
        project/CustomAlgorithms/MetaHeuristic/GeneticKnapsack/RandomWrapper.h
        project/KnapsackApp.cpp project/KnapsackApp.h
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/GeneticAlgorithm.h
        project/GeneralGeneticAlgorithmApp.cpp
        project/GeneralGeneticAlgorithmApp.h
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/Instances.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/Instances.h
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/Individual.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/Individual.h
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/Settings.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/Settings.h
        project/RandomWrapper/RandomWrapper.cpp project/RandomWrapper/RandomWrapper.h
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/Genotype.cpp
        project/CustomAlgorithms/MetaHeuristic/GeneticAlgorithm/Genotype.h
)