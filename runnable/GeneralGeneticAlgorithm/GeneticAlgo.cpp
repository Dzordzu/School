#include <iostream>
#include <GeneticAlgorithm.h>
#include "Knapsack.h"

int main() {

    Knapsack knapsack;
    std::vector<KnapsackItem> items {
        KnapsackItem(10, 5),
        KnapsackItem(5, 100),
        KnapsackItem(3, 10),
        KnapsackItem(5, 9),
        KnapsackItem(45, 8)
    };

    GeneticAlgorithm GA<KnapsackItem>;

    StopCondition condition(StopCondition::Type::ITERATION, 100);

    GA.setStopCondition(condition);
    GA.setMutationProbability = 0.1;
    GA.setCrossingProbability = 0.5;

    GA.items = items;
    GA.fitnessCalculator = [](std::vector<Fitness> values) -> Fitness {
        Fitness result;

        return
    };

    GA.init();
    std::vector<KnapsackItem> result = GA.result();


    return 0;
}