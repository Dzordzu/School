//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_VALIDATOR_H
#define SCHOOL_VALIDATOR_H


#include <string>
#include <istream>
#include <regex>
#include "InputValidationException.h"

struct InputValidator {

    static InputValidator &getInstance();

    int getInt(std::istream &stream);
    uint32_t getUint32(std::istream &stream);
    float getFloat(std::istream &stream);
    std::string getAlphabetical(std::istream &stream);

    std::string getNumericString(std::istream &stream);

    InputValidator(InputValidator const&) = delete;
    void operator=(InputValidator const&) = delete;

private:
    InputValidator() = default;
};


#endif //SCHOOL_VALIDATOR_H
