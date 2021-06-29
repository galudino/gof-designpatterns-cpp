#ifndef COUNTING_MAZE_BUILDER
#define COUNTING_MAZE_BUILDER

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


#endif
