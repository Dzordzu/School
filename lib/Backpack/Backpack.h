//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_BACKPACK_H
#define SCHOOL_BACKPACK_H

#include "Item.h"
#include <vector>

namespace Backpack {
    class Backpack {
        uint32_t max_size;
        uint32_t actual_size;
        uint32_t summed_value;

        /*
         * TODO
         * Fix Issue:
         * The problem is that there is no dynamic array equivalent in c++ containers
         * Obviously I could use bracket array, but nah - it would be too easy
         */
        std::vector<Item> backpack;

    public:
        explicit Backpack(uint32_t max_size);
        Item getItem(uint8_t index);
        bool addItem(Item item);
        uint64_t getSummedValue();
    };
}



#endif //SCHOOL_BACKPACK_H
