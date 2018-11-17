//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H

#include "../Macros/GETSET.h"
#include "Instances.h"
#include "Settings.h"
#include <vector>
#include <cstdint>

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {
            /**
             * The core of the module
             */
             template <typename AnalyzedType>
            struct GeneticAlgorithm {
                GeneticAlgorithm();
                Settings settings;
                /**
                 * Handles every instance that is in the domain of the problem
                 */
                InstancesManager<AnalyzedType> instancesManager;
                /**
                 * Runs the main task
                 */
                void init();

            };
        }
    }
}




#endif //SCHOOL_GENETICALGORITHM_H
