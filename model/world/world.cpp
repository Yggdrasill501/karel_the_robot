//
// Created by Filip Žitný on 22/10/2023.
//
#include "world.h"

World::World() {
    const int WORLD_SIZE_X = 10;
    const int WORLD_SIZE_Y = 10;
    grid.resize(WORLD_SIZE_Y, std::vector<int>(WORLD_SIZE_X, 0));
}
