//
// Created by alexi on 19/11/2024.
//

#ifndef COMBAT_HPP
#define COMBAT_HPP
#include "../Entities/Player.hpp"


class Combat {

private:
    Player player;
    Entity enemy;

public:
    Combat(Player player);
    ~Combat();

};



#endif //COMBAT_HPP
