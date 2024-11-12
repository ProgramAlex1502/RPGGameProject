#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
protected:
    std::string m_name;
    int m_pv;
    int m_force;
    int m_mana;
    int m_intel;
    int m_damage;

public:
    Entity(std::string name, int pv, int force, int mana, int intel);
    virtual ~Entity();
    void printInfo();

    int getPV() const;
    void setPV(int pv);

    virtual void attack(Entity &enemy);
    virtual void attribInfos();
};

#endif //ENTITY_H
