//
// Created by alexi on 12/11/2024.
//

#include "Player.hpp"

Player::Player() : Entity("Player"), m_role("", 0, 0, 0, 0) {
}

Player::Player(Role &role) : Entity("Player"), m_role(role) {
    setName(getName() + " " + role.getRoleName());
    Player::setStats();
}

void Player::setStats() {
    this->HPMax = 5 * m_role.getVitality() + 2 * m_role.getStrength();
    this->HP = HPMax;
    this->attack = m_role.getStrength() + m_role.getIntel();
    this->defense = m_role.getStrength() + m_role.getDexterity();
    this->manaMax = 5 * m_role.getIntel() + 2 * m_role.getDexterity();
    this->mana = manaMax;
}

int Player::getMana() {
    return this->mana;
}

void Player::setMana(int mana) {
    this->mana = mana;
}

int Player::getManaMax() {
    return this->manaMax;
}