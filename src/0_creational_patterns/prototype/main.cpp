#include "bombed_wall.h"
#include "door.h"
#include "maze.h"
#include "maze_game.h"
#include "maze_prototype_factory.h"
#include "room_with_a_bomb.h"
#include "wall.h"

#include <iostream>

int main() {
    auto game = maze_game();

    auto simple_maze_factory = maze_prototype_factory(new maze,
                                                      new wall,
                                                      new room,
                                                      new door);
    
    auto m = game.create_maze(simple_maze_factory);
    
    std::cout << m << std::endl;

    auto bombed_maze_factory = maze_prototype_factory(new maze,
                                                      new bombed_wall,
                                                      new room_with_a_bomb,
                                                      new door);

    return 0;
}
