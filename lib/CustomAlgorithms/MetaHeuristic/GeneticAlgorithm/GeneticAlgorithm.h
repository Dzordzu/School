//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H

#include "../../../Macros/GETSET.h"
#include <vector>
#include <cstdint>

namespace CustomAlgorithms {
    namespace MetaHeuristics {

        /**
         * Implementation of the Algorithm
         */
        template<typename TargetObject>
        class GeneticAlgorithm {

            class Settings {
                /*
                 * Algorithm Specific
                 */
                GETSET(uint16_t , PopulationSize);
                GETSET(Probability, CrossingProbability);
                GETSET(Probability, MutationProbability);
                GETSET(StopCondition, _StopCondition);

                /*
                 * TargetObject Specific
                 */
                FitnessCalculator<TargetObject> _FitnessCalculator;

            public:
                void setFitnessCalculator(FitnessCalculator<TargetObject> FitnessCalculator);
            };

            Instances<TargetObject> _Instances;
            Result<TargetObject> _Result;
            Runner runner;
            Settings _Settings;


        public:
            void init();
            Result<TargetObject> getResult();
        };
    }
}




#endif //SCHOOL_GENETICALGORITHM_H
