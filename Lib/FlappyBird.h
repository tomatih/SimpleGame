//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_FLAPPYBIRD_H
#define MODERNCPP_FLAPPYBIRD_H


#include "Window.h"

class FlappyBird {
private:
    const Window window = Window(1600, 900, "Flappy Bird");

public:
    void run();
};


#endif //MODERNCPP_FLAPPYBIRD_H
