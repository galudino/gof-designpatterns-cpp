#ifndef TEXTSHAPE_H
#define TEXTSHAPE_H

#include "point.h"
#include "shape.h"
#include "text_view.h"
#include "text_manipulator.h"

class manipulator;

class text_shape : public shape, private text_view {
public:
    text_shape();

    virtual void bounding_box(point &bottom_left, point &top_right) const;

    virtual bool empty() const { return text_view::empty(); }

    virtual manipulator *create_manipulator() const {
        return new text_manipulator(this);
    }
};

#endif /* TEXTSHAPE_H */
