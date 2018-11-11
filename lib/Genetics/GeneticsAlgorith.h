//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_GENETICSALGORITH_H
#define SCHOOL_GENETICSALGORITH_H

#include <vector>
#include "../Backpack/Item.h"

namespace CustomAlgorithms {
    namespace Genetics {
        class GeneticsAlgorith {
            std::vector<Backpack::Item> working_set;
            uint8_t populationSize;
        public:
            uint8_t getPopulationSize() const;
            void setPopulationSize(uint8_t populationSize);

        public:
            const std::vector<Backpack::Item> &getWorkingSet() const;
            void setWorkingSet(const std::vector<Backpack::Item> &working_set);
        };
    }
}

#endif //SCHOOL_GENETICSALGORITH_H
