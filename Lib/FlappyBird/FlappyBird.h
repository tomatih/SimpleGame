//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_FLAPPYBIRD_H
#define MODERNCPP_FLAPPYBIRD_H


#include "../Window/Window.h"
#include "vector"
#include "memory"
#include "../GameObject/GameObject.h"
#include "../Background/Background.h"

// class representing the game itself
class FlappyBird {
private:
    // a constant window object to display the game at
    const Window window = Window(screenWidth, screenHeight, "Flappy Bird");
    // collection of the game objects
    std::vector<std::unique_ptr<GameObject>> gameObjects;
public:
    const static int screenWidth = 600*2;
    const static int screenHeight = 1080;


    FlappyBird();
    void run();
};


#endif //MODERNCPP_FLAPPYBIRD_H
