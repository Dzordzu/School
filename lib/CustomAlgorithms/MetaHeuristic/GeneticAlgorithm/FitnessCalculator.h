//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_FITNESSCALCULATOR_H
#define SCHOOL_FITNESSCALCULATOR_H

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {


            /**
             * NOTE:
             * Before reading this part you should be familiar with the difference
             * between Instance and Individual
             * @see README.md
             *
             * Simple Interface that enables calculating fitness for Instances
             *
             *
             * NOTE:
             * It does NOT provide API for Fitness function
             * In order to get info about fitness function (as a stop condition),
             * please refer to GeneticAlgorithm.h (StopConditionType, StopCondition)
             * @see GeneticAlgorithm.h
             */
             template <typename AnalyzedType>
            class InstanceFitnessCalculator {
            public:
                virtual float calculateUnitFitness(AnalyzedType target) = 0;
            };

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
             class IndividualFitnessCalculator {
             public:
                 virtual float calculateIndividualFitness(Individual individual) = 0;
             };

        }
    }
}
#endif //SCHOOL_FITNESSCALCULATOR_H
