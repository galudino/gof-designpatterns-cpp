#ifndef BOMBED_MAZEFACTORY_H
#define BOMBED_MAZEFACTORY_H

#include "maze_factory.h"

class wall;
class room;

class bombed_maze_factory : public maze_factory {
public:
    wall *make_wall() const override;
    room *make_room(int n) const override;
};

#endif /* BOMBED_MAZEFACTORY_H */
