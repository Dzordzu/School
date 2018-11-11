#include <iostream>
#include "lib/Backpack/Item.h"
#include "lib/Backpack/Backpack.h"
#include "lib/Genetics/GeneticsAlgorith.h"

int main() {

    Backpack::Backpack backpack = Backpack::Backpack(5);

    CustomAlgorithms::Genetics::GeneticsAlgorith algo;

    std::vector<Backpack::Item> items {
        Backpack::Item(5, 4),
        Backpack::Item(1, 1),
        Backpack::Item(4, 3),
        Backpack::Item(3, 2)
    };

    /* Try random:
     * std::vector<Backpack::Item> items = Backpack::ItemFactory::getInstance().generateRandomItems(10);
     */

    for(int i=0; i<items.size(); i++) {
        std::cout<<"Item " + std::to_string(i) + ": Size(" << items[i].getSize() <<"), Value(" <<items[i].getValue() << ")" <<std::endl;
    }

    algo.setWorkingSet(items);
    algo.setBackpackSize(5);
    algo.setPopulationSize(4);
    algo.setCrossingProbability(0.25);
    algo.setMutationProbability(0.1);
    algo.setGenerationLimit(10);





//    std::cout << backpack.getItem(2).getSize() << std::endl;
    return 0;
}