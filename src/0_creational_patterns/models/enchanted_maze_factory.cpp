#include "enchanted_maze_factory.h"
#include "spell.h"

#include <iostream>

enchanted_maze_factory::enchanted_maze_factory() {
    std::cout << "EnchantedMazeFactory::EnchantedMazeFactory()" << std::endl;
}

spell *enchanted_maze_factory::cast_spell() const {
    std::cout << "EnchantedMazeFactory::CastSpell()" << std::endl;

    return new spell;
}
