//
// Created by dzordzu on 17.11.18.
//

#include "Knapsack.h"

void Knapsack::add(KnapsackItem i) {
    items.push_back(i);

    /**
     * Cast Fitness to KnapsackFitness
     */
    auto * itemFitness = dynamic_cast<KnapsackFitness *>(i.getGeneFitness());
    auto * individualFitness = dynamic_cast<KnapsackFitness *>(this->individualFitness);

    /**
     * Apply new values
     */
    this->individualFitness = new KnapsackFitness(
            individualFitness->getWeight() + itemFitness->getWeight(),
            individualFitness->getValue() + itemFitness->getValue()
            );
}

int Knapsack::getValue() {
    auto * individualFitness = dynamic_cast<KnapsackFitness *>(this->individualFitness);
    return individualFitness->getValue();
}

Knapsack::Knapsack(int maxWeight) {
    this->maxWeight = maxWeight;
}

int Knapsack::getWeight() {
    auto * individualFitness = dynamic_cast<KnapsackFitness *>(this->individualFitness);
    return individualFitness->getWeight();
}

KnapsackItem::KnapsackItem(int weight, int value) {
    this->geneFitness = new KnapsackFitness(weight, value);
}

Fitness * KnapsackItem::getGeneFitness() {
    return this->geneFitness;
}
