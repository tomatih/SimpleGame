//
// Created by to_matih on 10/04/23.
//

#include "FlappyBird.h"
#include "raylib.h"

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
