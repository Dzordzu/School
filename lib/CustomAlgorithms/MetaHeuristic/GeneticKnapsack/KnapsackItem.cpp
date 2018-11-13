//
// Created by dzordzu on 12.11.18.
//

#include "KnapsackItem.h"

KnapsackItem::KnapsackItem(uint32_t value, uint32_t size) {
    _Value = value;
    _Size = size;
}

std::string KnapsackItem::getInfo() {
    return "Item: Value(" + std::to_string(_Value) + "), Size(" + std::to_string(_Size) + ")";
}