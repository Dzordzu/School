//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_INSTANCES_H
#define SCHOOL_INSTANCES_H

#include <vector>
#include "../../../Macros/GETSET.h"

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
                virtual float calculateUnitFitness(AnalyzedType &target) = 0;
            };

            /**
             * Single element handling pointer to the value of Analyzed type
             * and its fitness
             * @tparam AnalyzedType
             */
            template <typename AnalyzedType>
            class Instance {
                /**
                 * Handles pointer to the actual value
                 */
                GET(AnalyzedType *, _Value);
                GET(float, Fitness);
                bool usable;
            public:
                /**
                 * Simple constructor of the Instance is supported
                 * Then Fitness is set to 0, isUsable is set to false and pointer of the value
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
                 *  - Pointer to the value has been already set (it should be set only once - at the beginning)
                 *  - Object wasn't created with Instance() constructor
                 */
                 void isUsable();
            };

            /**
             * Handles instances. Should contain every instance that is examined
             * by single Genetic Algorithm
             * @tparam AnalyzedType
             */
            template <typename AnalyzedType>
            class InstancesManager {
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
                 * You SHOULD avoid using this method, if you are going to use the default Instance Fitness Calculator.
                 * Otherwise you HAVE TO use this method
                 */
                std::vector<Instance<AnalyzedType>> *getInstances();
            };
        }
    }
}


#endif //SCHOOL_INSTANCES_H
