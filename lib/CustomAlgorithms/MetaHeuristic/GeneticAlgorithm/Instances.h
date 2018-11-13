//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_INSTANCES_H
#define SCHOOL_INSTANCES_H

#include <vector>
#include "FitnessCalculator.h";

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {

            /**
             * Single instance (individual) of the problem
             * @tparam TargetObject
             */
            template<typename TargetObject>
            class Instance {
                TargetObject _Representant;
                FitnessCalculator<TargetObject> _FitnessCalculator;
                float _Fitness;

            public:
                Instance();
            };

            /**
             * Object handling every Instance of the problem
             * @tparam TargetObject
             */
            template<typename TargetObject>
            class Instances {
                std::vector<Instance<TargetObject>> _Instances;
            public:
                void pushRandom();
                std::vector<Instance<TargetObject>> *get();
            };


        }
    }
}


#endif //SCHOOL_INSTANCES_H
