//
// Created by dzordzu on 11.11.18.
//

#ifndef SCHOOL_GENETICSALGORITH_H
#define SCHOOL_GENETICSALGORITH_H

#include <vector>
#include "../Backpack/Item.h"
#include "Instance.h"

namespace CustomAlgorithms {
    namespace Genetics {
        class GeneticsAlgorith {
            std::vector<Backpack::Item> workingSet;
            std::vector<Instance> population;

            uint8_t populationSize;
            uint8_t generationLimit;
            uint8_t backpackSize;
            double crossingProbability, mutationProbability;

            void generatePopulation();
        public:

            const std::vector<Backpack::Item> &getWorkingSet() const;
            void setWorkingSet(const std::vector<Backpack::Item> &working_set);

            uint8_t getGenerationLimit() const;
            void setGenerationLimit(uint8_t generationLimit);
            uint8_t getBackpackSize() const;
            void setBackpackSize(uint8_t backpackSize);
            double getCrossingProbability() const;
            void setCrossingProbability(double crossingProbability);
            double getMutationProbability() const;
            void setMutationProbability(double mutationProbability);
            uint8_t getPopulationSize() const;
            void setPopulationSize(uint8_t populationSize);


            void init();
        };
    }
}

#endif //SCHOOL_GENETICSALGORITH_H
