#include <iostream>
#include <GeneticAlgorithm.h>
#include "Knapsack.h"

int main() {

    Knapsack knapsack;
    std::vector<KnapsackItem> items;
    std::vector<Unit *> genes;

    for(KnapsackItem &i : items) {
        genes.push_back(&i);
    }

    GeneticAlgorithm GA;

    StopCondition condition(StopCondition::Type::ITERATION, 100);

    GA.setStopCondition(condition);
    GA.setMutationProbability(0.1);
    GA.setCrossingProbability(0.5);

    GA.setGenes(genes);

    GA.init();
    Unit result = GA.getResult();


    return 0;
}