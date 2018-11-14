//
// Created by dzordzu on 14.11.18.
//

#ifndef SCHOOL_INDIVIDUAL_H
#define SCHOOL_INDIVIDUAL_H

#include "FitnessCalculator.h"

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {

            class Individual {
                Genotype _Genotype;
                IndividualFitnessCalculator * _FitnessCalculator;
                float _Fitness;

                /**
                 * Pointers to the probabilities in the algorithm
                 */
                float * _MutationProbability;
                float * _CrossingProbability;

            public:
                void mutate();
                Individual crossWith();
            };
        }
    }
}


#endif //SCHOOL_INDIVIDUAL_H
