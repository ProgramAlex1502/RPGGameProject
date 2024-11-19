#include <iostream>

#include "Roles/Archer.hpp"
#include "Roles/Warrior.hpp"
#include "Entities/Player.hpp"
#include "Roles/Mage.hpp"
#include "Utils/Utils.hpp"
#include "Utils/UI.hpp"
#include "Game/Game.hpp"

Player selectClass();

int main() {
    Player player = selectClass();
    Game game(player);
    game.start();
    return 0;
}

Player selectClass() {
    int choice;
    Warrior warrior{};
    Archer archer{};
    Mage mage{};

    UI::printSelectClass();

    Utils::validateInput(choice, "Choisissez une option :");

    switch (choice) {
        case 1:
            return Player(warrior);
        case 2:
            return Player(mage);
        case 3:
            return Player(archer);
        default:
            return Player();
    }
}