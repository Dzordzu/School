//
// Created by dzordzu on 11.11.18.
//

#include "Instance.h"

namespace CustomAlgorithms {
    namespace Genetics {
        void Instance::setWorkingSet(std::vector<Backpack::Item> *workingSet) {
            this->workingSet = workingSet;
        }

        void Instance::setGenotype(std::vector<bool> genotype) {
            this->genotype = genotype;
        }

        const std::vector<bool> &Instance::getGenotype() const {
            return genotype;
        }
    }
}