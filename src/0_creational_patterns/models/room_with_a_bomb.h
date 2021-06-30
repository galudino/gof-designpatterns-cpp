#ifndef ROOM_WITH_A_BOMB_H
#define ROOM_WITH_A_BOMB_H

#include "room.h"

class room_with_a_bomb : public room {
public:
    room_with_a_bomb(int = 0, bool bombed = false);
    room_with_a_bomb(const room_with_a_bomb &);
    bool has_bomb();

private:
    bool m_bomb;
};

#endif /* ROOM_WITH_A_BOMB_H */
