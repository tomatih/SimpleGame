//
// Created by to_matih on 10/04/23.
//

#include "PipeManager.h"

#include "stdexcept"

void PipeManager::draw() {
    // draw the pipes
    for (auto pipe: inUse) {
        // move back if out of bounds
        pipe->draw();
    }
}

void PipeManager::update() {
    // remove old pipes from active pool
    if(inUse.size() > 0 && inUse.front()->position.x < -inUse.front()->width){
        toUse.push_back(inUse.front());
        inUse.pop_front();
    }
    // spawn new pipes
    if(GetTime() >= nextSpawn){
        nextSpawn += spawnRate;
        if(toUse.size()==0){
            throw std::runtime_error("Not enough pipes in the pool");
        }
        inUse.push_back(toUse.back());
        inUse.back()->reset();
        toUse.pop_back();
    }
    // update pipes
    for (auto pipe: inUse) {
        pipe->update();
    }
}

PipeManager::PipeManager() {
    // spawn the pipe pool
    for (int i = 0; i < 5; ++i) {
        pipes.emplace_back();
    }
    // mark pipes to use
    for (auto& pipe: pipes) {
        toUse.push_back(&pipe);
    }
    nextSpawn = 0;
}
