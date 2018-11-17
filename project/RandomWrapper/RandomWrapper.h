//
// Created by dzordzu on 14.11.18.
//

#ifndef SCHOOL_RANDOMWRAPPER_H
#define SCHOOL_RANDOMWRAPPER_H

#include <random>

namespace Utils {

    class RandomWrapper {
    public:
        /**
         * Traditional int generator with Mersenne Twister Engine
         * @tparam T
         * @param min
         * @param max
         * @return
         */
        template <typename T>
        static T getRandom(T min, T max) {
            std::random_device rd;  //Will be used to obtain a seed for the random number engine
            std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
            std::uniform_int_distribution<T> dis(min, max);
            return dis(gen);
        }

        /**
         * Traditional float generator with Mersenne Twister Engine
         * @return
         */
        static float getRandomFloat(float min, float max) {
            std::random_device rd;  //Will be used to obtain a seed for the random number engine
            std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
            std::uniform_real_distribution<float> dis(min, max);
            return dis(gen);
        }

        
         static float getRandomPercentage() {
             return getRandomFloat(0, 1);
         }
    };
}



#endif //SCHOOL_RANDOMWRAPPER_H
