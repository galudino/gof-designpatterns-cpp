#ifndef ENCHANTED_MAZE_FACTORY_H
#define ENCHANTED_MAZE_FACTORY_H

#include "door_needing_spell.h"
#include "enchanted_room.h"
#include "maze_factory.h"
#include "spell.h"

class door;
class room;
class maze_factory;

class enchanted_maze_factory : public maze_factory {
public:
    enchanted_maze_factory();

    virtual room *make_room(int n) const {
        return new enchanted_room(n, cast_spell());
    }

    virtual door *make_door(room *r1, room *r2) const {
        return new door_needing_spell(r1, r2);
    }

protected:
    spell *cast_spell() const;
};

#endif /* ENCHANTED_MAZE_FACTORY_H */
