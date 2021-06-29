/*!
    \file       source.cpp
    \brief      Source file

    \author
    \date
 */

#include "header.hpp"
#include <iostream>

MazeFactory *MazeFactory::_instance = nullptr;

MazeFactory *MazeFactory::Instance() {
    if (_instance == nullptr) {
        _instance = new MazeFactory;
    }
    return _instance;
}

/*
MazeFactory *MazeFactory::Instance() {
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
