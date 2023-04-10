//
// Created by to_matih on 10/04/23.
//

#include "Pipe.h"
#include "../FlappyBird/FlappyBird.h"

void Pipe::draw() {
    // draw top
    DrawRectangle(position.x, 0, width, position.y-spacing/2, color);
    // draw bottom
    DrawRectangle(position.x,position.y+spacing/2, width,FlappyBird::screenHeight-position.y, color);
}

void Pipe::update() {
    // update position
    position.x += velocity * GetFrameTime();
}

void Pipe::reset() {
    position = {
            (float)FlappyBird::screenWidth + width,
             (float)GetRandomValue(10,FlappyBird::screenHeight-10)
    };
}

Pipe::Pipe() {
    reset();
}
