#include "text_shape.h"
#include "text_view.h"
#include "manipulator.h"
#include "text_manipulator.h"

std::pair<point, point> text_shape::bounding_box() const {
    const auto bottom = origin().first;
    const auto left = origin().second;
    const auto width = extent().first;
    const auto height = extent().second;

    const auto bottom_left = point(bottom, left);
    const auto top_right = point(bottom + height, left + width);
    
    return std::make_pair(bottom_left, top_right);
}
