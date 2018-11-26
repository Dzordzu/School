//
// Created by dzordzu on 26.11.18.
//

#ifndef SCHOOL_FITNESS_H
#define SCHOOL_FITNESS_H

#include <exception>
#include <typeinfo>
#include <string>

class Fitness;

class FitnessException : std::exception {
    std::string message;
public:
    FitnessException(Fitness *type) {}
    const char* what() const noexcept {}
};


class Fitness {
public:
    virtual bool operator==(Fitness &f);
    virtual bool operator<(Fitness &f);
    virtual bool operator<=(Fitness &f);
    virtual bool operator>(Fitness &f);
    virtual bool operator>=(Fitness &f);
};


#endif //SCHOOL_FITNESS_H
