//
// Created by dzordzu on 12.11.18.
//

#include <random>
#include <iostream>
#include "Instance.h"
#include "RandomWrapper.h"

Instance::Instance(Knapsack *knapsack, WorkingSet *workingSet, float mutationProbability) {

    this->knapsack = knapsack;
    this->workingSet = workingSet;
    this->mutationProbability = mutationProbability;


    uint64_t workingSetSize = workingSet->getItems().size();

    for(int n=0; n<workingSetSize; n++) {
        genotype.emplace_back((bool)RandomWrapper::getRandom<short>(0, 2));
    }
}

void Instance::showInstance() {
    std::cout<<"Instance: Genotype(";
    for(bool b: genotype) {
        std::cout<<b;
    }
    std::cout<<")"<<std::endl;
}

uint32_t Instance::getFitness() {
    uint32_t fitness = 0, size = 0;
    for(uint64_t i=0; i<genotype.size() - 1; i++) {
        if(genotype[i]) {
            fitness += workingSet->getItems()[i].getValue();
            size += workingSet->getItems()[i].getSize();
        }
    }

    if(this->knapsack->getSize() < size) return 0;
    else return fitness;
}

void Instance::crossWith(Instance &other) {
    uint64_t breakpoint = RandomWrapper::getRandom<uint64_t >(0, genotype.size() - 2);

    for(uint64_t i = 0; i<breakpoint; i++) {
        genotype[i] = other.genotype[i];
    }
}

void Instance::mutate(bool showProcess) {
    for(uint64_t i = 0; i<genotype.size(); i++) {
        float prob = RandomWrapper::getRandomProbability();
        if (prob <= this->mutationProbability) {
            if(showProcess) std::cout<<"Mutated "<<getGenotypeAsString()<<" to ";
            genotype[i] = !genotype[i];
            if(showProcess) std::cout<<getGenotypeAsString()<<" (Position: "<<i<<") "<<std::endl;
        }
    }
}

std::string Instance::getGenotypeAsString() {
    std::string result = "";
    for(bool b : genotype) {
        result += std::to_string(b);
    }
    return result;
}
