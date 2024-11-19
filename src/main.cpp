#include <iostream>

#include "Roles/Archer.hpp"
#include "Roles/Warrior.hpp"
#include "Entities/Player.hpp"
#include "Roles/Mage.hpp"
#include "Utils.hpp"

void printSelectClass();
Player selectClass();

int main() {
    Player player = selectClass();
    std::cout << player.getName() << std::endl;
    std::cout << "=============================\n";
    std::cout << "         XARSAROTH           \n";
    std::cout << "=============================\n";
    std::cout << "1. Explorer\n";
    std::cout << "2. Consulter les statistiques\n";
    std::cout << "3. Inventaire\n";
    std::cout << "4. Quitter\n";
    std::cout << "=============================\n";
    std::cout << "Choisissez une option : ";
    return 0;
}

Player selectClass() {
    int choice;
    Warrior warrior{};
    Archer archer{};
    Mage mage{};

    printSelectClass();
    std::cin >> choice;

    while (choice < 1 || choice > 3) {
        Utils::clearInput();
        std::cout << "Option Invalide\n";
        std::cout << "Choisissez une option :";
        std::cin >> choice;
    }

    switch (choice) {
        case 1:
            return Player(warrior);
        case 2:
            return Player(mage);
        case 3:
            return Player(archer);
    }
}

void printSelectClass() {
    std::cout << "=============================\n";
    std::cout << "    SELECTION DE CLASSE      \n";
    std::cout << "=============================\n";
    std::cout << "1. Guerrier - Combattant de mêlée robuste avec une grande défense.\n";
    std::cout << "2. Mage - Lanceur de sorts puissant mais fragile en défense.\n";
    std::cout << "3. Archer - Combattant agile spécialisé dans les attaques à distance.\n";
    std::cout << "=============================\n";
    std::cout << "Choisissez une option :";
}