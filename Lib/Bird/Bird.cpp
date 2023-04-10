//
// Created by to_matih on 10/04/23.
//

#include "Bird.h"
#include "../FlappyBird/FlappyBird.h"
void Bird::draw() {
    DrawCircleV(position,radius,YELLOW);
}

void Bird::update() {
    // update position
    position.y += velocity * GetFrameTime();

    // add gravity
    velocity += 1000 * GetFrameTime();

    // ground collision
    if (position.y >= FlappyBird::screenHeight - radius) {
        position.y = FlappyBird::screenHeight - radius;
        velocity = 0;
    }

    // player action
    if (IsKeyPressed(KEY_SPACE)) {
        velocity = -750;
    }
}
