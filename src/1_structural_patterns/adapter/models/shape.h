#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"
#include <utility>

class point;
class manipulator;

class shape {
public:
    virtual std::pair<point, point> bounding_box() const = 0;
    virtual manipulator *create_manipulator() const = 0;
};

#endif /* SHAPE_H */
