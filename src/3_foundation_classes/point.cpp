#include <iostream>
#include "point.h"

const point point::zero(0, 0);

point::point(float x, float y) : m_x(x), m_y(y) {}

float point::x() const { return m_x; }

float point::y() const { return m_y; }

void point::set_x(float x) { m_x = x; }

void point::set_y(float y) { m_y = y; }

point &point::operator+=(const point &rhs) {
    m_x += rhs.m_x;
    m_y += rhs.m_y;
    return *this;
}

point &point::operator-=(const point &rhs) {
    m_x -= rhs.m_x;
    m_y -= rhs.m_y;
    return *this;
}

point &point::operator*=(const point &rhs) {
    m_x *= rhs.m_x;
    m_y *= rhs.m_y;
    return *this;
}

point &point::operator/=(const point &rhs) {
    m_x /= rhs.m_x;
    m_y /= rhs.m_y;
    return *this;
}

point point::operator-() {
    point ret(*this);
    ret.m_x = -ret.m_x;
    ret.m_y = -ret.m_y;
    return ret;
}

point operator+(const point &lhs, const point &rhs) {
    point ret(lhs);
    ret += rhs;
    return ret;
}

point operator-(const point &lhs, const point &rhs) {
    point ret(lhs);
    ret -= rhs;
    return ret;
}

point operator*(const point &lhs, const point &rhs) {
    point ret(lhs);
    ret *= rhs;
    return ret;
}

point operator/(const point &lhs, const point &rhs) {
    point ret(lhs);
    ret /= rhs;
    return ret;
}

bool operator==(const point &lhs, const point &rhs) {
    return lhs.m_x == rhs.m_x && lhs.m_y == rhs.m_y;
}

bool operator!=(const point &lhs, const point &rhs) { return !(lhs == rhs); }

std::ostream &operator<<(std::ostream &os, const point &p) {
    os << "(" << p.m_x << ", " << p.m_y << ")";
    return os;
}

std::istream &operator>>(std::istream &is, point &p) {
    is >> p.m_x >> p.m_y;
    if (!is) {
        p = point(); // input failed, reset object to default state
    }
    return is;
}
