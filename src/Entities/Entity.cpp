//
// Created by alexi on 12/11/2024.
//

#include "Entity.hpp"

Entity::Entity() {
    this->name = "";
    this->HP = 0;
    this->attack = 0;
    this->defense = 0;
}

Entity::Entity(std::string name) {
    this->name = name;
    Entity::setStats();
}

Entity::Entity(std::string name, int HPMax, int attack, int defense) {
    this->name = name;
    this->HPMax = HPMax;
    this->HP = HPMax;
    this->attack = attack;
    this->defense = defense;
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

void Entity::setHP(int HP) {
    if (HP > HPMax) {
        HP = HPMax;
    }
    this->HP = HP;
}

int Entity::getHPMax() {
    return this->HPMax;
}

int Entity::getAttack() {
    return this->attack;
}

int Entity::getDefense() {
    return this->defense;
}

