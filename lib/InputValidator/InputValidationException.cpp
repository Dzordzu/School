//
// Created by dzordzu on 12.11.18.
//

#include "InputValidationException.h"

InputValidationException::InputValidationException(std::string message) : message(message) {}

const char *InputValidationException::what() const noexcept {
    return this->message.c_str();
}

