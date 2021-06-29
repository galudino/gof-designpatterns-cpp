/*!
    \file       main.cpp
    \brief      Client source file

    \author
    \date
 */

#include "header.hpp"
#include <iostream>

void use_standard_maze_builder();
void use_counting_maze_builder();

/*!
    \param[in]  argc    Command line argument count
    \param[in]  argv    Command line arguments

    \return     0 on success, non-zero on failure
 */
int main(int argc, const char *argv[]) {
    use_standard_maze_builder();
    use_counting_maze_builder();
}

void use_standard_maze_builder() {
    Maze *maze;
    MazeGame game;

    StandardMazeBuilder builder;

    game.CreateMaze(builder);
    maze = builder.GetMaze();
}

void use_counting_maze_builder() {
    int rooms, doors;
    MazeGame game;

    CountingMazeBuilder builder;

    game.CreateMaze(builder);
    builder.GetCounts(rooms, doors);

    std::cout << "The maze has " << rooms << " rooms and " << doors << " doors"
              << std::endl;
}
