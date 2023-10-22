//
// Created by Filip Žitný on 22/10/2023.
//

#ifndef KAREL_THE_ROBOT_KAREL_CONTROLLER_H
#define KAREL_THE_ROBOT_KAREL_CONTROLLER_H
#include <iostream>
#include "../model/world/world.h"
#include "../model/karel/karel.h"
#include "../view/karel_view.h"

class KarelController{
private:
    World world;
    Karel karel;
    KarelView view;

public:
    KarelController();
    void run();
};

#endif //KAREL_THE_ROBOT_KAREL_CONTROLLER_H
