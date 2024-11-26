//
// Created by alexi on 19/11/2024.
//

#ifndef UI_HPP
#define UI_HPP

#include <iostream>

#include "Utils.hpp"

class UI {
public:
    static void printSelectClass() {
        system("cls");
        std::cout << "=============================\n";
        std::cout << "    SELECTION DE CLASSE      \n";
        std::cout << "=============================\n";
        std::cout << "1. Guerrier - Combattant de mêlée robuste avec une grande défense.\n";
        std::cout << "2. Mage - Lanceur de sorts puissant mais fragile en défense.\n";
        std::cout << "3. Archer - Combattant agile spécialisé dans les attaques à distance.\n";
        std::cout << "=============================\n";
    }

    static void printGameMenu() {
        system("cls");
        std::cout << "=============================\n";
        std::cout << "         XARSAROTH           \n";
        std::cout << "=============================\n";
        std::cout << "1. Combattre\n";
        std::cout << "2. Consulter les statistiques (W.I.P)\n";
        std::cout << "3. Inventaire (W.I.P)\n";
        std::cout << "4. Quitter\n";
        std::cout << "=============================\n";
    }

    static void printCombatMenu() {
        std::cout << "=============================\n";
        std::cout << "         COMBAT              \n";
        std::cout << "=============================\n";

    }

    static void printContinuePhrase() {
        std::cout << "Appuyez sur une touche pour continuer...";
        std::cin.get();
    }

};



#endif //UI_HPP
