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

public:
    Instance(Knapsack *knapsack, WorkingSet *workingSet);
    uint32_t getFitness();
    void mutate();
    void crossWith(Instance other);
};


#endif //SCHOOL_INSTANCE_H
