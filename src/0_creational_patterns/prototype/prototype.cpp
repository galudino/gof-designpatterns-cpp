/*!
    \file       prototype.cpp
    \brief      Source file

    \author
    \date
 */

#include "prototype.hpp"
#include <iostream>

MazePrototypeFactory::MazePrototypeFactory(Maze *m, Wall *w, Room *r, Door *d) {
    _prototypeMaze = m;
    _prototypeWall = w;
    _prototypeRoom = r;
    _prototypeDoor = d;
}

Wall *MazePrototypeFactory::MakeWall() const { return _prototypeWall->Clone(); }
Door *MazePrototypeFactory::MakeDoor(Room *r1, Room *r2) const {
    Door *door = _prototypeDoor->Clone();
    door->Initialize(r1, r2);
    return door;
}
