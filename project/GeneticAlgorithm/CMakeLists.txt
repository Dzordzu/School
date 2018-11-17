add_library(
        GeneticAlgorithm
        ""
)

target_sources(
        GeneticAlgorithm
        PRIVATE
            "${CMAKE_CURRENT_LIST_DIR}/GeneticAlgorithm.h"
            "${CMAKE_CURRENT_LIST_DIR}/Genotype.cpp"
            "${CMAKE_CURRENT_LIST_DIR}/Genotype.h"
            "${CMAKE_CURRENT_LIST_DIR}/Individual.cpp"
            "${CMAKE_CURRENT_LIST_DIR}/Individual.h"
            "${CMAKE_CURRENT_LIST_DIR}/Instances.cpp"
            "${CMAKE_CURRENT_LIST_DIR}/Instances.h"
            "${CMAKE_CURRENT_LIST_DIR}/Settings.cpp"
            "${CMAKE_CURRENT_LIST_DIR}/Settings.h"
)

target_link_libraries(GeneticAlgorithm
        RandomWrapper
)