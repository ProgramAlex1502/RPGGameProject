//
// Created by alexi on 19/11/2024.
//

#ifndef GAME_HPP
#define GAME_HPP
#include "../Entities/Player.hpp"


class Game {

private:
    bool running;
    Player player;

public:
    Game();
    Game(Player player);
    ~Game();

    void start();
    void run();

};



#endif //GAME_HPP
