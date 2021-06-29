/*!
    \file       maze_factory_as_singleton.cpp
    \brief      Source file

    \author
    \date
 */

#include "maze_factory_as_singleton.hpp"
#include <iostream>

MazeFactoryAsSingleton *MazeFactoryAsSingleton::_instance = nullptr;

MazeFactoryAsSingleton *MazeFactoryAsSingleton::Instance() {
    if (_instance == nullptr) {
        _instance = new MazeFactoryAsSingleton;
    }
    return _instance;
}

/*
MazeFactoryAsSingleton *MazeFactoryAsSingleton::Instance() {
    if (_instance == 0) {
        const char *mazeStyle = getenv("MAZESTYLE");
        if (strcmp(mazeStyle, "bombed") == 0) {
            _instance = new BombedMazeFactory;
        } else if (strcmp(mazeStyle, "enchanted") == 0) {
            _instance = new EnchantedMazeFactory;
            // ... other possible subclasses
        } else { // default _instance = new MazeFactory;
        }
    }
    return _instance;
}
*/
