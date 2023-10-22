//
// Created by Filip Žitný on 22/10/2023.
//

#ifndef KAREL_THE_ROBOT_KAREL_VIEW_H
#define KAREL_THE_ROBOT_KAREL_VIEW_H

#include <iostream>
#include "../model/world/world.h"
#include "../model/karel/karel.h"

class KarelView{
public:
    KarelView();
    void dispplay(const World& world, const Karel& karel);
};

#endif //KAREL_THE_ROBOT_KAREL_VIEW_H
