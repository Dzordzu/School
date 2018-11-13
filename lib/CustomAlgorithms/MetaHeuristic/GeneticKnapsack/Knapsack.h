//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_KNAPSACK_H
#define SCHOOL_KNAPSACK_H


#include <cstdint>
#include "../../../Macros/GETSET.h"

class Knapsack {
    GET(uint32_t, Size);
public:
    explicit Knapsack(uint32_t size = 0);
    Knapsack() {
        _Size = 0;
    }
};


#endif //SCHOOL_KNAPSACK_H
