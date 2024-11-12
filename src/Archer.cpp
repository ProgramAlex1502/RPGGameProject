#include "Archer.hpp"

Archer::Archer(): Entity(m_name, m_pv, m_force, m_mana, m_intel) {
}

void Archer::attack(Entity &enemy) {
    if (nbArrow > 0) {
        enemy.setPV(enemy.getPV() - m_damage);
        nbArrow--;
    }
}

void Archer::attribInfos() {
    nbArrow = 2;
}


