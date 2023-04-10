//
// Created by to_matih on 10/04/23.
//

#include "Player.h"
void Player::draw() {
    DrawCircleV(position,radius,YELLOW);
}

void Player::update() {
    // update position
    position.y += velocity * GetFrameTime();

    // add gravity
    velocity += 1000 * GetFrameTime();

    // ground collision
    if (position.y >= Game::screenHeight - radius) {
        position.y = Game::screenHeight - radius;
        velocity = 0;
    }

    // player action
    if (IsKeyPressed(KEY_SPACE)) {
        velocity = -750;
    }
}
