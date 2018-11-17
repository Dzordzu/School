//
// Created by dzordzu on 14.11.18.
//

#ifndef SCHOOL_INDIVIDUAL_H
#define SCHOOL_INDIVIDUAL_H

#include "Instances.h"
#include "Genotype.h"
#include <array>

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {

            /**
             * NOTE:
             * Before reading this part you should be familiar with the difference
             * between Instance and Individual
             * @see README.md
             *
             * Simple Interface that enables calculating fitness for every Individual
             *
             *
             * NOTE:
             * It does NOT provide API for Fitness function
             * In order to get info about fitness function (as a stop condition),
             * please refer to GeneticAlgorithm.h (StopConditionType, StopCondition)
             * @see GeneticAlgorithm.h
             */
            template <typename AnalyzedType>
            class IndividualFitnessCalculator {
            public:
                virtual float calculateIndividualFitness(Genotype<AnalyzedType> &genotype) = 0;
            };

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
                IndividualFitnessCalculator<AnalyzedType> * _FitnessCalculator;
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
