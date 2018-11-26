//
// Created by dzordzu on 20.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H


#include <cstdint>
#include <vector>
#include "StopCondition.h"
#include "Unit.h"

class GeneticAlgorithm {
public:
    void init();
    void setMutationProbability(float probability);
    void setCrossingProbability(float probability);
    void setGenes(std::vector<Unit> genes);
    void setStopCondition(StopCondition stopCondition);
};


#endif //SCHOOL_GENETICALGORITHM_H
