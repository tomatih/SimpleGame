//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_GAMEOBJECT_H
#define MODERNCPP_GAMEOBJECT_H

// Game object interface allowing for creation of drawable updating objects
class GameObject {
public:
    virtual void draw() = 0; // for graphics
    virtual void update() = 0; // for interactivity
    virtual ~GameObject()= default;
};


#endif //MODERNCPP_GAMEOBJECT_H
