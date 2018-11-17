//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_IMPLEMENTATION_H
#define SCHOOL_IMPLEMENTATION_H

#ifndef STRING_TO_STREAM
#define STRING_TO_STREAM(name) \
public: \
    void set##name(std::string value) {\
        std::istringstream stream(value); \
        set##name(stream); \
    }
#endif //STRING_TO_STREAM

#include "InputValidator.h"
#include "GeneticAlgorithm.h"
#include "WorkingSet.h"
#include "Knapsack.h"
#include <string>
#include <sstream>
#include <iostream>
#include <random>
#include <vector>

class Implementation {

    GeneticAlgorithm _Algorithm;
    WorkingSet _WorkingSet;

    uint32_t _KnapsackSize;
    uint16_t _PopulationSize;
    float _CrossingProbability, _MutationProbability;
    uint16_t _Iterations;

    Instance _BestInstance;

public:
    void setKnapsackSize(std::istream &value);
    void setPopulationSize(std::istream &value);
    void setCrossingProbability(std::istream &value);
    void setMutationProbability(std::istream &value);
    void setIterations(std::istream &value);

    STRING_TO_STREAM(KnapsackSize);
    STRING_TO_STREAM(PopulationSize);
    STRING_TO_STREAM(CrossingProbability);
    STRING_TO_STREAM(MutationProbability);
    STRING_TO_STREAM(Iterations);

    void generateRandomWorkingSet(uint16_t amount, uint32_t min = 1, uint32_t max = 100);

    void init(bool showProcess = false);
    Instance getBestInstance();

    /*
     * Yup. I'm raping this code
     */
    void printGeneralInfo();
};


#endif //SCHOOL_IMPLEMENTATION_H
