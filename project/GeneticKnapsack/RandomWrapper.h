//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_RANDOMWRAPPER_H
#define SCHOOL_RANDOMWRAPPER_H


#include <random>

class RandomWrapper {
public:
    template <typename T>
    static T getRandom(T min, T max) {
        std::random_device rd;  //Will be used to obtain a seed for the random number engine
        std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
        std::uniform_int_distribution<T> dis(min, max);
        return dis(gen);
    }

    static float getRandomProbability() {
        return (float)getRandom<uint16_t>(0, 256) / (float)256;
    }
};


#endif //SCHOOL_RANDOMWRAPPER_H
