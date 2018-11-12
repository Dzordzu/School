//
// Created by dzordzu on 11.11.18.
//

#include <random>
#include "GeneticAlgorithm.h"
#include "RandomWrapper.h"

void GeneticAlgorithm::generatePopulation() {
    for(int n=0; n<_PopulationSize; n++) {
        population.emplace_back(Instance(_Knapsack, _WorkingSet, _MutationProbability));
        checkForNewFitness(population.back());
    }
}


Instance GeneticAlgorithm::run(bool showProcess) {

    generatePopulation();
    if(showProcess) showPopulation();

    for(int i=0; i<_Iterations; i++) {
        if(showProcess) std::cout<<std::endl<<"---------------------------"<<std::endl;

        for(int j=0; j<_PopulationSize; j++) {
            /*
             * Yup. I do it on a damn vectors. I like to live on an edge!
             * And yes. I rape your eyes with these stars.
             */
            Instance *parent1 = randomParent(), *parent2 = randomParent();
            float crossingProbability = randomProbability();

            if(crossingProbability <= _CrossingProbability) {
                if(showProcess) std::cout<<"Crossing "<<parent1->getGenotypeAsString()<<" with "<<parent2->getGenotypeAsString()<<" is ";
                parent1->crossWith(*parent2);
                if(showProcess) std::cout<<parent1->getGenotypeAsString()<<" ("<< crossingProbability<<"<="<<_CrossingProbability<<") "<<std::endl;
            }
            parent1->mutate(showProcess);
            checkForNewFitness(*parent1);


        }

        if(showProcess) {
            std::cout<<std::endl<<"---------------------------"<<std::endl;
            std::cout<<"After Iteration "<<i<<": "<<std::endl;
            showPopulation();
        }

    }

    return _BestInstance;
}

void GeneticAlgorithm::showPopulation() {
    for(Instance i: population) {
        i.showInstance();
    }
}

uint64_t GeneticAlgorithm::randomParentIndex() {
    return RandomWrapper::getRandom<uint64_t >(0, _PopulationSize-1);
}

float GeneticAlgorithm::randomProbability() {
    return RandomWrapper::getRandomProbability();
}

Instance *GeneticAlgorithm::randomParent() {
    uint64_t p1i = randomParentIndex(), p2i = randomParentIndex();
    Instance * p1 = &population[p1i], * p2 = &population[p2i];
    return p1->getFitness() >= p2->getFitness() ? p1 : p2;
}

void GeneticAlgorithm::checkForNewFitness(Instance &other) {
    if(other.getFitness() > _BestFitness) {
        _BestFitness = other.getFitness();
        _BestInstance = other;
    }
}
