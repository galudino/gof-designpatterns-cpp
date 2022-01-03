#ifndef COUNTING_MAZE_BUILDER_H
#define COUNTING_MAZE_BUILDER_H

#include "maze_builder.h"
#include "maze_parts.h"
#include <utility>

class counting_maze_builder : public maze_builder {
public:
    void build_maze() override { }
    void build_room(int n) override { ++m_rooms; }
    void build_door(int n1, int n2) override { ++m_doors; }
    void add_wall(int n, direction d) { }

    std::pair<int, int> counts() const {
        return std::make_pair(m_rooms, m_doors);
    }

private:
    int m_doors = 0;
    int m_rooms = 0;
};

#endif /* COUNTING_MAZE_BUILDER_H */
