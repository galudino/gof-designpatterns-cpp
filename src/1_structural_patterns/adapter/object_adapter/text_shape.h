#ifndef TEXTSHAPE_H
#define TEXTSHAPE_H

#include "manipulator.h"
#include "point.h"
#include "shape.h"
#include "text_view.h"

class text_shape : public shape {
public:
    text_shape(text_view *);

    virtual void bounding_box(point &bottom_left, point &top_right) const;
    virtual bool empty() const;
    virtual manipulator *create_manipulator() const;

private:
    text_view *m_text;
};

#endif /* TEXTSHAPE_H */
