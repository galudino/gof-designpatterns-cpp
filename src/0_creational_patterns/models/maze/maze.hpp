#ifndef MAZE_HPP
#define MAZE_HPP

class Maze {
public:
    Maze();
    void AddRoom(Room *);
    Room *RoomNo(int) const;

private:
    // ...
};

#endif /* MAZE_HPP */
