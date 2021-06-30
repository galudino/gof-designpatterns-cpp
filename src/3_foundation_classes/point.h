#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "coord.h"

class point {
public:
    static const point zero;

    point(float x = 0.0, float y = 0.0);

    float x() const;
    void set_x(float x);

    float y() const;
    void set_y(float y);
    
    point &operator+=(const point &rhs);
    point &operator-=(const point &rhs);
    point &operator*=(const point &rhs);
    point &operator/=(const point &rhs);

    point operator-();

    friend point operator+(const point &lhs, const point &rhs);
    friend point operator-(const point &lhs, const point &rhs);
    friend point operator*(const point &lhs, const point &rhs);
    friend point operator/(const point &lhs, const point &rhs);

    friend bool operator==(const point &lhs, const point &rhs);
    friend bool operator!=(const point &lhs, const point &rhs);

    friend std::ostream &operator<<(std::ostream &os, const point &p);
    friend std::istream &operator>>(std::istream &is, point &p);

private:
    float m_x;
    float m_y;
};

#endif /* POINT_H */
