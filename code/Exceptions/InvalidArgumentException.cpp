//
// Created by Alin on 8/18/2022.
//

#include "InvalidArgumentException.h"

InvalidArgumentException::InvalidArgumentException(const std::string &arg) : runtime_error(arg) {}
