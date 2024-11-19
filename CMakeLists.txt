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
        src/Roles/Mage.cpp
        src/Roles/Mage.hpp
        src/Utils/Utils.hpp
        src/Utils/UI.hpp
        src/Game/Game.cpp
        src/Game/Game.hpp
        src/Game/Combat.cpp
        src/Game/Combat.hpp
)
