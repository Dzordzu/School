//
// Created by dzordzu on 12.11.18.
//

#include "KnapsackApp.h"
#include "../../project/GeneticKnapsack/Implementation.h"

void Apps::KnapsackApp() {
    try {
        Implementation knapsack;

        std::cout<<"Working with 10 items with weight and value from 1 to 15"<<std::endl;
        knapsack.generateRandomWorkingSet(10, 1, 15);

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

        std::cout<<"-------------------------------"<<std::endl;
        knapsack.printGeneralInfo();
        knapsack.init(showProcess);
        std::cout<<"-------------------------------"<<std::endl;
        std::cout<<"Result: Value("<<knapsack.getBestInstance().getFitness()<<"), Genotype("<<knapsack.getBestInstance().getGenotypeAsString()<<")"<<std::endl;

        bool restart;
        std::cout<<"Restart? (0/1): ";
        std::cin>>restart;
        if(restart) {
            for(int i = 0; i<100; i++) std::cout<<std::endl;
            KnapsackApp();
        }

    } catch(InputValidationException &e) {
        std::cout<<e.what();
    }
}
