//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_OBSTACLEMANAGER_H
#define MODERNCPP_OBSTACLEMANAGER_H


#include <vector>
#include <queue>
#include "../GameObject/GameObject.h"
#include "../Obstacle/Obstacle.h"

class ObstacleManager : public GameObject{
private:
    // obstacle pool
    std::vector<Obstacle> obstacles;

    // pool access
    std::vector<Obstacle*> toUse;
    std::deque<Obstacle*> inUse;

    // spawning conditions
    const float spacing = 400;
    const double spawnRate = 1; //in seconds
    double nextSpawn;

public:
    ObstacleManager();
    // game object compliance
    void update() override;
    void draw() override;
    ~ObstacleManager() override = default;
};


#endif //MODERNCPP_OBSTACLEMANAGER_H
