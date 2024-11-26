//
// Created by alexi on 19/11/2024.
//

#include "Combat.hpp"

#include <iostream>

#include "../Utils/UI.hpp"
#include "../Utils/Utils.hpp"

Combat::Combat() {
    this->inCombat = false;
}

Combat::Combat(Player player, Enemy enemy) {
    this->player = player;
    this->enemy = enemy;
    this->inCombat = enemy.getHP() > 0 || enemy.getHP() > 0;
}

Combat::~Combat() {

}

void Combat::insideCombat() {
    while (inCombat) {
        int choice;
        int def = player.getDefense();
        int atk = player.getAttack() - enemy.getDefense();

        std::cout << "Tour de " << player.getName() << "\n";
        std::cout << "HP : " << player.getHP() << "\n";
        std::cout << "Mana : " << player.getMana() << "\n";
        std::cout << "ATK : " << atk << "\n";
        std::cout << "DEF : " << def << "\n";
        std::cout << "==============================\n";
        std::cout << "HP du " << enemy.getName() << " : " << enemy.getHP() << "\n";
        std::cout << "ATK : " << enemy.getAttack() << "\n";
        std::cout << "DEF : " << enemy.getDefense() << "\n";

        std::cout << "1. Attaquer\n";
        std::cout << "2. Défendre\n";
        std::cout << "3. Fuir\n";

        Utils::validateInput(choice, "Que voulez-vous faire ? : ");

        switch (choice) {
            case 1:
                enemy.setHP(enemy.getHP() - atk);
                this->inCombat = enemy.getHP() > 0 && player.getHP() > 0;
                break;
            case 2:
                def *= 2;
                player.setMana(player.getMana() - 5);
                break;
            case 3:
                inCombat = false;
                break;
            default:
                break;
        }

        int atkEnm = enemy.getAttack() - def;

        std::cout << "Tour de " << enemy.getName() << "\n";
        std::cout << "==============================\n";
        std::cout << "Statistiques du Joueur " << "\n";

        std::cout << "HP : " << player.getHP() << "\n";
        std::cout << "Mana : " << player.getMana() << "\n";
        std::cout << "==============================\n";
        std::cout << "HP du " << enemy.getName() << " : " << enemy.getHP() << "\n";

        player.setHP(player.getHP() - atkEnm);

        UI::printContinuePhrase();

    }
}


