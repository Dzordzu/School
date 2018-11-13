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

                        /*
                         * TargetObject Specific
                         */
                    GETrefSET(FitnessCalculator, _FitnessCalculator);
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
}




#endif //SCHOOL_GENETICALGORITHM_H
