//
// Created by to_matih on 10/04/23.
//

#include "Obstacle.h"
#include "../Game/Game.h"

void Obstacle::draw() {
    // draw top
    DrawRectangle(position.x, 0, width, position.y-spacing/2, color);
    // draw bottom
    DrawRectangle(position.x,position.y+spacing/2, width,Game::screenHeight-position.y, color);
}

void Obstacle::update() {
    // update position
    position.x += velocity * GetFrameTime();
}

void Obstacle::reset() {
    position = {
            (float)Game::screenWidth + width,
             (float)GetRandomValue(10,Game::screenHeight-10)
    };
}

Obstacle::Obstacle() {
    reset();
}
