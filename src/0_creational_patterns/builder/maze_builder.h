#ifndef MAZE_BUILDER_H
#define MAZE_BUILDER_H

class maze;

class maze_builder {
public:
    virtual ~maze_builder() { }
    
    virtual void build_maze() { }
    virtual void build_room(int n) { }
    virtual void build_door(int n1, int n2) { }

    virtual class maze *maze() const { return nullptr; }

protected:
    maze_builder() { }
};

#endif /* MAZE_BUILDER_H */
