//
// Created by dzordzu on 11.11.18.
//

#include "Implementation.h"
#include "../../../InputValidator/InputValidator.h"

void Implementation::init() {
    algorithm.setPopulationSize(populationSize);
    algorithm.setGenerationsAmount(generationsAmount);
    algorithm.setMutationProbability(mutationProbability);
    algorithm.setCrossingProbability(crossingProbability);
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

void Implementation::setGenerationsAmount(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    populationSize = std::stoul(resultString);
}
