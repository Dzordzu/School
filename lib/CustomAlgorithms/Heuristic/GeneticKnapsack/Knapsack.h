//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_KNAPSACK_H
#define SCHOOL_KNAPSACK_H


#include <cstdint>
#include "../../../Macros/GETSET.cpp"

class Knapsack {
    const uint32_t size;
    GETSET(uint32_t, CurrentSize);
    GETSET(uint32_t, CurrentValue);

public:
    Knapsack(uint32_t size);
};


#endif //SCHOOL_KNAPSACK_H
