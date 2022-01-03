#include "maze_game.h"
#include "bombed_maze_factory.h"
#include "enchanted_maze_factory.h"

int main() {
    auto game = maze_game();

    auto factory_bombed = bombed_maze_factory();
    auto factory_enchanted = enchanted_maze_factory();
    
    game.create_maze(factory_bombed);
    game.create_maze(factory_enchanted);
}
