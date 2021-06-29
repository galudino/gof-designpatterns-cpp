/*!
    \file       main.cpp
    \brief      Client source file

    \author
    \date
 */

#include "abstract_factory.hpp"

/*!
    \param[in]  argc    Command line argument count
    \param[in]  argv    Command line arguments

    \return     0 on success, non-zero on failure
 */
int main(int argc, const char *argv[]) {
    MazeGame game;
    
    BombedMazeFactory bombedMazeFactory;
    EnchantedMazeFactory enchantedMazeFactory;
    
    Maze *maze = nullptr;
    
    maze = game.CreateMaze(bombedMazeFactory);
    //
    // use maze
    //
    delete maze;
    
    // Change maze types as the game requires.
    
    maze = game.CreateMaze(enchantedMazeFactory);
    //
    // use maze
    //
    delete maze;
    
    return 0;
}
