#include "Entity.h"

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

void Entity::printInfo() {
    std::cout << "Name: " << m_name << std::endl;
}