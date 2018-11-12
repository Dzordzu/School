//
// Created by dzordzu on 11.11.18.
//

#include "Implementation.h"

void Implementation::init() {
    algorithm.setPopulationSize(populationSize);
    algorithm.setGenerationsAmount(generationsAmount);
    algorithm.setMutationProbability(mutationProbability);
    algorithm.setCrossingProbability(crossingProbablity);
}
