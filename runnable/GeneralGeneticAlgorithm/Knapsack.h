//
// Created by dzordzu on 17.11.18.
//

#ifndef SCHOOL_KNAPSACK_H
#define SCHOOL_KNAPSACK_H

#include <vector>
#include <Individual.h>
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

    int getValue() const { return value; }
    int getWeight() const { return weight; }

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
    friend class Knapsack;
public:
    KnapsackItem(int weight, int value);
    Fitness * getGeneFitness() override;
};

/**
 * This will be our 'individual'
 */
class Knapsack : public Individual {
    int maxWeight;
    std::vector<KnapsackItem> items;

public:
    explicit Knapsack(int maxWeight = 20);
    void add(KnapsackItem i);
    int getValue();
    int getWeight();
};

class KnapsackFactory : public IndividualFactory {

};



#endif //SCHOOL_KNAPSACK_H
