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

    List(long size = DEFAULT_LIST_CAPACITY)
        : m_base(new Item[DEFAULT_LIST_CAPACITY]), m_size(0),
          m_capacity(DEFAULT_LIST_CAPACITY) {}

    List(const List &l)
        : m_base(new Item[l.m_capacity]), m_size(l.m_size),
          m_capacity(l.m_capacity) {
        std::copy(l.m_base, l.m_base + l.m_size, m_base);
    }

    List(List &&l)
        : m_base(std::exchange(l.m_base, nullptr)), m_size(l.m_size),
          m_capacity(l.m_capacity) {}

    ~List() { delete m_base; }

    List &operator=(const List &l);

    List &operator=(List &&l) {
        m_base = std::exchange(l.m_base, nullptr);
        m_size = l.m_size;
        m_capacity = l.m_capacity;
        return *this;
    }

    bool Empty() const { return m_size == 0; }

    long Count() const { return m_size; }
    long Capacity() const { return m_capacity; }

    Item &Get(long index) const {
        if (index >= m_size) {
            throw std::out_of_range(
                "Parameter index out of range when invoking Item::Get(long)");
        }

        return m_base[index];
    }

    Item &First() const {
        if (Empty()) {
            throw std::length_error(
                "Cannot invoke Item::First() const when List is empty");
        }

        return m_base[0];
    }

    Item &Last() const {
        if (Empty()) {
            throw std::length_error(
                "Cannot invoke Item::Last() const when List is empty");
        }

        return m_base[m_size - 1];
    }

    bool Includes(const Item &item) const;
    void Append(const Item &item);
    void Prepend(const Item &item);

    void Remove(const Item &item);

    void RemoveLast() { --m_size; }

    void RemoveFirst() {
        std::copy(m_base, m_base + m_size, m_base + 1);
        --m_size;
    }

    void RemoveAll() { m_size = 0; }

    Item &Top() const {
        if (Empty()) {
            return std::length_error(
                "Cannot invoke Item::Top() const when List is empty");
        }

        return m_base[m_size - 1];
    }

    void Push(const Item &item) { Append(item); }

    Item &Pop() { RemoveLast(); }

private:
    void Grow();

    Item *m_base;
    size_t m_size;
    size_t m_capacity;
};

template <class Item>
List<Item> &List<Item>::operator=(const List<Item> &l) {
    delete m_base;

    m_base = new Item[l.m_capacity];
    std::copy(l.m_base, l.m_base + l.m_size, m_base);

    m_size = l.m_size;
    m_capacity = l.m_capacity;

    return *this;
}

template <class Item>
bool List<Item>::Includes(const Item &item) const {
    for (auto i = 0; i < m_size; i++) {
        if (m_base[i] == item) {
            return true;
        }
    }

    return false;
}

template <class Item>
void List<Item>::Append(const Item &item) {
    if (m_size == m_capacity) {
        Grow();
    }
    m_base[m_size++] = item;
}

template <class Item>
void List<Item>::Prepend(const Item &item) {
    if (m_size == m_capacity) {
        Grow();
    }
    std::copy(m_base, m_base + m_size, m_base + 1);
    m_base[0] = item;
}

template <class Item>
void List<Item>::Remove(const Item &item) {
    for (auto i = 0; i < m_size; i++) {
        if (m_base[i] == item) {
            std::copy(m_base + i, m_base + m_size, m_base + (i - 1));
        }
    }
}

template <class Item>
void List<Item>::Grow() {
    const auto new_capacity = m_capacity << 1;
    const auto base = new Item[new_capacity];

    std::copy(m_base, m_base + m_size, base);
    delete m_base;

    m_base = base;
    m_capacity = new_capacity;
}

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
    ListIterator(const List<Item> &aList);

    virtual void First() { m_index = 0; }
    virtual void Next() { ++m_index; }
    virtual bool IsDone() const { return m_index == m_list.Count(); }
    virtual Item CurrentItem() const { return m_list.Get(m_index); }

private:
    List<Item> m_list;
    long m_index = 0;
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

    Rect(Coord x = 0.0f, Coord y = 0.0f, Coord w = 0.0f, Coord h = 0.0f)
        : m_origin(x, y), m_extent(w, h) {}

    Rect(const Point &origin, const Point &extent)
        : m_origin(origin), m_extent(extent) {}

    Coord Width() const { return m_extent.X(); }
    void Width(Coord width) { m_extent.X(width); }

    Coord Height() const { return m_extent.Y(); }
    void Height(Coord height) { m_extent.Y(height); }

    Coord Left() const { return m_origin.X(); }
    void Left(Coord left) { m_origin.X(left); }

    Coord Bottom() const { return m_origin.Y(); }
    void Bottom(Coord bottom) { m_origin.Y(bottom); }

    Point &Origin() const { return m_origin; }
    void Origin(const Point &p) { m_origin = p; }

    Point &Extent() const { return m_extent; }
    void Extent(const Point &p) { m_extent = p; }

    void MoveTo(const Point &p) { m_origin = p; }
    void MoveBy(const Point &p) { m_origin += p; }

    bool IsEmpty() const { return m_origin == m_extent; }

    bool Contains(const Point &p) const {
        return ((p.X() >= m_origin.X()) && (p.X() <= m_extent.X())) &&
               ((p.Y() >= m_origin.Y()) && (p.Y() <= m_extent.Y()));
    }

private:
    mutable Point m_origin; // origin point
    mutable Point m_extent; // width and height
};

#endif /* GOF_FOUNDATION_HPP */
