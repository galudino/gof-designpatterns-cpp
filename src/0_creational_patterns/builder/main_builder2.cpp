#include <iostream>

#include "maze_game.h"
#include "counting_maze_builder.h"

using namespace std;

int main() {
    int rooms, doors;
    maze_game game;
    counting_maze_builder builder;

    game.create_maze(builder);
    builder.get_counts(rooms, doors);

    cout << "The maze has " << rooms << " rooms and " << doors << " doors"
         << endl;
}
