//
// Created by dzordzu on 11.11.18.
//

#include <random>
#include "Implementation.h"
#include "../../../InputValidator/InputValidator.h"

void Implementation::setKnapsackSize(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    knapsackSize = std::stoul(resultString);
    knapsack = Knapsack(knapsackSize);
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

void Implementation::setGenerationsAmount(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    populationSize = std::stoul(resultString);
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

void Implementation::init() {
    algorithm.setPopulationSize(populationSize);
    algorithm.setGenerationsAmount(generationsAmount);
    algorithm.setMutationProbability(mutationProbability);
    algorithm.setCrossingProbability(crossingProbability);
    algorithm.setKnapsackSize(knapsackSize);
    algorithm.setIterations(iterations);
}
