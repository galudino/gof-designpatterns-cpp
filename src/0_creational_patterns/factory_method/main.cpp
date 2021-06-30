#include <iostream>

#include "bombed_maze_game.h"
#include "maze.h"
#include "maze_game.h"

int main() {
    maze_game game;
    maze *m = game.create_maze();
    std::cout << m << std::endl;

    bombed_maze_game bombed_game;
    maze *bm = bombed_game.create_maze();
    std::cout << bm << std::endl;
}
