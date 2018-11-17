//
// Created by dzordzu on 17.11.18.
//

#ifndef SCHOOL_KNAPSACK_H
#define SCHOOL_KNAPSACK_H

#include <vector>

struct KnapsackItem {
    int id;
    int weight;
    int value;
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
