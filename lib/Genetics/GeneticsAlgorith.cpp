//
// Created by dzordzu on 11.11.18.
//

#include "GeneticsAlgorith.h"
namespace CustomAlgorithms {

    const std::vector<Backpack::Item> &GeneticsAlgorith::getWorking_set() const {
        return working_set;
    }

    void GeneticsAlgorith::setWorking_set(const std::vector<Backpack::Item> &working_set) {
        GeneticsAlgorith::working_set = working_set;
    }
}