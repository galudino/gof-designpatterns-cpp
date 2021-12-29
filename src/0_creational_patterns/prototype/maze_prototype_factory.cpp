#include "door.h"
#include "maze_prototype_factory.h"

door *maze_prototype_factory::make_door(room *r1, room *r2) const {
    auto door = m_prototype_door->clone();
    door->initialize(r1, r2);
    return door;
}
