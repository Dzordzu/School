//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_IMPLEMENTATION_H
#define SCHOOL_IMPLEMENTATION_H

#include "GeneticAlgorithm.h"
#include "../../../Macros/GETSET.cpp"

class Implementation {
    GETSET(uint8_t, Size)
    GET(GeneticAlgorithm, Algo);

public:
    void findBestSolution();
};


#endif //SCHOOL_IMPLEMENTATION_H
