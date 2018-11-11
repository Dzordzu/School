//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_GENETICSALGORITH_H
#define SCHOOL_GENETICSALGORITH_H

#include <vector>
#include "../Backpack/Item.h"

namespace CustomAlgorithms {
    class GeneticsAlgorith {
        std::vector<Backpack::Item> working_set;
    public:
        const std::vector<Backpack::Item> &getWorkingSet() const;
        void setWorkingSet(const std::vector<Backpack::Item> &working_set);
    };
}

#endif //SCHOOL_GENETICSALGORITH_H
