#include "maze_game.h"
#include "standard_maze_builder.h"

#include <iostream>

class maze;

int main() {
    maze *maze = nullptr;
    maze_game game;
    standard_maze_builder builder;

    game.create_maze(builder);
    maze = builder.get_maze();

    std::cout << maze << std::endl;
}
