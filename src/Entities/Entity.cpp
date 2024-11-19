//
// Created by alexi on 12/11/2024.
//

#include "Entity.hpp"

Entity::Entity(std::string name) {
    this->name = name;
    Entity::setStats();
}

void Entity::setStats() {
    this->HP = 0;
    this->attack = 0;
    this->defense = 0;
}

std::string Entity::getName() {
    return name;
}

void Entity::setName(std::string name) {
    this->name = name;
}

int Entity::getHP() {
    return this->HP;
}

int Entity::getAttack() {
    return this->attack;
}

int Entity::getDefense() {
    return this->defense;
}

