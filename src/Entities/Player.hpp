//
// Created by alexi on 12/11/2024.
//

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Entity.hpp"
#include "Role.hpp"


class Player : public Entity {

protected:
    Role m_role;
    int mana;
    int manaMax;

public:
    Player();
    Player(Role &role);

    void setStats();

    int getMana();
    void setMana(int mana);
    int getManaMax();

};



#endif //PLAYER_HPP
