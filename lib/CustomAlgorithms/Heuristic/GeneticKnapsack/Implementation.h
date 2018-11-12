//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_IMPLEMENTATION_H
#define SCHOOL_IMPLEMENTATION_H

#ifndef STRING_TO_STREAM
#define STRING_TO_STREAM(name) \
    void set##name(std::string value) {\
        std::istringstream stream(value); \
        set##name(stream); \
    }
#endif //STRING_TO_STREAM

#include "GeneticAlgorithm.h"
#include <string>
#include <sstream>

struct Implementation {

    GeneticAlgorithm algorithm;

    uint32_t knapsackSize;
    uint16_t populationSize;
    float crossingProbablity, mutationProbability;
    uint16_t generationsAmount;

public:
    void setKnapsackSize(std::istream &value);
    void setPopulationSize(std::istream &value);
    void setCrossingProbability(std::istream &value);
    void setMutationProbability(std::istream &value);
    void setGenerationsAmount(std::istream &value);

    STRING_TO_STREAM(KnapsackSize);
    STRING_TO_STREAM(PopulationSize);
    STRING_TO_STREAM(CrossingProbability);
    STRING_TO_STREAM(MutationProbability);
    STRING_TO_STREAM(GenerationsAmount);


    void init();
};


#endif //SCHOOL_IMPLEMENTATION_H
