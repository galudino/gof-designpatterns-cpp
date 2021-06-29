/*!
    \file       singleton.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include "maze_types.hpp"
class MazeFactory {
public:
    static MazeFactory *Instance();
    // existing interface goes here
protected:
    MazeFactory();
private:
    static MazeFactory *_instance;
};

#endif /* SINGLETON_HPP */
