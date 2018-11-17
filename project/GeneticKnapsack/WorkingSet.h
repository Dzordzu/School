//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_WORKINGSET_H
#define SCHOOL_WORKINGSET_H


#include <vector>
#include "KnapsackItem.h"
#include "../Macros/GETSET.h"

class WorkingSet {
    GETrefSET(std::vector<KnapsackItem>, Items);
public:
    WorkingSet() = default;
};


#endif //SCHOOL_WORKINGSET_H
