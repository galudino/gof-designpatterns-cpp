/*!
    \file       builder.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef BUILDER_HPP
#define BUILDER_HPP

#include "maze_types.hpp"
#include <unordered_map>

class MazeBuilder {
public:
    virtual void BuildMaze() {}
    virtual void BuildRoom(int room) {}
    virtual void BuildDoor(int roomFrom, int roomTo) {}
    virtual Maze *GetMaze() { return nullptr; }

protected:
    MazeBuilder() {}
};

class StandardMazeBuilder : public MazeBuilder {
public:
    StandardMazeBuilder() { }
    virtual void BuildMaze() { _currentMaze = new Maze; }
    virtual void BuildRoom(int n);
    virtual void BuildDoor(int n1, int n2);
    virtual Maze *GetMaze() { return _currentMaze; }

private:
    Direction CommonWall(Room *r0, Room *r1);
    Maze *_currentMaze = nullptr;
};

class CountingMazeBuilder : public MazeBuilder {
public:
    CountingMazeBuilder() : MazeBuilder(), _doors(0), _rooms(0) { }
    virtual void BuildMaze();
    virtual void BuildRoom(int room) { ++_rooms; }
    virtual void BuildDoor(int n1, int n2) { ++_doors; }
    virtual void AddWall(int n, Direction dir);

    void GetCounts(int &rooms, int &doors) const { 
        rooms = _rooms;
        doors = _doors;
    }

private:
    int _doors;
    int _rooms;
};

#endif /* BUILDER_HPP */
