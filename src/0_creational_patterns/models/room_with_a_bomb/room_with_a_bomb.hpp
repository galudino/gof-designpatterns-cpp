#ifndef ROOM_WITH_A_BOMB_HPP
#define ROOM_WITH_A_BOMB_HPP

class RoomWithABomb : public Room {
public:
    RoomWithABomb() = default;
    RoomWithABomb(int roomNo) : Room(roomNo) { }
};

#endif /* ROOM_WITH_A_BOMB_HPP */
