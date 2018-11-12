//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H

#include <cstdint>
#include "../../../Macros/GETSET.cpp"


class GeneticAlgorithm {
    GETSET(uint16_t , PopulationSize);
    GETSET(float, CrossingProbability);
    GETSET(float, MutationProbability);
    GETSET(uint16_t, GenerationsAmount);
    GETSET(uint32_t, KnapsackSize);


public:
    void run();
};


#endif //SCHOOL_GENETICALGORITHM_H
