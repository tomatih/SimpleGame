//
// Created by to_matih on 10/04/23.
//

#include "ObstacleManager.h"

#include "stdexcept"

void ObstacleManager::draw() {
    // draw the obstacles
    for (auto obstacle: inUse) {
        // move back if out of bounds
        obstacle->draw();
    }
}

void ObstacleManager::update() {
    // remove old obstacles from active pool
    if(inUse.size() > 0 && inUse.front()->position.x < -inUse.front()->width){
        toUse.push_back(inUse.front());
        inUse.pop_front();
    }
    // spawn new obstacles
    if(GetTime() >= nextSpawn){
        nextSpawn += spawnRate; // advance spawn window
        // memory safety
        if(toUse.size()==0) {
            throw std::runtime_error("Not enough obstacles in the pool");
        }
        inUse.push_back(toUse.back()); // add new obstacle to in use
        inUse.back()->reset(); // reset the obstacle
        toUse.pop_back(); // remove from toUse list
    }
    // update obstacles
    for (auto obstacle: inUse) {
        obstacle->update();
    }
}

ObstacleManager::ObstacleManager() {
    // spawn the obstacle pool
    for (int i = 0; i < 5; ++i) {
        obstacles.emplace_back();
    }
    // mark obstacles to use
    for (auto& obstacle: obstacles) {
        toUse.push_back(&obstacle);
    }
    nextSpawn = 0;
}
