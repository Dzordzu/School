//
// Created by dzordzu on 17.11.18.
//

#ifndef SCHOOL_KNAPSACK_H
#define SCHOOL_KNAPSACK_H

#include <vector>
#include "Gene.h"

class KnapsackFitness : public Fitness {
    int value;

public:
    explicit KnapsackFitness(int value) {
        this->value = value;
    }

    bool operator==(const KnapsackFitness &f) { return this->value == f.value; }
    bool operator>(const KnapsackFitness &f) { return this->value > f.value; }
    bool operator<(const KnapsackFitness &f) { return this->value < f.value; }
    bool operator>=(const KnapsackFitness &f) { return *this>f || *this == f; }
    bool operator<=(const KnapsackFitness &f) { return *this<f || *this == f; }
};

class KnapsackItem : public Gene {
    int weight;
    int value;
    friend class Knapsack;
public:
    KnapsackItem(int weight, int value);
    Fitness * getUnitFitness() override;
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
