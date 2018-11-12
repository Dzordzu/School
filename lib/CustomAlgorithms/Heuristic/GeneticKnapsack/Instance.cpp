//
// Created by dzordzu on 12.11.18.
//

#include <random>
#include <iostream>
#include "Instance.h"

Instance::Instance(Knapsack *knapsack, WorkingSet *workingSet) {

    this->knapsack = knapsack;

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
