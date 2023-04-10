//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_BACKGROUND_H
#define MODERNCPP_BACKGROUND_H


#include "../GameObject/GameObject.h"

// simple background object to act as game backdrop
class Background : public GameObject {
public:
    void update() override;
    void draw() override;
    ~Background() override= default;
};


#endif //MODERNCPP_BACKGROUND_H
