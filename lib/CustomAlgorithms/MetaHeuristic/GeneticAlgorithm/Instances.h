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
                 * Vector of instances. Should contain every instance that is examined
                 * by single Genetic Algorithm
                 */
                std::vector<Instance<AnalyzedType>> _Instances;
                /**
                 * Handles default fitness calculator for its members (instances)
                 */
                InstanceFitnessCalculator<AnalyzedType> _DefaultInstanceFitnessCalculator;
            public:
                /**
                 * Changes default calculator.
                 *
                 * NOTE:
                 * Instance handles pointer to this value,
                 * so changing it either during runtime, or during process of inserting instances
                 * can lead to unexpected results. You SHOULD ALWAYS predefine default Instance Fitness Calculator
                 * before inserting instances in order to keep algorithm consistency and stability
                 * @param calculator
                 */
                void setDefaultInstanceFitnessCalculator(InstanceFitnessCalculator<AnalyzedType> calculator);
                /**
                 * Pushes Instance with a default Instance Fitness Calculator to the manager
                 * @param value
                 */
                void pushBack(AnalyzedType * value);
                /**
                 * Returns reference to the vector of the instances
                 *
                 * NOTE:
                 * You SHOULD avoid using this method, unless you are going to use default Instance Fitness Calculator
                 */
                void getInstances();
            };
        }
    }
}


#endif //SCHOOL_INSTANCES_H
