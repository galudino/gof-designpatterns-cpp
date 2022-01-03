#include "bombed_maze_factory.h"
#include "bombed_wall.h"
#include "room.h"
#include "room_with_a_bomb.h"
#include "wall.h"

wall *bombed_maze_factory::make_wall() const {
    return new bombed_wall;
}

room *bombed_maze_factory::make_room(int n) const {
    return new room_with_a_bomb(n);
}
