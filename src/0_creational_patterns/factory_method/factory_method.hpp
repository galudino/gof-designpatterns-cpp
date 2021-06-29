/*!
    \file       factory_method.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef FACTORY_METHOD_HPP
#define FACTORY_METHOD_HPP

#include "maze_types.hpp"

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

#endif /* FACTORY_METHOD_HPP */
