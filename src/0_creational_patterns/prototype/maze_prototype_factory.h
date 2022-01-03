#ifndef MAZE_PROTOTYPE_FACTORY_H
#define MAZE_PROTOTYPE_FACTORY_H

#include "maze.h"
#include "wall.h"
#include "maze_factory.h"

class maze;
class wall;
class room;
class door;

class maze_prototype_factory : public maze_factory {
public:
    maze_prototype_factory(maze *m, wall *w, room *r, door *d) :
        m_prototype_maze(m), m_prototype_room(r), m_prototype_wall(w), m_prototype_door(d) { }

    maze *make_maze() const override { return m_prototype_maze->clone(); }
    room *make_room(int n) const override { return m_prototype_room->clone(); }
    wall *make_wall() const override { return m_prototype_wall->clone(); }

    door *make_door(room *r1, room *r2) const override;

private:
    maze *m_prototype_maze = nullptr;
    room *m_prototype_room = nullptr;
    wall *m_prototype_wall = nullptr;
    door *m_prototype_door = nullptr;
};

#endif /* MAZE_PROTOTYPE_FACTORY_H */
