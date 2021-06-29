/*!
    \file       header.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef HEADER_HPP
#define HEADER_HPP

class Shape {
public:
    Shape();
    virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
    virtual Manipulator *CreateManipulator() const;
};

// class adapter
class TextView {
public:
    TextView();
    void GetOrigin(Coord &x, Coord &y) const;
    void GetExtent(Coord &width, Coord &height) const;
    virtual bool IsEmpty() const;
};

class TextShape : public Shape, private TextView {
public:
    TextShape();
    virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
    virtual bool IsEmpty() const;
    virtual Manipulator *CreateManipulator() const;
};

/* // object adapter
class TextShape : public Shape {
public:
    TextShape(TextView *);
    virtual void BoundingBox(Point &bottomLeft, Point &topRight) const;
    virtual bool IsEmpty() const;
    virtual Manipulator *CreateManipulator() const;

private:
    TextView *_text;
};
*/

#endif /* HEADER_HPP */
