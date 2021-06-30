#include "bombed_wall.h"
#include "maze_game.h"
#include "room_with_a_bomb.h"

class room;
class wall;

class bombed_maze_game : public maze_game {
public:
    bombed_maze_game();

    virtual wall *make_wall() const { return new bombed_wall; }
    virtual room *make_room(int n) const { return new room_with_a_bomb(n); }
};
