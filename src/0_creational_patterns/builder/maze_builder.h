#ifndef MAZE_BUILDER_H
#define MAZE_BUILDER_H

class maze;

class maze_builder {
public:
    virtual void build_maze() {}
    virtual void build_room(int) {}
    virtual void build_door(int, int) {}

    virtual maze *get_maze() { return 0; }

protected:
    maze_builder();
};

#endif /* MAZE_BUILDER_H */
