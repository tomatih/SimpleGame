//
// Created by to_matih on 10/04/23.
//

#include "Background.h"
#include "raylib.h"
#include "../Game/Game.h"

void Background::update() {
    // Do nothing background static for now
}

void Background::draw() {
    // just fill screen with solid colour
    DrawRectangleV({0,0},{Game::screenWidth, Game::screenHeight}, {91, 206, 250,255});
}
