//
// Created by alexi on 19/11/2024.
//

#include <iostream>
#include "Game.hpp"
#include "../Utils/UI.hpp"
#include "../Utils/Utils.hpp"

Game::Game() {
    running = false;
}

Game::Game(Player player) {
    this->player = player;
    running = false;
}

Game::~Game() {
    running = false;
}


void Game::start() {
    running = true;
    run();
}

void Game::run() {
    std::cout << player.getName() << std::endl;
    while(running) {
        int choice;

        UI::printGameMenu();

        Utils::validateInput(choice, "Choisissez une option :");

        switch(choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                running = false;
                break;
            default:
                break;
        }
    }
}

