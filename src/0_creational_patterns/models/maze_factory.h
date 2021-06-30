#ifndef MAZE_FACTORY_H
#define MAZE_FACTORY_H

class maze;
class wall;
class room;
class door;

class maze_factory {
public:
    static maze_factory *instance();

    virtual maze *make_maze() const;
    virtual wall *make_wall() const;
    virtual room *make_room(int n) const;
    virtual door *make_door(room *r1, room *r2) const;

#ifdef ABSTRACT_FACTORY
public:
#else
protected:
#endif
    maze_factory(); // constructor is public for Abstract Factory, protected for
                   // Singleton

private:
    static maze_factory *m_instance;
};

#endif /* MAZE_FACTORY_H */
