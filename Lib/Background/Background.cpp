//
// Created by to_matih on 10/04/23.
//

#include "Background.h"
#include "raylib.h"
#include "../FlappyBird/FlappyBird.h"

void Background::update() {
    // Do nothing background static for now
}

void Background::draw() {
    // just fill screen with solid colour
    DrawRectangleV({0,0},{FlappyBird::screenWidth, FlappyBird::screenHeight}, {91, 206, 250,255});
}
