/*!
    \file       main.cpp
    \brief      Client source file

    \author
    \date
 */

#include "prototype.hpp"

/*!
    \param[in]  argc    Command line argument count
    \param[in]  argv    Command line arguments

    \return     0 on success, non-zero on failure
 */
int main(int argc, const char *argv[]) {
    MazeGame game;
    MazePrototypeFactory simpleMazeFactory(new Maze, new Wall, new Room,
                                           new Door);
    Maze *maze = game.CreateMaze(simpleMazeFactory);

    MazePrototypeFactory bombedMazeFactory(new Maze, new BombedWall,
                                           new RoomWithABomb, new Door);

    delete maze;
    return 0;
}
