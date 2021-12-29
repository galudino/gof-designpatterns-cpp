#ifndef COUNTING_MAZE_BUILDER_H
#define COUNTING_MAZE_BUILDER_H

#include "maze_builder.h"
#include "maze_parts.h"

class counting_maze_builder : public maze_builder {
public:
    counting_maze_builder();

    virtual void build_maze();
    virtual void build_room(int n);
    virtual void build_door(int n1, int n2);
    virtual void add_wall(int, direction);

    void get_counts(int &rooms, int &doors) const;

private:
    int m_doors;
    int m_rooms;
};

#endif /* COUNTING_MAZE_BUILDER_H */
