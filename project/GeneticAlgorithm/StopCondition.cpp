//
// Created by dzordzu on 23.11.18.
//

#include "StopCondition.h"

StopCondition::StopCondition(StopCondition::Type type, uint64_t value) {
    this->type = type;
    this->valueInt = value;
}

StopCondition::StopCondition(StopCondition::Type type, Fitness valueFitness) {
    this->type = type;
    this->valueFitness = valueFitness;
}

StopCondition::Type StopCondition::getType() {
    return this->type;
}

bool StopCondition::isFulfilled(Fitness &other) {
    return this->valueFitness > other;
}

bool StopCondition::isFulfilled(uint32_t &other) {
    return this->valueInt > other;
}
