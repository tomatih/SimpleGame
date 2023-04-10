//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_GAMEOBJECT_H
#define MODERNCPP_GAMEOBJECT_H


class GameObject {
public:
    virtual void draw() = 0;
    virtual void update() = 0;
};


#endif //MODERNCPP_GAMEOBJECT_H
