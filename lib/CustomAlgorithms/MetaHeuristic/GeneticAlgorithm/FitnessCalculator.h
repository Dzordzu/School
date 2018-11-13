//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_FITNESSCALCULATOR_H
#define SCHOOL_FITNESSCALCULATOR_H

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {


            /**
             * Simple Interface that enables calculating fitness
             * It does NOT provide API for Fitness function
             * In order to get info about fitness function (as a stop condition),
             * please refer to StopCondition.h
             * @see StopCondition.h
             */
            class FitnessCalculator {
            public:
                virtual float calculateFitness() = 0;
            };

        }
    }
}
#endif //SCHOOL_FITNESSCALCULATOR_H
