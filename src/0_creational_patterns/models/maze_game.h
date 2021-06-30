#ifndef MAZE_GAME_H
#define MAZE_GAME_H

#include "maze.h"
#include "room.h"
#include "wall.h"
#include "door.h"

class maze_factory;
class maze_builder;

class maze_game {
public:
    maze *create_maze();

    maze *create_maze(maze_factory &factory);
    maze *create_maze(maze_builder &builder);
    maze *create_complex_maze(maze_builder &builder);

    // factory methods:

    virtual maze *make_maze() const { return new maze; }
    virtual room *make_room(int n) const { return new room(n); }
    virtual wall *make_wall() const { return new wall; }
    
    virtual door *make_door(room *r1, room *r2) const {
        return new door(r1, r2);
    }
};

#endif /* MAZE_GAME_H */
