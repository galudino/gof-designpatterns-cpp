/*!
    \file       source.cpp
    \brief      Source file

    \author
    \date
 */

#include "header.hpp"
#include <iostream>

Maze *MazeGame::CreateMaze(MazeBuilder &builder) {
    builder.BuildMaze();
    builder.BuildRoom(1);
    builder.BuildRoom(2);
    builder.BuildDoor(1, 2);

    return builder.GetMaze();
}

Maze *MazeGame::CreateComplexMaze(MazeBuilder &builder) {
    builder.BuildRoom(1);
    // ...
    builder.BuildRoom(1001);
    return builder.GetMaze();
}

void StandardMazeBuilder::BuildRoom(int n) {
    if (!_currentMaze->RoomNo(n)) {
        Room *room = new Room(n);
        _currentMaze->AddRoom(room);
        room->SetSide(North, new Wall);
        room->SetSide(South, new Wall);
        room->SetSide(East, new Wall);
        room->SetSide(West, new Wall);
    }
}

void StandardMazeBuilder::BuildDoor(int n1, int n2) {
    Room *r1 = _currentMaze->RoomNo(n1);
    Room *r2 = _currentMaze->RoomNo(n2);
    Door *d = new Door(r1, r2);
    r1->SetSide(CommonWall(r1, r2), d);
    r2->SetSide(CommonWall(r2, r1), d);
}

Direction StandardMazeBuilder::CommonWall(Room *r0, Room *r1) {
    // TODO implementation
    return Direction::North;
}

void CountingMazeBuilder::BuildMaze() {

}

void CountingMazeBuilder::AddWall(int n, Direction dir) {

}
