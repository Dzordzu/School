//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H

#include <cstdint>
#include "../../../Macros/GETSET.cpp"
#include "Knapsack.h"
#include "WorkingSet.h"
#include "Instance.h"
#include <iostream>


class GeneticAlgorithm {
    GETSET(uint16_t , PopulationSize);
    GETSET(float, CrossingProbability);
    GETSET(float, MutationProbability);
    GETSET(uint16_t, Iterations);
    GETSET(Knapsack*, Knapsack);
    GETSET(WorkingSet*, WorkingSet);

    std::vector<Instance> population;

    void generatePopulation();
    uint64_t randomParentIndex();
    float randomProbability();
    Instance * randomParent();
public:
    void run(bool showProcess = false);
    void showPopulation();
};


#endif //SCHOOL_GENETICALGORITHM_H
