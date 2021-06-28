/*!
    \file       gof_foundation.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef GOF_FOUNDATION_HPP
#define GOF_FOUNDATION_HPP

#include <iostream>

template <class Item>
class List {
public:
    static constexpr auto DEFAULT_LIST_CAPACITY = 4;

    List(long size = DEFAULT_LIST_CAPACITY);
    List(List &);
    ~List();

    List &operator=(const List &);

    long Count() const;
    Item &Get(long index) const;

    Item &First() const;
    Item &Last() const;

    bool Includes(const Item &) const;

    void Append(const Item &);
    void Prepend(const Item &);

    void Remove(const Item &);
    void RemoveLast();
    void RemoveFirst();
    void RemoveAll();

    Item &Top() const;

    void Push(const Item &);
    Item &Pop();
};

template <class Item>
class Iterator {
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual Item CurrentItem() const = 0;

protected:
    Iterator();
};

template <class Item>
class ListIterator : public Iterator<Item> {
public:
    ListIterator(const List<Item> *aList);
    virtual void First();
    virtual void Next();
    virtual bool IsDone() const;
    virtual Item CurrentItem() const;
};

class Point {
public:
    using Coord = float;
    static const Point Zero;

    Point(Coord x = 0.0, Coord y = 0.0) : m_x(x), m_y(y) {}

    Coord X() const { return m_x; }
    void X(Coord x) { m_x = x; }

    Coord Y() const { return m_y; }
    void Y(Coord y) { m_y = y; }

    Point &operator+=(const Point &p) {
        m_x += p.m_x;
        m_y += p.m_y;
        return *this;
    }

    Point &operator-=(const Point &p) {
        m_x -= p.m_x;
        m_y -= p.m_y;
        return *this;
    }

    Point &operator*=(const Point &p) {
        m_x *= p.m_x;
        m_y *= p.m_y;
        return *this;
    }

    Point &operator/=(const Point &p) {
        m_x /= p.m_x;
        m_y /= p.m_y;
        return *this;
    }

    Point operator-() {
        m_x = -m_x;
        m_y = -m_y;
        return *this;
    }

    friend Point operator+(const Point &p0, const Point &p1) {
        return Point(p0.m_x + p1.m_x, p0.m_y + p1.m_y);
    }

    friend Point operator-(const Point &p0, const Point &p1) {
        return Point(p0.m_x - p1.m_x, p0.m_y - p1.m_y);
    }

    friend Point operator*(const Point &p0, const Point &p1) {
        return Point(p0.m_x * p1.m_x, p0.m_y * p1.m_y);
    }

    friend Point operator/(const Point &p0, const Point &p1) {
        return Point(p0.m_x / p1.m_x, p0.m_y / p1.m_y);
    }

    friend bool operator==(const Point &p0, const Point &p1) {
        return p0.m_x == p1.m_x && p0.m_y == p1.m_y;
    }

    friend bool operator!=(const Point &p0, const Point &p1) {
        return !(p0.m_x == p1.m_x && p0.m_y == p1.m_y);
    }

    friend std::ostream &operator<<(std::ostream &os, const Point &p) {
        os << "(" << p.m_x << ", " << p.m_y << ")";
        return os;
    }

    friend std::istream &operator>>(std::istream &is, Point &p) {
        is >> p.m_x;
        is >> p.m_y;
        return is;
    }

private:
    Coord m_x;
    Coord m_y;
};

class Rect {
public:
    using Coord = float;
    static const Rect Zero;

    Rect(Coord x, Coord y, Coord w, Coord h);
    Rect(const Point &origin, const Point &extent);

    Coord Width() const;
    void Width(Coord);

    Coord Height() const;
    void Height(Coord);

    Coord Left() const;
    void Left(Coord);

    Coord Bottom() const;
    void Bottom(Coord);

    Point &Origin() const;
    void Origin(const Point &);

    Point &Extent() const;
    void Extent(const Point &);

    void MoveTo(const Point &);
    void MoveBy(const Point &);

    bool IsEmpty() const;
    bool Contains(const Point &) const;
};

#endif /* GOF_FOUNDATION_HPP */
