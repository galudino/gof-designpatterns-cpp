#include "text_shape.h"

#include "manipulator.h"
#include "coord.h"
#include "point.h"
#include "text_view.h"
#include "text_manipulator.h"

std::pair<point, point> text_shape::bounding_box() const {
    const auto bottom = m_text->origin().first;
    const auto left = m_text->origin().second;
    
    const auto width = m_text->extent().first;
    const auto height = m_text->extent().second;

    const auto bottom_left = point(bottom, left);
    const auto top_right = point(bottom + height, left + width);
    
    return std::make_pair(bottom_left, top_right);
}
