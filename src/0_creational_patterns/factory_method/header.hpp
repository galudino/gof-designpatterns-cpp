/*!
    \file       header.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef HEADER_HPP
#define HEADER_HPP
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
