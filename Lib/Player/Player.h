//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_PLAYER_H
#define MODERNCPP_PLAYER_H


#include <raylib.h>
#include "../GameObject/GameObject.h"
#include "../Game/Game.h"

// class for the player character
class Player : public GameObject{
public:
    // physical characteristic of the player
    const float radius = 40.0f;

    // kinematic model of the player
    Vector2 position= {Game::screenWidth/2.0f,Game::screenHeight/2.0f};
    float velocity = 0.0f;

    // game object compliance
    void draw() override;
    void update() override;
    ~Player() override = default;
};


#endif //MODERNCPP_PLAYER_H
