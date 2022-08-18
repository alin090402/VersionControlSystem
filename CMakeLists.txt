cmake_minimum_required(VERSION 3.22)
project(VersionControlSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(VersionControlSystem code/main.cpp code/App.cpp code/App.h code/Exceptions/InvalidArgumentException.cpp code/Exceptions/InvalidArgumentException.h)
