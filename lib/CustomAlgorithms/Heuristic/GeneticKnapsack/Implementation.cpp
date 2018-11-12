//
// Created by dzordzu on 11.11.18.
//

#include "Implementation.h"

void Implementation::printGeneralInfo() {
    std::cout<<"Working set: "<<std::endl;
    for(KnapsackItem i : workingSet.getItems()) {
        std::cout<<i.getInfo()<<std::endl;
    }
    std::cout<<std::endl<<"Knapsack capacity (size): "<<knapsackSize<<std::endl;
    std::cout<<"Iterations: "<<iterations<<std::endl;
    std::cout<<"Population: "<<populationSize<<std::endl;
    std::cout<<"Crossing Prob: "<<crossingProbability<<std::endl;
    std::cout<<"Mutation Prob: "<<mutationProbability<<std::endl;
    std::cout<<"-------------------------"<<std::endl;
}


void Implementation::setKnapsackSize(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    knapsackSize = std::stoul(resultString);
}

void Implementation::setPopulationSize(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    populationSize = std::stoul(resultString);
}

void Implementation::setCrossingProbability(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    crossingProbability= std::stof(resultString);
}

void Implementation::setMutationProbability(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    mutationProbability= std::stof(resultString);
}

void Implementation::setIterations(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    iterations = std::stoul(resultString);
}

void Implementation::generateRandomWorkingSet(uint16_t amount, uint32_t min, uint32_t max) {
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(min, max);

    for(int n=0; n<amount; n++) {
        workingSet.getItems().emplace_back(KnapsackItem(dis(gen), dis(gen)));
    }
}

void Implementation::init(bool showProcess) {

    Knapsack knapsack(knapsackSize);

    algorithm.setPopulationSize(populationSize);
    algorithm.setMutationProbability(mutationProbability);
    algorithm.setCrossingProbability(crossingProbability);
    algorithm.setKnapsack(&knapsack);
    algorithm.setWorkingSet(&workingSet);
    algorithm.setIterations(iterations);

    if(showProcess) printGeneralInfo();

    Instance supposedBest = algorithm.run(showProcess);
    _BestInstance = supposedBest.getFitness() > _BestInstance.getFitness() ? supposedBest : _BestInstance;
}

Instance Implementation::getBestInstance() {
    return _BestInstance;
}
