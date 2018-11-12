#include <iostream>
#include "lib/CustomAlgorithms/Heuristic/GeneticKnapsack/Implementation.cpp"
#include "lib/CustomAlgorithms/Heuristic/GeneticKnapsack/Knapsack.h"
#include "lib/CustomAlgorithms/Heuristic/GeneticKnapsack/WorkingSet.h"
#include "lib/InputValidator/InputValidator.h"

int main() {

    //std::cout<<InputValidator::getInstance().getNumericString(std::cin);

    // TODO
    // After all wrap to:
    // CustomAlgorithms::Heuristic::GeneticKnapsack::
    try {
        Implementation knapsack;

        knapsack.setKnapsackSize("5");
        knapsack.setIterations("2000");
        knapsack.setPopulationSize("5");
        knapsack.setCrossingProbability("0.5");
        knapsack.setMutationProbability("0.2");

        knapsack.generateRandomWorkingSet(200, 1, 5);
        knapsack.init(0);
        std::cout<<knapsack.getBestInstance().getFitness()<<" "<<knapsack.getBestInstance().getGenotypeAsString()<<std::endl;
        knapsack.printGeneralInfo();





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
    //knapsack.init();

    } catch(InputValidationException &e) {
        std::cout<<e.what();
    }

    return 0;
}