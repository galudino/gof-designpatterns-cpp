#ifndef BOMBED_MAZE_FACTORY_HPP
#define BOMBED_MAZE_FACTORY_HPP

class BombedMazeFactory : public MazeFactory {
public:
    Wall *MakeWall() const {
        return new BombedWall;
    }
    
    Room *MakeRoom(int n) const {
        return new RoomWithABomb(n);
    }
};

#endif /* BOMBED_MAZE_FACTORY_HPP */
