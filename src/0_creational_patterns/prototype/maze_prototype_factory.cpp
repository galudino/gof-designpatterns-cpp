#include "door.h"
#include "maze.h"
#include "maze_prototype_factory.h"
#include "room.h"
#include "wall.h"

maze_prototype_factory::maze_prototype_factory(maze *m, wall *w, room *r, door *d) {
    m_prototype_maze = m;
    m_prototype_wall = w;
    m_prototype_room = r;
    m_prototype_door = d;
}

maze *maze_prototype_factory::make_maze() const { return m_prototype_maze->clone(); }

room *maze_prototype_factory::make_room(int) const {
    return m_prototype_room->clone();
}

wall *maze_prototype_factory::make_wall() const { return m_prototype_wall->clone(); }

door *maze_prototype_factory::make_door(room *r1, room *r2) const {
    door *door = m_prototype_door->clone();
    door->initialize(r1, r2);
    return door;
}
