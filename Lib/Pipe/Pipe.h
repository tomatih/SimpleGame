//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_PIPE_H
#define MODERNCPP_PIPE_H


#include <raylib.h>
#include "../GameObject/GameObject.h"

// class representing the obstacles
class Pipe : public GameObject{
public:
    // pipe properties
    const int width = 80;
    const Color color = {0,100,0,255};
    const int spacing = 160;

    // kinematic model
    const float velocity = -300.0f;
    Vector2 position = {600.0f,1080.0f/2.0f};

    // game object compliance
    void draw() override;
     void update() override;
     ~Pipe() override = default;
};


#endif //MODERNCPP_PIPE_H
