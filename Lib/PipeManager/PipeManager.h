//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_PIPEMANAGER_H
#define MODERNCPP_PIPEMANAGER_H


#include <vector>
#include <queue>
#include "../GameObject/GameObject.h"
#include "../Pipe/Pipe.h"

class PipeManager : public GameObject{
private:
    // pipe pool
    std::vector<Pipe> pipes;

    // pool access
    std::vector<Pipe*> toUse;
    std::deque<Pipe*> inUse;

    // spawning conditions
    const float spacing = 400;
    const double spawnRate = 1; //in seconds
    double nextSpawn;

public:
    PipeManager();
    // game object compliance
    void update() override;
    void draw() override;
    ~PipeManager() override = default;
};


#endif //MODERNCPP_PIPEMANAGER_H
