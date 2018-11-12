//
// Created by dzordzu on 12.11.18.
//

#include <random>
#include <iostream>
#include "Instance.h"

Instance::Instance(Knapsack *knapsack, WorkingSet *workingSet) {

    this->knapsack = knapsack;
    this->workingSet = workingSet;

    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<short> dis(0, 1);

    uint64_t workingSetSize = workingSet->getItems().size();

    for(int n=0; n<workingSetSize; n++) {
        genotype.emplace_back((bool)dis(gen));
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
    for(uint64_t i=0; i<genotype.size(); i++) {
        if(genotype[i]) {
            fitness += workingSet->getItems()[i].getValue();
            size += workingSet->getItems()[i].getSize();
        }
    }

    if(this->knapsack->getSize() < size) return 0;
    else return fitness;
}
