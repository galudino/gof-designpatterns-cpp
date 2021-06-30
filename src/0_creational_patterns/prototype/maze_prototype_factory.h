#ifndef MAZE_PROTOTYPE_FACTORY_H
#define MAZE_PROTOTYPE_FACTORY_H

#include "maze_factory.h"

class maze;
class wall;
class room;
class door;

class maze_prototype_factory : public maze_factory {
public:
    maze_prototype_factory(maze *, wall *, room *, door *);

    virtual maze *make_maze() const;
    virtual room *make_room(int) const;
    virtual wall *make_wall() const;
    virtual door *make_door(room *, room *) const;

private:
    maze *m_prototype_maze;
    room *m_prototype_room;
    wall *m_prototype_wall;
    door *m_prototype_door;
};

#endif /* MAZE_PROTOTYPE_FACTORY_H */
