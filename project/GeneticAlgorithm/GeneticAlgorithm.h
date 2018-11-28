//
// Created by dzordzu on 20.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H


#include <cstdint>
#include <vector>
#include "StopCondition.h"
#include "Gene.h"
#include "Individual.h"

class GeneticAlgorithm {
    float mutationProbability;
    float crossingProbability;
    std::vector<Gene *> genes;
    StopCondition stopCondition;
    IndividualFactory * individualFactory;

public:
    void setMutationProbability(float probability);
    void setCrossingProbability(float probability);
    void setGenes(const std::vector<Gene*> &genes);
    std::vector<Gene *> getGenes();
    void setStopCondition(StopCondition stopCondition);
    void setIndividualFactory(IndividualFactory * individualFactory);
    Individual * getResult();
    void init();
};


#endif //SCHOOL_GENETICALGORITHM_H
