//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_WORKINGSET_H
#define SCHOOL_WORKINGSET_H


#include <vector>
#include "KnapsackItem.h"
#include "../../../Macros/GETSET.cpp"

class WorkingSet {
    GETSET(std::vector<KnapsackItem>, Items);
};


#endif //SCHOOL_WORKINGSET_H
