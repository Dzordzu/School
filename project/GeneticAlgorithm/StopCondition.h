//
// Created by dzordzu on 23.11.18.
//

#ifndef SCHOOL_STOPCONDITION_H
#define SCHOOL_STOPCONDITION_H


#include <cstdint>

class StopCondition {

public:
    enum class Type {
        ITERATION,
        TIME,
        FITNESS_FUNCTION,
        GENETIC_OPERATIONS
    };

private:
    StopCondition::Type type;
    uint64_t valueInt;
    Fitness valueFitness;

public:
    StopCondition(Type type, uint64_t value);
    StopCondition(Type type, Fitness valueFitness);
public:
    Type getType();
    bool isFulfilled(Fitness &other);
    bool isFulfilled(uint32_t);
};


#endif //SCHOOL_STOPCONDITION_H
