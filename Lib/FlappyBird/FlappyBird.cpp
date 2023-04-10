//
// Created by to_matih on 10/04/23.
//

#include "FlappyBird.h"
#include "raylib.h"
#include "../Bird/Bird.h"

void FlappyBird::run() {
    while (!window.shouldClose()){
        // logic update
        for(auto& object: gameObjects){
            object->update();
        }
        // graphics update
        BeginDrawing();
        ClearBackground(RAYWHITE);
        for(auto& object: gameObjects){
            object->draw();
        }
        EndDrawing();
    }
}

FlappyBird::FlappyBird() {
    // add background
    gameObjects.push_back(std::make_unique<Background>());
    // add the player
    gameObjects.push_back(std::make_unique<Bird>());
}
