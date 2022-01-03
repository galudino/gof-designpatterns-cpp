#include "maze.h"
#include "maze_builder.h"
#include "maze_factory.h"
#include "maze_game.h"

#include <iostream>

maze *maze_game::create_maze() {
    auto m = make_maze();

    auto r1 = make_room(1);
    auto r2 = make_room(2);
    
    auto d = make_door(r1, r2);

    m->add_room(r1);
    m->add_room(r2);

    r1->set_side(NORTH, make_wall());
    r1->set_side(EAST, d);
    r1->set_side(SOUTH, make_wall());
    r1->set_side(WEST, make_wall());

    r2->set_side(NORTH, make_wall());
    r2->set_side(EAST, make_wall());
    r2->set_side(SOUTH, make_wall());
    r2->set_side(WEST, d);

    return m;
}

maze *maze_game::create_maze(maze_factory &factory) {
    auto m = factory.make_maze();
    
    auto r1 = factory.make_room(1);
    auto r2 = factory.make_room(2);
    
    auto d = factory.make_door(r1, r2);

    m->add_room(r1);
    m->add_room(r2);

    r1->set_side(NORTH, factory.make_wall());
    r1->set_side(EAST, d);
    r1->set_side(SOUTH, factory.make_wall());
    r1->set_side(WEST, factory.make_wall());

    r2->set_side(NORTH, factory.make_wall());
    r2->set_side(EAST, factory.make_wall());
    r2->set_side(SOUTH, factory.make_wall());
    r2->set_side(WEST, d);

    return m;
}

maze *maze_game::create_maze(maze_builder &builder) {
    builder.build_maze();

    builder.build_room(1);
    builder.build_room(2);
    builder.build_door(1, 2);

    return builder.maze();
}

maze *maze_game::create_complex_maze(maze_builder &builder) {
    builder.build_room(1);
    // ...
    builder.build_room(1001);

    return builder.maze();
}
