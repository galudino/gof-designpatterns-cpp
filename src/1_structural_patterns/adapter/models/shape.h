#ifndef SHAPE_H
#define SHAPE_H

class point;
class manipulator;

class shape {
public:
    shape() = default;

    virtual void bounding_box(point &bottom_left, point &top_right) const {}
    virtual manipulator *create_manipulator() const { return nullptr; }
};

#endif /* SHAPE_H */
