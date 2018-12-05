//
// Created by dzordzu on 20.11.18.
//

#ifndef SCHOOL_INDIVIDUAL_H
#define SCHOOL_INDIVIDUAL_H


#include "Fitness.h"

/**
 * Derivatives should somehow store genes (I really don't care how)
 */
class Individual {
protected:
    Fitness * individualFitness;
    virtual void recalculateFitness() = 0;
public:
    virtual void crossWith(Individual * i) = 0;
    virtual void mutate() = 0;
    virtual Fitness * getIndividualFitness();
};

/**
 * Used in population generation process
 */
class IndividualFactory {
public:
    virtual void prepareRandom() = 0;
    virtual Individual * build() = 0;
    virtual void clear() = 0;
};

/*
 * *****************************
 *    Common implementations
 * *****************************
 */

class BinaryIndividual : public Individual {
protected:
    std::vector<uint_fast8_t> genotype;
public:
    BinaryIndividual(std::vector<uint_fast8_t> genotype);
    void crossWith(Individual * i) override;
    void mutate() override;
};


#endif //SCHOOL_INDIVIDUAL_H
