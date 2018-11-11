//
// Created by dzordzu on 11.11.18.
//

#include "Backpack.h"
namespace Backpack {
    Backpack::Backpack(uint32_t max_size) : max_size(max_size) {}

    bool Backpack::addItem(Item item) {

        if(actual_size + item.getSize()> max_size) {
            summed_value = 0;
            return false;
        }

        actual_size += item.getSize();
        backpack.emplace_back(item);
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