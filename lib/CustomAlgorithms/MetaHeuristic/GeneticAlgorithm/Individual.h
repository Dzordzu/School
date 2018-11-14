//
// Created by dzordzu on 14.11.18.
//

#ifndef SCHOOL_INDIVIDUAL_H
#define SCHOOL_INDIVIDUAL_H

#include "FitnessCalculator.h"
#include "Instances.h"
#include "Genotype.h"
#include <array>

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {

            /**
             * Individual is a single member of the one generation in
             * Genetic Algorithm
             */
             template <typename AnalyzedType>
            class Individual {
                Genotype<AnalyzedType> _Genotype;
                /**
                 * Calculates Fitness from Genotype
                 */
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
                 * Empty constructor creates unusable object
                 */
                Individual();
                /**
                 * Default constructor for Individual
                 * @param manager
                 * @param mutationProbability
                 * @param crossingProbability
                 */
                Individual(InstancesManager<AnalyzedType> * manager, float &mutationProbability, float &crossingProbability);
                /**
                 * Mutates genotype of the Individual
                 */
                void mutate();
                /**
                 * Returns two new Individuals created in the process of crossing
                 * @return IndividualsArray
                 */
                std::array<Individual<AnalyzedType>, 2> crossWith(Individual<AnalyzedType> other);
                /**
                 * Defines if Individual is usable
                 * @return usable
                 */
                bool isUsable();
            };
        }
    }
}


#endif //SCHOOL_INDIVIDUAL_H
