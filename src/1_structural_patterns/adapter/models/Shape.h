#ifndef SHAPE_H
#define SHAPE_H

class Point;
class Manipulator;

class Shape {
public:
    Shape() = default;
    virtual void BoundingBox(Point &bottomLeft, Point &topRight) const {}

    virtual Manipulator *CreateManipulator() const { return nullptr; }
};

#endif /* SHAPE_H */
