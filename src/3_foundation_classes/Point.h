#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "Coord.h"

class Point {
public:
    static const Point Zero;

    Point(Coord x = 0.0, Coord y = 0.0);

    Coord X() const;
    void X(Coord x);

    Coord Y() const;
    void Y(Coord y);

    friend Point operator+(const Point &lhs, const Point &rhs);
    friend Point operator-(const Point &lhs, const Point &rhs);
    friend Point operator*(const Point &lhs, const Point &rhs);
    friend Point operator/(const Point &lhs, const Point &rhs);

    Point &operator+=(const Point &rhs);
    Point &operator-=(const Point &rhs);
    Point &operator*=(const Point &rhs);
    Point &operator/=(const Point &rhs);

    Point operator-();

    friend bool operator==(const Point &lhs, const Point &rhs);
    friend bool operator!=(const Point &lhs, const Point &rhs);

    friend std::ostream &operator<<(std::ostream &os, const Point &p);
    friend std::istream &operator>>(std::istream &is, Point &p);

private:
    Coord _x;
    Coord _y;
};

#endif /* POINT_H */
