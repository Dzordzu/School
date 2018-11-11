#include <iostream>
#include "lib/Backpack/Item.h"
#include "lib/Backpack/Backpack.h"
#include "lib/Genetics/GeneticsAlgorith.h"

int main() {

    Backpack::Backpack backpack = Backpack::Backpack(5);

    CustomAlgorithms::GeneticsAlgorith algo;

    std::vector<Backpack::Item> items {
        Backpack::Item(5, 4),
        Backpack::Item(1, 1),
        Backpack::Item(4, 3),
        Backpack::Item(3, 2)
    };

    algo.setWorkingSet(items);

    /* Try random:
     * std::vector<Backpack::Item> items = Backpack::ItemFactory::getInstance().generateRandomItems(10);
     */

    for(int i=0; i<items.size(); i++) {
        std::cout<<"Item " + std::to_string(i) + ": Size(" << items[i].getSize() <<"), Value(" <<items[i].getValue() << ")" <<std::endl;
    }



//    std::cout << backpack.getItem(2).getSize() << std::endl;
    return 0;
}