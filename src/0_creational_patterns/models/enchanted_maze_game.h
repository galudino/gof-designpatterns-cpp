#include "maze_game.h"

#include "enchanted_room.h"
#include "door_needing_spell.h"
#include "spell.h"

class enchanted_maze_game : public maze_game {
public:
    room *make_room(int n) const override {
        return new enchanted_room(n, cast_spell());
    }

    door *make_door(room *r1, room *r2) const override {
        return new door_needing_spell(r1, r2);
    }

protected:
    spell *cast_spell() const;
};
