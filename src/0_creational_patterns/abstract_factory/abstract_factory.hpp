/*!
    \file       abstract_factory.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef HEADER_HP
#define HEADER_HP

#include "maze_types.hpp"
    
class MazeFactory {
public:
    virtual Maze *MakeMaze() const { return new Maze; }
    virtual Wall *MakeWall() const { return new Wall; }
    virtual Room *MakeRoom(int n) const { return new Room(n); }
    virtual Door *MakeDoor(Room *r1,
                           Room *r2) const { return new Door(r1, r2); }
};

class EnchantedMazeFactory : public MazeFactory {
public:
    virtual Room *MakeRoom(int n) const {
        return new EnchantedRoom(n, CastSpell());
    }
    
    virtual Door *MakeDoor(Room *r1, Room *r2) const {
        return new DoorNeedingSpell(r1, r2);
    }

protected:
    Spell *CastSpell() const { return new Spell; }
};
    
class BombedMazeFactory : public MazeFactory {
public:
    Wall *MakeWall() const {
        return new BombedWall;
    }
    
    Room *MakeRoom(int n) const {
        return new RoomWithABomb(n);
    }
};

#endif /* HEADER_HPP */
