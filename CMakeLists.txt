cmake_minimum_required(VERSION 3.29)
project(RPGGameProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(RPGGameProject src/main.cpp
        src/Entities/Entity.cpp
        src/Entities/Entity.hpp
        src/Roles/Role.cpp
        src/Roles/Role.hpp
        src/Roles/Archer.cpp
        src/Roles/Archer.hpp
        src/Entities/Player.cpp
        src/Entities/Player.hpp
        src/Roles/Warrior.cpp
        src/Roles/Warrior.hpp
        src/Roles/Mage.cpp
        src/Roles/Mage.hpp
        src/Utils.cpp
        src/Utils.hpp
)
