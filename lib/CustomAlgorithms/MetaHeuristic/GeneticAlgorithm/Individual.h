//
// Created by dzordzu on 14.11.18.
//

#ifndef SCHOOL_INDIVIDUAL_H
#define SCHOOL_INDIVIDUAL_H

#include "FitnessCalculator.h"
#include "Instances.h"

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {

            /**
             * Individual is a single member of the one generation in
             * Genetic Algorithm
             */
             template <typename AnalyzedType>
            class Individual {
                Genotype _Genotype;
                IndividualFitnessCalculator * _FitnessCalculator;
                float _Fitness;
                bool usable;

                /**
                 * Pointers to the probabilities declared in
                 * the Genetic Algorithm
                 */
                float * _MutationProbability;
                float * _CrossingProbability;

            public:
                /**
                 * Automatically sets
                 */
                Individual();
                Individual(InstancesManager<AnalyzedType> * manager, float &mutationProbability, float &crossingProbability);
                void mutate();
                Individual crossWith();
                bool isUsable();
            };
        }
    }
}


#endif //SCHOOL_INDIVIDUAL_H
