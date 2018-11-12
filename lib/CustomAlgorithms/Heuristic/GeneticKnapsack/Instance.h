//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_INSTANCE_H
#define SCHOOL_INSTANCE_H


#include <vector>
#include <cstdint>
#include "Knapsack.h"
#include "WorkingSet.h"

class Instance {
    std::vector<bool> genotype;
    Knapsack *knapsack;
    WorkingSet *workingSet;
    float mutationProbability;

public:
    Instance();
    Instance(Knapsack *knapsack, WorkingSet *workingSet, float mutationProbability);
    void showInstance();
    uint32_t getFitness();
    void mutate(bool showProcess = false);
    void crossWith(Instance &other);
    std::string getGenotypeAsString();
};


#endif //SCHOOL_INSTANCE_H
