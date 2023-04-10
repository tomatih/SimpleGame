//
// Created by to_matih on 10/04/23.
//

#include "FlappyBird.h"
#include "raylib.h"

void FlappyBird::run() {
    while (!window.shouldClose()){
        PollInputEvents();
    }
}
