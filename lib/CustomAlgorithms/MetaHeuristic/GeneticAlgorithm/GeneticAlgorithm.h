//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H

#include "../../../Macros/GETSET.h"
#include <vector>

namespace CustomAlgorithms {
    namespace MetaHeuristics {

        /**
         * Implementation of the Algorithm
         */
        template<typename TargetObject>
        class GeneticAlgorithm {

            std::vector<Instance> _Instances;
            Instance _BestInstance;
            SET(CustomAlgorithms::MetaHeuristic::StopCondition, StopCondition);


        public:
            void init();

        };
    }
}




#endif //SCHOOL_GENETICALGORITHM_H
