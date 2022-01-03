#ifndef STANDARD_MAZE_BUILDER_H
#define STANDARD_MAZE_BUILDER_H

#include "maze_builder.h"
#include "room.h"
#include "maze_parts.h"

class maze;

class standard_maze_builder : public maze_builder {
public:
    ~standard_maze_builder();
    
    void build_maze() override;
    void build_room(int n) override;
    void build_door(int n1, int n2) override;

    class maze *maze() const override {
        return m_current_maze;
    }

private:
    direction common_wall(room *r1, room *r2);
    class maze *m_current_maze = nullptr;
};

#endif /* STANDARD_MAZE_BUILDER_H */
