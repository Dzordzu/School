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
    Fitness fitness;
public:
    virtual void crossWith(Individual &i) = 0;
    virtual void mutate() = 0;
    virtual Fitness getFitness();
};


#endif //SCHOOL_INDIVIDUAL_H
