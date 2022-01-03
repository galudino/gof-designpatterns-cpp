#ifndef TEXTSHAPE_H
#define TEXTSHAPE_H

#include "point.h"
#include "shape.h"
#include "text_view.h"
#include "text_manipulator.h"

class manipulator;

class text_shape : public shape, private text_view {
public:
    std::pair<point, point> bounding_box() const override;
    
    bool empty() const override {
        return text_view::empty();
    }

    manipulator *create_manipulator() const override {
        return new text_manipulator(this);
    }
};

#endif /* TEXTSHAPE_H */
