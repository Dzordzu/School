//
// Created by dzordzu on 20.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H


#include <cstdint>
#include "StopCondition.h"

class GeneticAlgorithm {


public:
    void init();
    void setMutationProbability();
    void setCrossingProbability();
    void setGenes();
    void setStopCondition();
};


#endif //SCHOOL_GENETICALGORITHM_H
