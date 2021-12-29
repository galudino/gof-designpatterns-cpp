#include "maze_game.h"

#include "enchanted_room.h"
#include "door_needing_spell.h"
#include "spell.h"

class enchanted_maze_game : public maze_game {
public:
    enchanted_maze_game();

    virtual room *make_room(int n) const {
        return new enchanted_room(n, cast_spell());
    }

    virtual door *make_door(room *r1, room *r2) const {
        return new door_needing_spell(r1, r2);
    }

protected:
    spell *cast_spell() const;
};
