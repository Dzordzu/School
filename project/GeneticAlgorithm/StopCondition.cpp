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
    if(this->type == StopCondition::Type::UNINITIALIZED) throw StopConditionException();
    return this->type;
}

bool StopCondition::isFulfilled(Fitness &other) {
    if(this->type == StopCondition::Type::UNINITIALIZED) throw StopConditionException();
    return this->valueFitness > other;
}

StopCondition::StopCondition() {
    this->type = StopCondition::Type::UNINITIALIZED;
}

bool StopCondition::isFulfilled(uint32_t &other) {
    if(this->type == StopCondition::Type::UNINITIALIZED) throw StopConditionException();
    return this->valueInt > other;
}

const char *StopConditionException::what() const noexcept {
    return "StopCondition is not set";
}
