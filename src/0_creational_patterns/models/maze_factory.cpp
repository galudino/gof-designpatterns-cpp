#include "maze_factory.h"

#include "bombed_maze_factory.h"
#include "enchanted_maze_factory.h"
#include "maze.h"
#include "wall.h"
#include "room.h"
#include "door.h"

#include <iostream>
#include <cstdlib>
#include <cstring>

maze_factory *maze_factory::m_instance = 0;

maze_factory::maze_factory() {
    std::cout << "MazeFactory::MazeFactory()" << std::endl;
}

maze_factory *maze_factory::instance() {

    if (m_instance == 0) {

        const char *maze_style = getenv("MAZESTYLE");

        if (std::strcmp(maze_style, "bombed") == 0) {
            m_instance = new bombed_maze_factory;

        } else if (std::strcmp(maze_style, "enchanted") == 0) {
            m_instance = new enchanted_maze_factory;

            // ... other possible subclasses

        } else { // default
            m_instance = new maze_factory;
        }
    }
    return m_instance;
}

maze *maze_factory::make_maze() const { return new maze; }

wall *maze_factory::make_wall() const { return new wall; }

room *maze_factory::make_room(int n) const { return new room(n); }

door *maze_factory::make_door(room *r1, room *r2) const {
    return new door(r1, r2);
}
