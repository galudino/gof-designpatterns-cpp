#ifndef TEXTSHAPE_H
#define TEXTSHAPE_H

#include "manipulator.h"
#include "point.h"
#include "shape.h"
#include "text_view.h"
#include "text_manipulator.h"

class text_shape : public shape {
public:
    text_shape(text_view *t) : m_text(t) { }

    std::pair<point, point> bounding_box() const override;

    bool empty() const {
        return m_text->empty();
    }

    manipulator *create_manipulator() const override {
        return new text_manipulator(this);
    }

private:
    text_view *m_text = nullptr;
};

#endif /* TEXTSHAPE_H */
