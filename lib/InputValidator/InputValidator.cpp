//
// Created by dzordzu on 12.11.18.
//

#include "InputValidator.h"

int InputValidator::getInt(std::istream &stream) {
    int result;
    stream>>result;
    return result;
}

uint32_t InputValidator::getUint32(std::istream &stream) {
    uint32_t result;
    stream>>result;
    return result;
}

float InputValidator::getFloat(std::istream &stream) {
    float result;
    stream>>result;
    return result;
}

std::string InputValidator::getAlphabetical(std::istream &stream) {
    std::string result;
    stream>>result;

    std::regex pattern("^[\\p{L} ]+$");
    std::smatch matcher;

    if(std::regex_search(result, matcher, pattern))
        return result;

    throw InputValidationException("Incorrect type. Input has to be alphabetical (can contain spaces)");
}

InputValidator &InputValidator::getInstance() {
    InputValidator validator;
    return validator;
}

std::string InputValidator::getNumericString(std::istream &stream) {
    std::string result;
    stream>>result;

    std::regex pattern("^\\-?[0-9]+(?:\\.[0-9]+)?$");
    std::smatch matcher;

    if(std::regex_search(result, matcher, pattern))
        return result;

    throw InputValidationException("Incorrect type. Input has to be a numerical value");

}
