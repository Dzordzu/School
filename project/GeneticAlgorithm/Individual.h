//
// Created by dzordzu on 20.11.18.
//

#ifndef SCHOOL_INDIVIDUAL_H
#define SCHOOL_INDIVIDUAL_H


#include "Fitness.h"

class Individual {
    Fitness fitness;
public:
    virtual void crossWith(Individual &i);
    virtual void mutate();
    virtual void getFitness();
};


#endif //SCHOOL_INDIVIDUAL_H
