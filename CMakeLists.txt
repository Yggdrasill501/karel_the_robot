cmake_minimum_required(VERSION 3.26)
project(karel_the_robot)

set(CMAKE_CXX_STANDARD 23)

add_executable(karel_the_robot main.cpp
        world/world.h
        world/world.cpp
        karel/karel.h
        karel/karel.cpp)
