//
// Created by Alin on 8/18/2022.
//

#include <string>
#include <stdexcept>
#include "App.h"
#include "Exceptions/InvalidArgumentException.h"

App& App::getApp(int argc, char **argv) {
    static App app(argc, argv);
    return app;
}




void App::ParseArguments() {

    std::string command{arguments[1]};

    if(command == "init")
    {
        Init();
    }
    else if(command == "commit")
    {
        Commit();
    }
    else
    {
        throw InvalidArgumentException(command + " is not an accepted argument. Use help for a list of commands");
    }


}

App::App(int numberOfArguments_, char **arguments_) {
    if(numberOfArguments_ < 0) throw InvalidArgumentException("number of arguments is invalid");
    if(arguments_ == nullptr) throw InvalidArgumentException("arguments cannot be null");

    numberOfArguments = numberOfArguments_;
    for(int i = 0; i < numberOfArguments_; i++)
        arguments.emplace_back(arguments_[i]);
}

void App::Init() {
    if(numberOfArguments != 2)
        throw InvalidArgumentException("The number of arguments is invalid.");

}

void App::Commit() {

}


