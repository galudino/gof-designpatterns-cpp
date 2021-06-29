/*!
    \file       header.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <unordered_map>

enum Direction { North, South, East, West };

class MapSite;

// Base types
class Room;
class Wall;
class Door;
class Maze;

// Game container class
class MazeGame;

// Builders
class MazeBuilder;
class StandardMazeBuilder;
class CountingMazeBuilder;

class MapSite {
public:
    virtual void Enter() = 0;
};

class Room : public MapSite {
public:
    Room(int roomNo) : MapSite(), _roomNumber(roomNo) {}

    MapSite *GetSide(Direction dir) const { return _sides[dir]; }
    void SetSide(Direction dir, MapSite *site) { _sides[dir] = site; }

    int roomNumber() const { return _roomNumber; }

    virtual void Enter() {}

private:
    MapSite *_sides[4];
    int _roomNumber;
};

class Wall : public MapSite {
public:
    virtual void Enter() {}
};

class Door : public MapSite {
public:
    Door(Room *r0 = nullptr, Room *r1 = nullptr)
        : MapSite(), _room1(r0), _room2(r1) {}

    virtual void Enter() {}

    Room *OtherSideFrom(Room *room) {
        if (room == _room1) {
            return _room2;
        }
        if (room == _room2) {
            return _room1;
        }
        return nullptr;
    }

    bool isOpen() const { return _isOpen; }

private:
    Room *_room1;
    Room *_room2;
    bool _isOpen;
};

class Maze {
public:
    void AddRoom(Room *room) {
        _rooms.insert(std::make_pair(room->roomNumber(), room));
    }

    Room *RoomNo(int roomNo) const { return _rooms.at(roomNo); }

private:
    std::unordered_map<int, Room *> _rooms;
};

class MazeGame {
public:
    Maze *CreateMaze();
    Maze *CreateMaze(MazeBuilder &builder);
    Maze *CreateComplexMaze(MazeBuilder &builder);
};

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

#endif /* HEADER_HPP */
