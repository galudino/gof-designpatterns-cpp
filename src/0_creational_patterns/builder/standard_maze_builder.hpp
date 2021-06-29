#ifndef STANDARD_MAZE_BUILDER
#define STANDARD_MAZE_BUILDER

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

#endif /* STANDARD_MAZE_BUILDER */
