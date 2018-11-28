//
// Created by dzordzu on 20.11.18.
//

#ifndef SCHOOL_PROBLEM_H
#define SCHOOL_PROBLEM_H


#include <vector>
#include <array>
#include "Individual.h"

class Problem {
    std::vector<Individual *> population;
    IndividualFactory * individualFactory;
    Individual * bestSolution;
    uint32_t geneticOperations;

    void generateRandomPopulation();
    void crossRandom();

//    TODO - Implement
//    std::array<Individual *, 2> currentlyBestParents;
//    void findBestParents();
//    void crossBestParents();

public:
    Individual * getBestSolution();
    uint32_t getGeneticOperations();
};


#endif //SCHOOL_PROBLEM_H
