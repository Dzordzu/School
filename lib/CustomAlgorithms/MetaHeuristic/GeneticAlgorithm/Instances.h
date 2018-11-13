//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_INSTANCES_H
#define SCHOOL_INSTANCES_H

#include <vector>
#include "../../../Macros/GETSET.h"
#include "FitnessCalculator.h";

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {

            template <typename AnalyzedType>
            class Instance {
                /**
                 * Calculates fitness for the single instance
                 */
                InstanceFitnessCalculator<AnalyzedType> * _Calculator;
                /**
                 * Handles pointer to the actual value
                 */
                GET(AnalyzedType *, _Value);
                GET(float, Fitness);
                bool usable;
            public:
                /**
                 * Simple constructor of the Instance is supported
                 * Them Fitness is set to 0, isUsable is set to false and pointer of the value
                 * is set to the null
                 */
                Instance();
                /**
                 * Regular constructor for this class
                 * @param value
                 * @param calculator
                 */
                Instance(AnalyzedType * value, InstanceFitnessCalculator<AnalyzedType> &calculator);
                /**
                 * Returns true if and only if all of the following are fulfilled:
                 *  - Pointer to the value is already set (it should be set only once - at the beginning)
                 *  - Calculator is set
                 *  - Object wasn't created with Instance() constructor
                 */
                 void isUsable();
            };

            template <typename AnalyzedType>
            class InstancesManager {
                /**
                 * Vector of instances. Should contain 
                 */
                std::vector<Instance<AnalyzedType>> _Instances;
                InstanceFitnessCalculator<AnalyzedType> _DefaultInstanceFitnessCalculator;
            public:
                void setDefaultInstanceFitnessCalculator(InstanceFitnessCalculator<AnalyzedType> calculator);
                void pushBack();
                void getInstances();
            };
        }
    }
}


#endif //SCHOOL_INSTANCES_H
