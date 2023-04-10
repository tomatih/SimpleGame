//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_OBSTACLE_H
#define MODERNCPP_OBSTACLE_H


#include <raylib.h>
#include "../GameObject/GameObject.h"

// class representing the obstacles
class Obstacle : public GameObject{
public:
    // obstacle properties
    const int width = 80;
    const Color color = {0,100,0,255};
    const int spacing = 160;

    // kinematic model
    const float velocity = -300.0f;
    Vector2 position = {};

    void reset();

    Obstacle();
    // game object compliance
    void draw() override;
     void update() override;
     ~Obstacle() override = default;
};


#endif //MODERNCPP_OBSTACLE_H
