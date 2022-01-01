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

    virtual maze *make_maze() const { return m_prototype_maze->clone(); }
    virtual room *make_room(int n) const { return m_prototype_room->clone(); }
    virtual wall *make_wall() const { return m_prototype_wall->clone(); }

    virtual door *make_door(room *r1, room *r2) const;

private:
    maze *m_prototype_maze;
    room *m_prototype_room;
    wall *m_prototype_wall;
    door *m_prototype_door;
};

#endif /* MAZE_PROTOTYPE_FACTORY_H */
