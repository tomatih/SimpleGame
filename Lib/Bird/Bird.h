//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_BIRD_H
#define MODERNCPP_BIRD_H


#include <raylib.h>
#include "../GameObject/GameObject.h"

// class for the player character
class Bird : public GameObject{
public:
    // physical characteristic of the bird
    const float radius = 40.0f;

    // kinematic model of the bird
    Vector2 position= {600.0f/2.0f,1080.0f/2.0f};
    float velocity = 0.0f;

    // game object compliance
    void draw() override;
    void update() override;
    ~Bird() override = default;
};


#endif //MODERNCPP_BIRD_H
