#include "bombed_maze_game.h"
#include "maze.h"
#include "maze_game.h"

#include <iostream>

int main() {
    auto game = maze_game();
    
    auto m = game.create_maze();
    std::cout << m << std::endl;

    auto bombed_game = bombed_maze_game();
    auto bm = bombed_game.create_maze();
    
    std::cout << bm << std::endl;
}
