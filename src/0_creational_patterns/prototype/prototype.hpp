/*!
    \file       prototype.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef PROTOTYPE_HPP
#define PROTOTYPE_HPP

#include "maze_types.hpp"
#include "abstract_factory.hpp"

class MazePrototypeFactory : public MazeFactory {
public:
    MazePrototypeFactory(Maze *, Wall *, Room *, Door *);
    virtual Maze *MakeMaze() const;
    virtual Room *MakeRoom(int) const;
    virtual Wall *MakeWall() const;
    virtual Door *MakeDoor(Room *, Room *) const;

private:
    Maze *_prototypeMaze;
    Room *_prototypeRoom;
    Wall *_prototypeWall;
    Door *_prototypeDoor;
};

#endif /* PROTOTYPE_HPP */
