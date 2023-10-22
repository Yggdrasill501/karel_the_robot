//
// Created by Filip Žitný on 22/10/2023.
//

#ifndef KAREL_THE_ROBOT_KAREL_H
#define KAREL_THE_ROBOT_KAREL_H

#include "../world/world.h"
#include <iostream>

class Karel{
private:
    int x, y;
    int orientation;
    int beeWpersInBag;
    World& World;

public:
    Karel(World& w);
    void move();
    void trunleft();
    void pickBeeper();
    void putBeeper();
};

#endif //KAREL_THE_ROBOT_KAREL_H
