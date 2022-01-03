#include "maze_game.h"
#include "standard_maze_builder.h"

#include <iostream>

class maze;

int main() {
    maze *maze = nullptr;
    
    auto game = maze_game();
    auto builder = standard_maze_builder();

    game.create_maze(builder);
    maze = builder.maze();

    std::cout << maze << std::endl;
}
