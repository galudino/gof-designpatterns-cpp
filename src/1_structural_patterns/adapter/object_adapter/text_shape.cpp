#include "text_shape.h"

#include "manipulator.h"
#include "coord.h"
#include "point.h"
#include "text_view.h"
#include "text_manipulator.h"

text_shape::text_shape(text_view *t) { m_text = t; }

void text_shape::bounding_box(point &bottomLeft, point &topRight) const {
    float bottom, left, width, height;

    m_text->origin(bottom, left);
    m_text->extent(width, height);

    bottomLeft = point(bottom, left);
    topRight = point(bottom + height, left + width);
}

bool text_shape::empty() const { return m_text->empty(); }

manipulator *text_shape::create_manipulator() const {
    return new text_manipulator(this);
}
