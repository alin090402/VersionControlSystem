//
// Created by Alin on 8/18/2022.
//

#ifndef VERSIONCONTROLSYSTEM_APP_H
#define VERSIONCONTROLSYSTEM_APP_H


#include <vector>

class App {
private:
    App(int numberOfArguments_, char **arguments_);
    int numberOfArguments;
    std::vector<std::string> arguments;
public:
    App(const App&) = delete;
    App& operator=(const App&) = delete;
    static App& getApp(int argc = 0, char **argv = nullptr);
    void ParseArguments();
    void Init();
    void Commit();

};


#endif //VERSIONCONTROLSYSTEM_APP_H
