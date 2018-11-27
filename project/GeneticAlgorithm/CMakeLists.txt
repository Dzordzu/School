add_library(GeneticAlgorithm
        GeneticAlgorithm.h
        GeneticAlgorithm.cpp
        Individual.h
        Individual.cpp
        Problem.h
        Problem.cpp
        StopCondition.h
        StopCondition.cpp
        Fitness.h
        Fitness.cpp
        Gene.cpp
        Gene.h
        )

target_link_libraries(GeneticAlgorithm
        InputValidator
)

#######################################
# Tests
#######################################
add_executable(GeneticAlgorithmTest
        Test/Test.cpp
)

target_link_libraries(GeneticAlgorithmTest
        gtest
        GeneticAlgorithm
)