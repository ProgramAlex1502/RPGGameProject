#ifndef CHARACTER_H
#define CHARACTER_H

#include "Entity.hpp"

class Character : Entity {
protected:
    int m_exp;
    int m_level;

public:
    Character(int exp, int level);
    void attack(Entity &enemy) override;
};

#endif
