//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_IMPLEMENTATION_H
#define SCHOOL_IMPLEMENTATION_H

#include "GeneticAlgorithm.h"
#include <string>

class Implementation {

    GeneticAlgorithm algorithm;

    uint32_t size;
    uint32_t populationSize;
    float crossingProbablity, mutationProbability;
    uint16_t generationsAmount;

public:
    void setSize(std::istream &value);
    void setPopulationSize(std::istream &value);
    void setCrossingProbability(std::istream &value);
    void setMutationProbability(std::istream &value);
    void setGenerationsAmount(std::istream &value);

    void setSize(std::string value);
    void setPopulationSize(std::string value);
    void setCrossingProbability(std::string value);
    void setMutationProbability(std::string value);
    void setGenerationsAmount(std::string value);


    void init();
};


#endif //SCHOOL_IMPLEMENTATION_H
