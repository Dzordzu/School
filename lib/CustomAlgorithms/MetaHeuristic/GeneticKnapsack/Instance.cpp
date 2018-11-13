//
// Created by dzordzu on 12.11.18.
//

#include <random>
#include <iostream>
#include "Instance.h"
#include "RandomWrapper.h"

Instance::Instance(Knapsack *knapsack, WorkingSet *workingSet, float mutationProbability) {

    this->_Knapsack = knapsack;
    this->_WorkingSet = workingSet;
    this->_MutationProbability = mutationProbability;


    uint64_t workingSetSize = workingSet->getItems().size();

    for(int n=0; n<workingSetSize; n++) {
        _Genotype.emplace_back((bool)RandomWrapper::getRandom<short>(0, 2));
    }
}

void Instance::showInstance() {
    std::cout<<"Instance: Genotype(";
    for(bool b: _Genotype) {
        std::cout<<b;
    }
    std::cout<<"), Fitness("<<getFitness()<<")"<<std::endl;
}

uint32_t Instance::getFitness() {
    uint32_t fitness = 0, size = 0;
    for(uint64_t i=0; i<_Genotype.size(); i++) {
        if(_Genotype[i]) {
            fitness += _WorkingSet->getItems()[i].getValue();
            size += _WorkingSet->getItems()[i].getSize();
        }
    }
    if(this->_Knapsack->getSize() < size) return 0;
    else return fitness;
}

void Instance::crossWith(Instance &other) {
    uint64_t breakpoint = RandomWrapper::getRandom<uint64_t >(0, _Genotype.size() - 2);

    for(uint64_t i = 0; i<breakpoint; i++) {
        _Genotype[i] = other._Genotype[i];
    }
}

void Instance::mutate(bool showProcess) {
    for(uint64_t i = 0; i<_Genotype.size(); i++) {
        float prob = RandomWrapper::getRandomProbability();
        if (prob <= this->_MutationProbability) {
            if(showProcess) std::cout<<"Mutated "<<getGenotypeAsString()<<" to ";
            _Genotype[i] = !_Genotype[i];
            if(showProcess) std::cout<<getGenotypeAsString()<<" (Position: "<<i<<") "<<std::endl;
        }
    }
}

std::string Instance::getGenotypeAsString() {
    std::string result = "";
    for(bool b : _Genotype) {
        result += std::to_string(b);
    }
    return result;
}

Instance::Instance() {
    _Genotype = std::vector<bool>(1, 0);
    Knapsack k(0);
    _Knapsack = &k;
}
