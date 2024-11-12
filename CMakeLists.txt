cmake_minimum_required(VERSION 3.29)
project(RPGGameProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(RPGGameProject src/main.cpp
        src/Entity.h
        src/Entity.cpp
        src/Character.h
        src/Character.cpp)
