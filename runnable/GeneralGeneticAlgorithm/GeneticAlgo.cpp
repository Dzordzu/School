#include <iostream>

#include "GeneralGeneticAlgorithmApp.h"
#include "Knapsack.h"

int main() {

#define CMG CustomAlgorithms::MetaHeuristics::GeneticAlgorithm;

    Knapsack knapsack;
    std::vector<KnapsackItem> items {
        KnapsackItem(10, 5),
        KnapsackItem(5, 100),
        KnapsackItem(3, 10),
        KnapsackItem(5, 9),
        KnapsackItem(45, 8)
    };
    CMG::GeneticAlgorithm<
            /* Considered elements type */  KnapsackItem,
            /* Returned value type*/        Knapsack
            > GA;

    CMG::StopCondition stopCondition(
            /* Type */  CMG::StopCondition::Type::ITERATION
            /* Value */ 100
            );

    GA.settings.stopCondition = stopCondition;
    GA.settings.populationSize = 20;
    GA.settings.mutationProbability = 0.1;
    GA.settings.crossingProbability = 0.5;

    ExampleInstanceFitnessCalculator</* Considered elements type*/ KnapsackItem> instanceFitnessCalculator;
    ExampleIndividualFitnessCalculator</* Considered elements type*/ KnapsackItem> individualFitnessCalculator;
    ExampleResultFormatter <
        /* Considered elements type */  KnapsackItem,
        /* Returned value type*/        Knapsack
        > resultFormatter;

    GA.settings.instanceFitnessCalculator(instanceFitnessCalculator);
    GA.settings.individualFitnessCalculator(individualFitnessCalculator);
    GA.settings.resultFormatter(resultFormatter);
    GA.settings.storage = CMG::Storage::POINTERS;

    GA.instanceManager.open()

    for(KnapsackItem i : items)
        GA.instanceManager.addInstance(&i);

    GA.instanceManager.close();

    GA.init();
    Knapsack result = GA.getResult();



    return 0;
}