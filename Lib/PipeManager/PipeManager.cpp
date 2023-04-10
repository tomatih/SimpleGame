//
// Created by to_matih on 10/04/23.
//

#include "PipeManager.h"

void PipeManager::draw() {
    // draw rhe pipes
    for (auto& pipe: pipes) {
        // move back if out of bounds
        pipe.draw();
    }
}

void PipeManager::update() {
    // for all pipes
    for (auto& pipe: pipes) {
        // move back if out of bounds
        if(pipe.position.x < -pipe.width){
            pipe.reset();
        }
        // move pipe
        pipe.update();
    }
}

PipeManager::PipeManager() {
    // spawn the pipe pool
    for (int i = 0; i < 2; ++i) {
        pipes.emplace_back();
        pipes.back().position.x += i*spacing;
    }
}
