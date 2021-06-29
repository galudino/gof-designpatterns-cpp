/*!
    \file       header.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef HEADER_HPP
#define HEADER_HPP

class MazeFactory {
public:
    static MazeFactory *Instance();
    // existing interface goes here
protected:
    MazeFactory();

private:
    static MazeFactory *_instance;
};

#endif /* HEADER_HPP */
