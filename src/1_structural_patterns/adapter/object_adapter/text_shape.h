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

    virtual void bounding_box(point &bottom_left, point &top_right) const;

    virtual bool empty() const {
        return m_text->empty();
    }

    virtual manipulator *create_manipulator() const {
        return new text_manipulator(this);
    }

private:
    text_view *m_text;
};

#endif /* TEXTSHAPE_H */
