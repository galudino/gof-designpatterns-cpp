#include <iostream>
#include "bombed_wall.h"
#include "door.h"
#include "maze.h"
#include "maze_game.h"
#include "maze_prototype_factory.h"
#include "room_with_a_bomb.h"
#include "wall.h"

int main() {
    maze_game game;

    maze_prototype_factory simple_maze_factory(new maze,
                                               new wall,
                                               new room,
                                               new door);
    
    maze *m = game.create_maze(simple_maze_factory);
    
    std::cout << m << std::endl;

    maze_prototype_factory bombed_maze_factory(new maze,
                                               new bombed_wall,
                                               new room_with_a_bomb,
                                               new door);

    return 0;
}
