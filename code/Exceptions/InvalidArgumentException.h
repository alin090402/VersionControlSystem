//
// Created by Alin on 8/18/2022.
//

#ifndef VERSIONCONTROLSYSTEM_INVALIDARGUMENTEXCEPTION_H
#define VERSIONCONTROLSYSTEM_INVALIDARGUMENTEXCEPTION_H


#include <stdexcept>

class InvalidArgumentException: std::runtime_error {
public:
    explicit InvalidArgumentException(const std::string &arg);

};


#endif //VERSIONCONTROLSYSTEM_INVALIDARGUMENTEXCEPTION_H
