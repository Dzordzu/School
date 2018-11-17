//
// Created by dzordzu on 14.11.18.
//

#ifndef SCHOOL_SETTINGS_H
#define SCHOOL_SETTINGS_H

#include "../../../Macros/GETSET.h"
#include <cstdint>

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {


            /**
             * Stop condition has four possible formats:
             * - Iteration - stops execution after some iterations
             * - Time - stops execution after given period of time (ms)
             * - Optimal fitness value - stops execution when the optimum (constant) is reached
             * - Optimal fitness function - stops execution when the optimum calculated by function is reached
             */
            enum class StopConditionType {
                ITERATION,
                TIME,
                OPTIMAL_FITNESS_VALUE,
                // OPTIMAL_FITNESS_FUNCTION
            };

            /**
             * Handles info about StopConditionType and stop condition value
             */
            class StopCondition {
                GET(StopConditionType, Type);
            public:
                StopCondition(StopConditionType type, uint32_t value);
            };

            /**
             * Handles all settings
             */
            class Settings {
                GETref(StopCondition, _StopCondition);
                GETSET(uint32_t, populationSize);
                GETSET(float, mutationProbability);
                GETSET(float, crossingProbability);

            public:
                Settings();
            };
        }
    }
}

#endif //SCHOOL_SETTINGS_H
