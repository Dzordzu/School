//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H

#include <cstdint>
#include "../../../Macros/GETSET.cpp"
#include "Knapsack.h"
#include "WorkingSet.h"


class GeneticAlgorithm {
    GETSET(uint16_t , PopulationSize);
    GETSET(float, CrossingProbability);
    GETSET(float, MutationProbability);
    GETSET(uint16_t, Iterations);
    GETSET(Knapsack*, Knapsack);
    GETSET(WorkingSet*, WorkingSet);
public:
    void run(bool showProcess = false);
};


#endif //SCHOOL_GENETICALGORITHM_H
