//
// Created by dzordzu on 20.11.18.
//

#include "Problem.h"

void Problem::generateRandomPopulation(uint_fast32_t populationSize) {
    for(uint_fast32_t i = 0; i<populationSize; i++) {
        individualFactory->prepareRandom();
        population.push_back(individualFactory->build());
        individualFactory->clear();
    }
}

void Problem::crossRandom() {
    uint_fast32_t i1 = Utils::RandomWrapper::getRandom<uint_fast32_t >(0, population.size());
    uint_fast32_t i2 = Utils::RandomWrapper::getRandom<uint_fast32_t >(0, population.size());
    population[i1]->crossWith(population[i2]);
    geneticOperations++;
}
