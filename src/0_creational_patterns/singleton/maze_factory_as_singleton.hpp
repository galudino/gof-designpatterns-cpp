/*!
    \file       maze_factory_as_singleton.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef MAZE_FACTORY_AS_SINGLETON_HPP
#define MAZE_FACTORY_AS_SINGLETON_HPP

#include "maze_factory_as_singleton.hpp"
class MazeFactoryAsSingleton {
public:
    static MazeFactoryAsSingleton *Instance();
    // existing interface goes here
protected:
    MazeFactoryAsSingleton();
private:
    static MazeFactoryAsSingleton *_instance;
};

#endif /* SINGLETON_HPP */
