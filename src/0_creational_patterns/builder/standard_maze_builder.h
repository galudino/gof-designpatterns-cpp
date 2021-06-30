#ifndef STANDARD_MAZE_BUILDER_H
#define STANDARD_MAZE_BUILDER_H

#include "maze_builder.h"
#include "room.h"
#include "maze_parts.h"

class maze;

class standard_maze_builder : public maze_builder {
public:
    standard_maze_builder();

    virtual void build_maze();
    virtual void build_room(int);
    virtual void build_door(int, int);

    virtual maze *get_maze();

private:
    direction common_wall(room *, room *);
    maze *m_current_maze;
};

#endif /* STANDARD_MAZE_BUILDER_H */
