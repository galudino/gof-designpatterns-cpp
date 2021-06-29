## Creational Patterns

### Maze building blocks
```cpp
enum direction;
class map_site;

class room;
class wall;
class door;
class maze;

class spell;
class enchanted_room;
class door_needing_spell;

class bomb;
class room_with_a_bomb;
class bombed_wall;
```

### abstract factory
```cpp
class maze_factory;
class enchanted_maze_factory;
class bombed_maze_factory;
```

### builder
```cpp
class maze_builder;
class standard_maze_builder;
class counting_maze_builder;
```

### factory method
```cpp
class maze_game;
class bombed_maze_game;
class enchanted_maze_game;
```

### prototype
```cpp
class maze_prototype_factory;
```

### singleton
```cpp
class maze_factory_as_singleton;
```
