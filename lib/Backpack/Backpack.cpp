//
// Created by dzordzu on 11.11.18.
//

#include "Backpack.h"
namespace Backpack {
    Backpack::Backpack(uint32_t max_size) : max_size(max_size) {}

    bool Backpack::addItem(Item item) {

        /*
         * I should be crucified for the following lines
         */
        actual_size += item.getSize();
        backpack.emplace_back(item);

        if(actual_size> max_size) {
            summed_value = 0;
            return false;
        }

        summed_value += item.getValue();
        return true;
    }

    Item Backpack::getItem(uint8_t index) {
        return backpack[index];
    }

    uint64_t Backpack::getSummedValue() {
        return summed_value;
    }

}