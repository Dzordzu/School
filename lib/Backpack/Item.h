//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_ITEM_H
#define SCHOOL_ITEM_H

#include <stdint-gcc.h>
#include <vector>
#include <cstdlib>
#include <random>

namespace Backpack {

    class Item {
        uint32_t value;
        uint32_t size;

    public:
        Item(uint32_t value, uint32_t size);
        uint32_t getValue() const;
        uint32_t getSize() const;
    };

    class ItemFactory {
    public:
        static ItemFactory& getInstance();
        std::vector<Item> generateRandomItems(uint8_t amount);


    private:
        ItemFactory() = default;
        ItemFactory(ItemFactory const&)     = delete;
        void operator=(ItemFactory const&)  = delete;
    };

}




#endif //SCHOOL_ITEM_H
