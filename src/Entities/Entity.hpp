//
// Created by alexi on 12/11/2024.
//

#ifndef ENTITY_HPP
#define ENTITY_HPP
#include <string>


class Entity {

protected:
    std::string name;
    int HP;
    int attack;
    int defense;


public:
    Entity(std::string name);
    virtual ~Entity() = default;

    std::string getName();
    void setName(std::string name);

    virtual void setStats();
    int getHP();
    int getAttack();
    int getDefense();

};



#endif //ENTITY_HPP
