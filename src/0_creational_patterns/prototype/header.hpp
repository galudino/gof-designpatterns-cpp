/*!
    \file       header.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef HEADER_HPP
#define HEADER_HPP

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

#endif /* HEADER_HPP */
