#include "enchanted_maze_factory.h"
#include "spell.h"

#include <iostream>

enchanted_maze_factory::enchanted_maze_factory() {
    std::cout << "enchanted_maze_factory::enchanted_maze_factory()" << std::endl;
}

spell *enchanted_maze_factory::cast_spell() const {
    std::cout << "enchanted_maze_factory::cast_spell()" << std::endl;
    return new spell;
}
