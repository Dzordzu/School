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

    void mutate();
    void crossWith(Instance other);

public:
    uint32_t getFitness();

};


#endif //SCHOOL_INSTANCE_H
