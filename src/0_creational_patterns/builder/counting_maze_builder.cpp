#include "counting_maze_builder.h"
#include "maze_parts.h"

counting_maze_builder::counting_maze_builder() { m_rooms = m_doors = 0; }

void counting_maze_builder::build_maze() {}

void counting_maze_builder::build_room(int) { m_rooms++; }

void counting_maze_builder::build_door(int, int) { m_doors++; }

void counting_maze_builder::add_wall(int, direction) {}

void counting_maze_builder::get_counts(int &rooms, int &doors) const {
    rooms = m_rooms;
    doors = m_doors;
}
