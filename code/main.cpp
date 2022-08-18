#include <iostream>
#include "App.h"

int main(int argc, char** argv) {
    App::getApp(argc, argv).ParseArguments();

    return 0;
}
