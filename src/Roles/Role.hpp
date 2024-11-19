//
// Created by alexi on 12/11/2024.
//

#ifndef ROLE_HPP
#define ROLE_HPP
#include <string>


class Role {

protected:
    std::string roleName;
    int vitality;
    int strength;
    int intel;
    int dexterity;

public:
    Role(std::string roleName, int vitality, int strength, int intel, int dextirity);

    std::string getRoleName();
    int getVitality();
    int getStrength();
    int getIntel();
    int getDexterity();

};

class Warrior : public Role {

public:
    Warrior() : Role("Warrior", 25, 40, 10, 25) {};
};

#endif //ROLE_HPP
