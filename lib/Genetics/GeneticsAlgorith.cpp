//
// Created by dzordzu on 11.11.18.
//

#include "GeneticsAlgorith.h"
namespace CustomAlgorithms {
    namespace Genetics {
        const std::vector<Backpack::Item> &GeneticsAlgorith::getWorkingSet() const {
            return workingSet;
        }

        void GeneticsAlgorith::setWorkingSet(const std::vector<Backpack::Item> &working_set) {
            GeneticsAlgorith::workingSet = working_set;
        }

        uint8_t GeneticsAlgorith::getPopulationSize() const {
            return populationSize;
        }

        void GeneticsAlgorith::setPopulationSize(uint8_t populationSize) {
            GeneticsAlgorith::populationSize = populationSize;
        }

        uint8_t GeneticsAlgorith::getGenerationLimit() const {
            return generationLimit;
        }

        void GeneticsAlgorith::setGenerationLimit(uint8_t generationLimit) {
            GeneticsAlgorith::generationLimit = generationLimit;
        }

        uint8_t GeneticsAlgorith::getBackpackSize() const {
            return backpackSize;
        }

        void GeneticsAlgorith::setBackpackSize(uint8_t backpackSize) {
            GeneticsAlgorith::backpackSize = backpackSize;
        }

        double GeneticsAlgorith::getCrossingProbability() const {
            return crossingProbability;
        }

        void GeneticsAlgorith::setCrossingProbability(double crossingProbability) {
            GeneticsAlgorith::crossingProbability = crossingProbability;
        }

        double GeneticsAlgorith::getMutationProbability() const {
            return mutationProbability;
        }

        void GeneticsAlgorith::setMutationProbability(double mutationProbability) {
            GeneticsAlgorith::mutationProbability = mutationProbability;
        }

        void GeneticsAlgorith::generatePopulation() {
            for(int i=0; i<this->populationSize; i++) {
                Instance instance;
                instance.setWorkingSet(&this->workingSet);
                instance.setRandomGenotype();
            }
        }

        void GeneticsAlgorith::init() {

            this->generatePopulation();

            for(int i=0; i<this->generationLimit; i++) {

            }
        }


    }
}