#include "maze_game.h"
#include "bombed_maze_factory.h"
#include "enchanted_maze_factory.h"

int main() {
    maze_game game;

    bombed_maze_factory factory_bombed;
    enchanted_maze_factory factory_enchanted;
    
    game.create_maze(factory_bombed);
    game.create_maze(factory_enchanted);
}
