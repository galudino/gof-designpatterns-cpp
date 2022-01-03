#include "maze_game.h"
#include "counting_maze_builder.h"

#include <iostream>

int main() {
    auto game = maze_game();
    auto builder = counting_maze_builder();

    game.create_maze(builder);
    
    auto counts = builder.counts();

    std::cout << "The maze has " << counts.first
              << " rooms and "  << counts.second
              << " doors" << std::endl;
}
