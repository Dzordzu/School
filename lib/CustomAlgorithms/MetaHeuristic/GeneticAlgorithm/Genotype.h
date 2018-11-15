//
// Created by dzordzu on 14.11.18.
//

#ifndef SCHOOL_GENOTYPE_H
#define SCHOOL_GENOTYPE_H

#include <string>
#include <vector>
#include "Instances.h"

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {
            /**
             * Handles and operates on ones and zeros
             */
             template <typename AnalyzedType>
            class Genotype {
                std::vector<bool> _Genotype;
            public:
                Genotype(InstancesManager<AnalyzedType> &manager);
                void mutate(float mutationProbability = 1);
                Genotype crossWith(Genotype &genotype);
                std::vector<bool> getGenotype();
                std::string toString();
            };
        }
    }
}


#endif //SCHOOL_GENOTYPE_H
