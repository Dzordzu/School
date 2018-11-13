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
                GETSET(float, CrossingProbability);
                GETSET(float, MutationProbability);
                GETSET(uint16_t, Iterations);

                /*
                 * TargetObject Specific
                 */
                StopCondition<TargetObject> _StopCondition;
                FitnessCalculator<TargetObject> _FitnessCalculator;

            public:
                void setStopCondition(StopCondition<TargetObject> StopCondition);
                void setFitnessCalculator(FitnessCalculator<TargetObject> FitnessCalculator);
            };

            Instances<TargetObject> _Instances;
            Result<TargetObject> _Result;
            Settings _Settings;


        public:
            void init();
            Result<TargetObject> getResult();
        };
    }
}




#endif //SCHOOL_GENETICALGORITHM_H
