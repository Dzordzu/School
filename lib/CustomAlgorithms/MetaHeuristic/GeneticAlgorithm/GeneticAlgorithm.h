//
// Created by dzordzu on 13.11.18.
//

#ifndef SCHOOL_GENETICALGORITHM_H
#define SCHOOL_GENETICALGORITHM_H

#include "../../../Macros/GETSET.h"
#include "FitnessCalculator.h"
#include <vector>
#include <cstdint>

namespace CustomAlgorithms {
    namespace MetaHeuristics {
        namespace GeneticAlgorithm {


            /**
            * Implementation of the Algorithm
            */
            template<typename TargetObject>
            class GeneticAlgorithm {

                class Settings {
                    /*
                     * Algorithm Specific
                     */
                    GETrefSET(uint16_t , PopulationSize);
                    GETrefSET(Probability, CrossingProbability);
                    GETrefSET(Probability, MutationProbability);
                    GETrefSET(StopCondition, _StopCondition);
                };

                Instances _Instances;
                Result<TargetObject> _Result;
                TargetObject x;
                Executor _Exec;
                Settings _Settings;


            public:
                void init();
                Result<TargetObject> getResult();
            };
        }
    }
}




#endif //SCHOOL_GENETICALGORITHM_H
