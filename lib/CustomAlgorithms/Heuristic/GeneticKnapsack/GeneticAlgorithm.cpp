//
// Created by dzordzu on 11.11.18.
//

#include "GeneticAlgorithm.h"

void GeneticAlgorithm::run(bool showProcess) {

    generatePopulation();
    for(int i=0; i<_Iterations; i++) {

        for(int j=0; j<_PopulationSize; j++) {

            int ip1 = randomParentIndex(), ip2 = randomParentIndex();

            /*
             * Yup. I do it on a damn vectors. I like to live on an edge!
             * And yes. I rape your eyes with these stars.
             */
            Instance *parent1 = &population[ip1], *parent2 = &population[ip2];
            float crossingProbability = randomProbability();

            if(crossingProbability <= _CrossingProbability) parent1->crossWith(*parent2);
            parent1->mutate();

        }
    }
}
