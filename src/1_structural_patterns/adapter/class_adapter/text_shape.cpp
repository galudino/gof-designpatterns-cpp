#include "text_shape.h"
#include "text_view.h"
#include "manipulator.h"
#include "text_manipulator.h"

void text_shape::bounding_box(point &bottomLeft, point &topRight) const {
    float bottom, left, width, height;

    origin(bottom, left);
    extent(width, height);

    bottomLeft = point(bottom, left);
    topRight = point(bottom + height, left + width);
}

bool text_shape::empty() const { return text_view::empty(); }

manipulator *text_shape::create_manipulator() const {
    return new text_manipulator(this);
}
