//
// Created by dzordzu on 17.11.18.
//

#ifndef SCHOOL_KNAPSACK_H
#define SCHOOL_KNAPSACK_H

#include <vector>
#include "Unit.h"

class KnapsackItem : public Unit {
    int weight;
    int value;
    friend class Knapsack;
public:
    KnapsackItem(int weight, int value);
    Fitness getUnitFitness();
};

class Knapsack {
    int value;
    int weight;
    int maxWeight;
    std::vector<KnapsackItem> items;

public:
    explicit Knapsack(int maxWeight = 20);
    void add(KnapsackItem i);
    int getValue();
    int getWeight();
};


#endif //SCHOOL_KNAPSACK_H
