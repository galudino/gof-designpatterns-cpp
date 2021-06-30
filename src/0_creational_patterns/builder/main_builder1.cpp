#include <iostream>
#include "maze_game.h"
#include "standard_maze_builder.h"

using namespace std;

class maze;

int main() {
    maze *maze;
    maze_game game;
    standard_maze_builder builder;

    game.create_maze(builder);
    maze = builder.get_maze();

    cout << maze << endl;
}
