//
// Created by dzordzu on 20.11.18.
//

#include <array>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Individual.h"

Fitness * Individual::getIndividualFitness() {
    return this->individualFitness;
}

/*
 * TODO: Add probability
 */
void BinaryIndividual::crossWith(Individual *i) {
    if(typeid(*this).hash_code() == typeid(*i).hash_code()) {

        BinaryIndividual * casted = dynamic_cast<BinaryIndividual *>(i);
        std::vector<uint_fast8_t> child1Genotype;
        std::vector<uint_fast8_t> child2Genotype;

        /*
         * Fast implementation of the std::copy
         */
        for(uint_fast64_t j = 0; j<genotype.size()/2; j++) {
            child1Genotype.push_back(this->genotype[j]);
            child2Genotype.push_back(casted->genotype[j]);
        }

        for(uint_fast64_t j = genotype.size()/2; j<genotype.size(); j++) {
            child1Genotype.push_back(casted->genotype[j]);
            child2Genotype.push_back(this->genotype[j]);
        }

        this->genotype = child1Genotype;
        casted->genotype = child2Genotype;

        this->recalculateFitness();
        casted->recalculateFitness();

    }
}

/*
 * TODO: Add probability, check if uint_fast8_t casting is necessary
 */
void BinaryIndividual::mutate() {
    for(int i=0; i<this->genotype.size(); i++) {
        genotype[i] = (uint_fast8_t)(!(bool)genotype[i]);
    }
}