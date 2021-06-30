#include "door.h"
#include "maze.h"
#include "maze_parts.h"
#include "standard_maze_builder.h"
#include "wall.h"

class room;

standard_maze_builder::standard_maze_builder() { m_current_maze = 0; }

void standard_maze_builder::build_maze() { m_current_maze = new maze; }

maze *standard_maze_builder::get_maze() { return m_current_maze; }

void standard_maze_builder::build_room(int n) {
    if (!m_current_maze->room_number(n)) {
        room *r = new room(n);
        m_current_maze->add_room(r);

        r->set_side(NORTH, new wall);
        r->set_side(SOUTH, new wall);
        r->set_side(EAST, new wall);
        r->set_side(WEST, new wall);
    }
}

void standard_maze_builder::build_door(int n1, int n2) {
    room *r1 = m_current_maze->room_number(n1);
    room *r2 = m_current_maze->room_number(n2);
    door *d = new door(r1, r2);

    r1->set_side(common_wall(r1, r2), d);
    r2->set_side(common_wall(r2, r1), d);
}

/**
 * Utility operation that determines the direction of the common wall
 * between two rooms.
 */
direction standard_maze_builder::common_wall(room *r1, room *r2) {
    if (r1->room_number() < r2->room_number()) {
        return EAST;
    } else {
        return WEST;
    }
}
