//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_GAME_H
#define MODERNCPP_GAME_H


#include "../Window/Window.h"
#include "vector"
#include "memory"
#include "../GameObject/GameObject.h"
#include "../Background/Background.h"

// class representing the game itself
class Game {
private:
    // a constant window object to display the game at
    const Window window = Window(screenWidth, screenHeight, "Sample game");
    // collection of the game objects
    std::vector<std::unique_ptr<GameObject>> gameObjects;
public:
    const static int screenWidth = 600*2;
    const static int screenHeight = 1080;


    Game();
    void run();
};


#endif //MODERNCPP_GAME_H
