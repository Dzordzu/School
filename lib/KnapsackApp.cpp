//
// Created by dzordzu on 12.11.18.
//

#include "KnapsackApp.h"

void Apps::KnapsackApp() {
    try {
        Implementation knapsack;

        std::cout<<"Working with 20 items with weight and value from 1 to 5";
        knapsack.generateRandomWorkingSet(20, 1, 5);

        std::cout<<"Knapsack capacity (size): ";
        knapsack.setKnapsackSize(std::cin);

        std::cout<<"Iterations: ";
        knapsack.setIterations(std::cin);

        std::cout<<"Population: ";
        knapsack.setPopulationSize(std::cin);

        std::cout<<"Crossing Probability: ";
        knapsack.setCrossingProbability(std::cin);

        std::cout<<"Mutation Probability: ";
        knapsack.setMutationProbability(std::cin);

        std::cout<<"Display process? (0/1): ";
        bool showProcess;
        std::cin>>showProcess;

        knapsack.init(showProcess);
        std::cout<<knapsack.getBestInstance().getFitness()<<" "<<knapsack.getBestInstance().getGenotypeAsString()<<std::endl;
        knapsack.printGeneralInfo();


    } catch(InputValidationException &e) {
        std::cout<<e.what();
    }
}
