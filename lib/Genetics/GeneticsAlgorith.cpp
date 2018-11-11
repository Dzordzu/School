//
// Created by dzordzu on 11.11.18.
//

#include "GeneticsAlgorith.h"
namespace CustomAlgorithms {
    namespace Genetics {
        const std::vector<Backpack::Item> &GeneticsAlgorith::getWorkingSet() const {
            return working_set;
        }

        void GeneticsAlgorith::setWorkingSet(const std::vector<Backpack::Item> &working_set) {
            GeneticsAlgorith::working_set = working_set;
        }

        uint8_t GeneticsAlgorith::getPopulationSize() const {
            return populationSize;
        }

        void GeneticsAlgorith::setPopulationSize(uint8_t populationSize) {
            GeneticsAlgorith::populationSize = populationSize;
        }

    }
}