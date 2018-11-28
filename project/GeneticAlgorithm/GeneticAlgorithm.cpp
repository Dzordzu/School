//
// Created by dzordzu on 20.11.18.
//

#include "GeneticAlgorithm.h"

void GeneticAlgorithm::setMutationProbability(float probability) {
    this->mutationProbability = probability;
}

void GeneticAlgorithm::setCrossingProbability(float probability) {
    this->crossingProbability = probability;
}

void GeneticAlgorithm::setGenes(const std::vector<Gene *> &genes) {
    this->genes = genes;
}

std::vector<Gene *> GeneticAlgorithm::getGenes() {
    return genes;
}

void GeneticAlgorithm::setStopCondition(StopCondition stopCondition) {
    this->stopCondition = stopCondition;
}

void GeneticAlgorithm::setIndividualFactory(IndividualFactory *individualFactory) {
    this->individualFactory = individualFactory;
}
