//
// Created by dzordzu on 11.11.18.
//

#include <random>
#include "GeneticAlgorithm.h"

void GeneticAlgorithm::generatePopulation() {
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<uint64_t> dis(1, _WorkingSet->getItems().size());

    for(int n=0; n<_PopulationSize; n++) {
        population.emplace_back(Instance(_Knapsack, _WorkingSet));
    }
}


void GeneticAlgorithm::run(bool showProcess) {

    generatePopulation();
    if(showProcess) showPopulation();

//    for(int i=0; i<_Iterations; i++) {
//
//        for(int j=0; j<_PopulationSize; j++) {
//
//            int ip1 = randomParentIndex(), ip2 = randomParentIndex();
//
//            /*
//             * Yup. I do it on a damn vectors. I like to live on an edge!
//             * And yes. I rape your eyes with these stars.
//             */
//            Instance *parent1 = &population[ip1], *parent2 = &population[ip2];
//            float crossingProbability = randomProbability();
//
//            if(crossingProbability <= _CrossingProbability) parent1->crossWith(*parent2);
//            parent1->mutate();
//
//        }
//    }
}

void GeneticAlgorithm::showPopulation() {
    for(Instance i: population) {
        i.showInstance();
    }
}
