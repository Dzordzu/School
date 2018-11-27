//
// Created by dzordzu on 26.11.18.
//

#include "Fitness.h"

FitnessException::FitnessException(Fitness *type) {
    this->message = (std::string)typeid(*type).name() + " should overload <, >, <=, >=, == operators";
}

const char *FitnessException::what() const noexcept {
    return this->message.c_str();
}

bool Fitness::operator==(Fitness &f) { throw FitnessException(this); }

bool Fitness::operator<(Fitness &f) {
    throw FitnessException(this);
}

bool Fitness::operator<=(Fitness &f) {
    throw FitnessException(this);
}

bool Fitness::operator>(Fitness &f) {
    throw FitnessException(this);
}

bool Fitness::operator>=(Fitness &f) {
    throw FitnessException(this);
}
