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

// Concrete types, they contain a "Spell"
class Spell;
class EnchantedRoom;
class DoorNeedingSpell;

// Concrete types, they contain a "Bomb"
class Bomb;
class RoomWithABomb;
class BombedWall;

// Game container classess
class MazeGame;
class BombedMazeGame;
class EnchantedMazeGame;

class MapSite {
public:
    virtual void Enter() = 0;
};

class Room : public MapSite {
public:
    Room(int roomNo) : MapSite(), _roomNumber(roomNo) { }
    
    MapSite *GetSide(Direction dir) const {
        return _sides[dir];
    }
    
    void SetSide(Direction dir, MapSite *site) {
        _sides[dir] = site;
    }
    
    int roomNumber() const { return _roomNumber; }
    
    virtual void Enter() { }

private:
    MapSite *_sides[4];
    int _roomNumber;
};

class Wall : public MapSite {
public:
    virtual void Enter() { }
};

class Door : public MapSite {
public:
    Door(Room *r0 = nullptr, Room *r1 = nullptr)
    : MapSite(), _room1(r0), _room2(r1) { }
    
    virtual void Enter() { }
    
    Room *OtherSideFrom(Room *room) {
        if (room == _room1) { return _room2; }
        if (room == _room2) { return _room1; }
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
    
    Room *RoomNo(int roomNo) const {
        return _rooms.at(roomNo);
    }

private:
    std::unordered_map<int, Room *> _rooms;
};

class Spell {};

class EnchantedRoom : public Room {
public:
    EnchantedRoom(int roomNo, Spell *s)
    : Room(roomNo), _spell(s) {
        
    }
        
    Spell *getSpell() const { return _spell; }
private:
    Spell *_spell;
};

class DoorNeedingSpell : public Door {
public:
    DoorNeedingSpell(Room *r0 = 0, Room *r1 = 0)
    : Door(r0, r1) { }
    
    void receiveSpell(Spell *spell) {
        _spell = spell;
    }
private:
    Spell *_spell;
};

class Bomb {};

class RoomWithABomb : public Room {
public:
    RoomWithABomb(int roomNo) : Room(roomNo) { }
};

class BombedWall : public Wall {};

class MazeGame {
public:
    Maze *CreateMaze();
    // factory methods:
    virtual Maze *MakeMaze() const { return new Maze; }
    virtual Room *MakeRoom(int n) const { return new Room(n); }
    virtual Wall *MakeWall() const { return new Wall; }
    virtual Door *MakeDoor(Room *r1, Room *r2) const {
        return new Door(r1, r2);
    }
};

class BombedMazeGame : public MazeGame {
public:
    BombedMazeGame();
    virtual Wall *MakeWall() const { return new BombedWall; }
    virtual Room *MakeRoom(int n) const { return new RoomWithABomb(n); }
};

class EnchantedMazeGame : public MazeGame {
public:
    EnchantedMazeGame();
    virtual Room *MakeRoom(int n) const {
        return new EnchantedRoom(n, CastSpell());
    }
    virtual Door *MakeDoor(Room *r1, Room *r2) const {
        return new DoorNeedingSpell(r1, r2);
    }

protected:
    Spell *CastSpell() const;
};

#endif /* HEADER_HPP */
