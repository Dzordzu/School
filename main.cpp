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

        knapsack.setKnapsackSize("500000");
        knapsack.setIterations("2000");
        knapsack.setPopulationSize("10");
        knapsack.setCrossingProbability("1");
        knapsack.setMutationProbability("0.05");

        knapsack.generateRandomWorkingSet(20, 1, 5);
        knapsack.init();
        std::cout<<knapsack.getBestInstance().getFitness()<<" "<<knapsack.getBestInstance().getGenotypeAsString()<<std::endl;
        knapsack.printGeneralInfo();


    } catch(InputValidationException &e) {
        std::cout<<e.what();
    }

    return 0;
}