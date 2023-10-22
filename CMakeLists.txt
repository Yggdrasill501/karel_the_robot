cmake_minimum_required(VERSION 3.26)
project(karel_the_robot)

set(CMAKE_CXX_STANDARD 23)

add_executable(karel_the_robot main.cpp
        model/world/world.h
        model/world/world.cpp
        model/karel/karel.h
        model/karel/karel.cpp
        view/karel_view.h
        controller/karel_controller.h
        controller/karel_controller.cpp)
