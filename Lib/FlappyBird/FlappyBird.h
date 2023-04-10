//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_FLAPPYBIRD_H
#define MODERNCPP_FLAPPYBIRD_H


#include "../Window/Window.h"
#include "vector"
#include "memory"
#include "../GameObject/GameObject.h"

class FlappyBird {
private:
    const Window window = Window(1600, 900, "Flappy Bird");
    std::vector<std::unique_ptr<GameObject>> gameObjects = {

    };

public:
    //FlappyBird();
    void run();
};


#endif //MODERNCPP_FLAPPYBIRD_H
