#include <iostream>
#include "lib/CustomAlgorithms/Heuristic/GeneticKnapsack/Implementation.cpp"

int main() {

    // TODO
    // After all wrap to:
    // CustomAlgorithms::Heuristic::GeneticKnapsack::
    Implementation knapsack;

    knapsack.setSize(5);
//
//    knapsack.setItems();
//    knapsack.generateItems(4);
//
    knapsack.getAlgo().setPopulationSize(2);
    knapsack.getAlgo().setCrossingProbability(0.25);
    knapsack.getAlgo().setMutationProbability(0.1);
    knapsack.getAlgo().setGenerationsAmount(2);
//
    knapsack.findBestSolution();

    return 0;
}