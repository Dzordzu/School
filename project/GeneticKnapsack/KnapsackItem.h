//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_KNAPSACKITEM_H
#define SCHOOL_KNAPSACKITEM_H


#include <stdint-gcc.h>
#include <string>
#include "../Macros/GETSET.h"

class KnapsackItem {
    GET(uint32_t, Value);
    GET(uint32_t, Size);
public:
    KnapsackItem(uint32_t value, uint32_t size);
    std::string getInfo();
};


#endif //SCHOOL_KNAPSACKITEM_H
