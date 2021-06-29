#ifndef MAZE_BUILDER_HPP
#define MAZE_BUILDER_HPP

class MazeBuilder {
public:
    virtual void BuildMaze() {}
    virtual void BuildRoom(int room) {}
    virtual void BuildDoor(int roomFrom, int roomTo) {}
    virtual Maze *GetMaze() { return nullptr; }

protected:
    MazeBuilder() {}
};

#endif
