//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_INSTANCE_H
#define SCHOOL_INSTANCE_H


#include <vector>
#include <cstdint>

class Instance {
    std::vector<bool> genotype;

    void mutate();
    void crossWith(Instance other);

public:
    uint32_t getFitness();

};


#endif //SCHOOL_INSTANCE_H
