//
// Created by dzordzu on 17.11.18.
//

#include "Knapsack.h"

void Knapsack::add(KnapsackItem i) {
    items.push_back(i);
    value += i.value;
    weight += i.weight;
}

int Knapsack::getValue() {
    return value;
}

Knapsack::Knapsack(int maxWeight) {
    this->maxWeight = maxWeight;
}

int Knapsack::getWeight() {
    return weight;
}

KnapsackItem::KnapsackItem(int weight, int value) {
    this->weight = weight;
    this->value = value;
}
