//
// Created by alexi on 19/11/2024.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include "../Entity.hpp"


class Enemy : public Entity {

public:
    Enemy();
    Enemy(std::string name, int HP, int attack, int defense);
};

class Zombie : public Enemy {

public:
    Zombie() : Enemy("Zombie", 300, 10, 5) {}
};

#endif //ENEMY_HPP
