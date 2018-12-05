//
// Created by dzordzu on 26.11.18.
//

#ifndef SCHOOL_UNIT_H
#define SCHOOL_UNIT_H


#include "Fitness.h"

class Gene {
protected:
    Fitness * geneFitness;
public:
    virtual Fitness * getGeneFitness() = 0;
};


#endif //SCHOOL_UNIT_H
