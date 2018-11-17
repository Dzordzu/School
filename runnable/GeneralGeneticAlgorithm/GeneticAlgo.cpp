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

    CMG::GeneticAlgorithm<KnapsackItem, Knapsack> GA;

    GA.settings.stopCondition = CMG::StopCondition(
            CMG::StopCondition::Type::ITERATION,
            100
            );
    GA.settings.populationSize = 20;
    GA.settings.mutationProbability = 0.1;
    GA.settings.crossingProbability = 0.5;

    ExampleInstanceFitnessCalculator<KnapsackItem> instanceFitnessCalculator;
    ExampleIndividualFitnessCalculator<KnapsackItem> individualFitnessCalculator;
    ExampleResultFormatter<KnapsackItem, Knapsack> resultFormatter;

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