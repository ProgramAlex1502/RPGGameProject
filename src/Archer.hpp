#ifndef ARCHER_H
#define ARCHER_H

#include "Entity.hpp"

class Archer final : Entity {
protected:
    int nbArrow;

public:
    Archer();
    void attack(Entity &enemy) override;
    void attribInfos() override;
};



#endif //ARCHER_H
