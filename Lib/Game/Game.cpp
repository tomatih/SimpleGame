//
// Created by to_matih on 10/04/23.
//

#include "Game.h"
#include "raylib.h"
#include "../Player/Player.h"
#include "../ObstacleManager/ObstacleManager.h"

void Game::run() {
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

Game::Game() {
    // add background
    gameObjects.push_back(std::make_unique<Background>());
    // add the player
    gameObjects.push_back(std::make_unique<Player>());
    // add obstacles
    gameObjects.push_back(std::make_unique<ObstacleManager>());

}
