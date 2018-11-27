//
// Created by dzordzu on 17.11.18.
//

#ifndef SCHOOL_KNAPSACK_H
#define SCHOOL_KNAPSACK_H

#include <vector>
#include "Gene.h"

/**
 * Our fitness class
 */
class KnapsackFitness : public Fitness {
    int value;
    int weight;

public:
    explicit KnapsackFitness(int weight, int value) {
        this->weight = weight;
        this->value = weight < 20 ? value : 0;
    }

    bool operator==(const KnapsackFitness &f) { return this->value == f.value; }
    bool operator>(const KnapsackFitness &f) { return this->value > f.value; }
    bool operator<(const KnapsackFitness &f) { return this->value < f.value; }
    bool operator>=(const KnapsackFitness &f) { return *this>f || *this == f; }
    bool operator<=(const KnapsackFitness &f) { return *this<f || *this == f; }
};

/**
 * Knapsack Items will be our genes
 */
class KnapsackItem : public Gene {
    int weight;
    int value;
    friend class Knapsack;
public:
    KnapsackItem(int weight, int value);
    Fitness * getUnitFitness() override;
};

/**
 * This will be our result
 */
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
