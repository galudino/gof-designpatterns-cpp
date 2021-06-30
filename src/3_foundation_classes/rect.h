#ifndef RECT_H
#define RECT_H

#include "coord.h"
#include "point.h"

class rect {
public:
    static const rect zero;

    rect(float x, float y, float w, float h);
    rect(const point &origin, const point &extent);

    float width() const;
    void set_width(float);

    float height() const;
    void set_height(float);

    float left() const;
    void set_left(float);

    float bottom() const;
    void set_bottom(float);

    point origin() const;
    void origin(const point &);

    point extent() const;
    void set_extent(const point &);

    void move_to(const point &);
    void move_by(const point &);

    bool empty() const;
    bool contains(const point &) const;

private:
    point m_origin;
    point m_extent;
};

#endif /* RECT_H */
