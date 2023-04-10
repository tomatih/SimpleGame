//
// Created by to_matih on 10/04/23.
//

#include "Background.h"
#include "raylib.h"

void Background::update() {
    // Do nothing background static for now
}

void Background::draw() {
    // just fill screen with solid colour
    DrawRectangleV({0,0},{600,1080}, {91, 206, 250,255});
}
