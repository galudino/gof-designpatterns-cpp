#include <iostream>

#include "maze_game.h"
#include "counting_maze_builder.h"

int main() {
    int rooms = 0;
    int doors = 0;

    maze_game game;
    counting_maze_builder builder;

    game.create_maze(builder);
    builder.get_counts(rooms, doors);

    std::cout << "The maze has " << rooms 
              << " rooms and "  << doors 
              << " doors" << std::endl;
}
