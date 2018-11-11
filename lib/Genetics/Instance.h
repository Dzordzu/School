//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_INSTANCE_H
#define SCHOOL_INSTANCE_H

#include <vector>
#include "../Backpack/Item.h"

namespace CustomAlgorithms {
    namespace Genetics {
        class Instance {
            std::vector<Backpack::Item> *workingSet;
        public:
            const std::vector<bool> &getGenotype() const;

        private:
            std::vector<bool> genotype;
        public:
            void setWorkingSet(std::vector<Backpack::Item> *workingSet);
            void setGenotype(std::vector<bool> genotype);
        };
    }
}




#endif //SCHOOL_INSTANCE_H
