//
// Created by alexi on 19/11/2024.
//

#include <iostream>
#include "UI.hpp"

void UI::printSelectClass() {
    std::cout << "=============================\n";
    std::cout << "    SELECTION DE CLASSE      \n";
    std::cout << "=============================\n";
    std::cout << "1. Guerrier - Combattant de mêlée robuste avec une grande défense.\n";
    std::cout << "2. Mage - Lanceur de sorts puissant mais fragile en défense.\n";
    std::cout << "3. Archer - Combattant agile spécialisé dans les attaques à distance.\n";
    std::cout << "=============================\n";
}


void UI::printGameMenu() {
    std::cout << "=============================\n";
    std::cout << "         XARSAROTH           \n";
    std::cout << "=============================\n";
    std::cout << "1. Explorer\n";
    std::cout << "2. Consulter les statistiques\n";
    std::cout << "3. Inventaire\n";
    std::cout << "4. Quitter\n";
    std::cout << "=============================\n";
}
