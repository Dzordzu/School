add_library(GeneticAlgorithm
        GeneticAlgorithm.h
        GeneticAlgorithm.cpp
        Instance.h
        Instance.cpp
        Problem.h
        Problem.cpp
        StopCondition.h
        StopCondition.cpp
        Fitness.h
        Fitness.cpp
        Unit.cpp
        Unit.h
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