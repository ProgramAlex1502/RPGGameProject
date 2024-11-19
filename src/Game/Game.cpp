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
        int choice = 0;

        UI::printGameMenu();

        std::cin >> choice;

        while (choice < 1 || choice > 4) {
            Utils::clearInput();
            std::cout << "Option Invalide\n";
            std::cout << "Choisissez une option :";
            std::cin >> choice;
        }

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

