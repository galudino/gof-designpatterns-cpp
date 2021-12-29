#include "text_shape.h"
#include "text_view.h"
#include "manipulator.h"
#include "text_manipulator.h"

void text_shape::bounding_box(point &bottom_left, point &top_right) const {
    auto bottom = 0.0f;
    auto left = 0.0f;
    auto width = 0.0f;
    auto height = 0.0f;

    origin(bottom, left);
    extent(width, height);

    bottom_left = point(bottom, left);
    top_right = point(bottom + height, left + width);
}
