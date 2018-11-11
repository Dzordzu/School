//
// Created by dzordzu on 11.11.18.
//

#include "Item.h"
namespace Backpack {
    ItemFactory& ItemFactory::getInstance() {
        static ItemFactory instance;
        return instance;
    }

    std::vector<Item> ItemFactory::generateRandomItems(uint8_t amount) {

        std::vector<Item> items;
        std::random_device randomDevice;
        std::mt19937 twisterEngine(randomDevice());
        std::uniform_int_distribution<uint32_t> distribution(1, 20);

        for(int i=0; i<amount; i++) {
            items.emplace_back(
                    Item(
                            (uint32_t)distribution(twisterEngine),
                            (uint32_t)distribution(twisterEngine)
                    )
            );
        }

        return items;
    }

    Item::Item(uint32_t value, uint32_t size) : value(value), size(size) {}

    uint32_t Item::getValue() const {
        return value;
    }

    uint32_t Item::getSize() const {
        return size;
    }
};




