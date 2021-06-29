#ifndef BOMBED_MAZE_GAME_HPP
#define BOMBED_MAZE_GAME_HPP

class BombedMazeGame : public MazeGame {
public:
    BombedMazeGame();
    virtual Wall *MakeWall() const { return new BombedWall; }
    virtual Room *MakeRoom(int n) const { return new RoomWithABomb(n); }
};


#endif
