//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_KNAPSACKITEM_H
#define SCHOOL_KNAPSACKITEM_H


#include <stdint-gcc.h>

struct KnapsackItem {
    const uint32_t value, size;
    KnapsackItem(uint32_t value, uint32_t size);
};


#endif //SCHOOL_KNAPSACKITEM_H
