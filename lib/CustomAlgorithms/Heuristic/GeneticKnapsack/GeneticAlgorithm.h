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

    uint32_t _BestFitness;
    Instance _BestInstance;
    void checkForNewFitness(Instance &other);

    std::vector<Instance> population;

    void generatePopulation();
    uint64_t randomParentIndex();
    float randomProbability();
    Instance * randomParent();
public:

    GeneticAlgorithm() {
        _BestFitness = 0;
        _BestInstance = Instance();
    }

    Instance run(bool showProcess = false);
    void showPopulation();
};


#endif //SCHOOL_GENETICALGORITHM_H
