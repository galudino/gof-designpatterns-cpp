#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "point.h"
#include <iostream>

class event;

class graphic {
public:
    virtual ~graphic() {}

    virtual void draw(const point &at) = 0;
    virtual void handle_mouse(event &event) = 0;

    virtual point &extent() = 0;

    virtual void load(std::istream &from) = 0;
    virtual void save(std::ostream &to) = 0;

protected:
    graphic() {}
};

#endif /* GRAPHIC_H */
