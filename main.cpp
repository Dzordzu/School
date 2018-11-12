#include <iostream>
#include "lib/CustomAlgorithms/Heuristic/GeneticKnapsack/Implementation.cpp"
#include "lib/InputValidator/InputValidator.h"

int main() {

    //std::cout<<InputValidator::getInstance().getNumericString(std::cin);

    // TODO
    // After all wrap to:
    // CustomAlgorithms::Heuristic::GeneticKnapsack::
    try {
        Implementation knapsack;
        knapsack.setKnapsackSize("a12");
        std::cout << knapsack.knapsackSize;



//    knapsack.setSize(5);
//
//    knapsack.setItems();
//    knapsack.generateItems(4);
//
//    knapsackk.getAlgo().setPopulationSize(2);
//    knapsack.getAlgo().setCrossingProbability(0.25);
//    knapsack.getAlgo().setMutationProbability(0.1);
//    knapsack.getAlgoo().setGenerationsAmount(2);
//
    knapsack.init();

    } catch(InputValidationException &e) {
        std::cout<<e.what();
    }

    std::cout<<"ASAS";

    return 0;
}