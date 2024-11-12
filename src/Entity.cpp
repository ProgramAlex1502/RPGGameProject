#include "Entity.hpp"

#include <iostream>
#include <ostream>
#include <string>

Entity::Entity(std::string name, int pv, int force, int mana, int intel) {
    m_name = name;
    m_pv = pv;
    m_force = force;
    m_mana = mana;
    m_intel = intel;
}

Entity::~Entity() {}


void Entity::printInfo() {
    std::cout << "Name: " << m_name << std::endl;
}

void Entity::attribInfos() {

}

void Entity::attack(Entity &enemy) {

}

int Entity::getPV() const {
    return m_pv;
}

void Entity::setPV(int pv) {
    this->m_pv = pv;
}

