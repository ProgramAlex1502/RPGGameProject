//
// Created by alexi on 12/11/2024.
//

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Entity.hpp"
#include "../Roles/Role.hpp"


class Player : public Entity {

protected:
    Role m_role;

public:
    Player();
    Player(Role &role);

    void setStats();

};



#endif //PLAYER_HPP
