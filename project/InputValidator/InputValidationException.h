//
// Created by dzordzu on 12.11.18.
//

#ifndef SCHOOL_INPUTVALIDATIONEXCEPTION_H
#define SCHOOL_INPUTVALIDATIONEXCEPTION_H


#include <exception>
#include <string>

class InputValidationException : public std::exception {
    const std::string message;
public:
    explicit InputValidationException(std::string message);

    ~InputValidationException() override = default;

    const char* what() const noexcept override;

};


#endif //SCHOOL_INPUTVALIDATIONEXCEPTION_H
