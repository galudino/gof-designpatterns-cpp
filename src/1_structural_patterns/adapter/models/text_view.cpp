#include "text_view.h"

text_view::text_view() {
    m_x = 1.0;
    m_y = 2.0;
    m_width = 3.0;
    m_height = 4.0;
}

void text_view::origin(float &x, float &y) const {
    x = m_x;
    y = m_y;
}

void text_view::extent(float &width, float &height) const {
    width = m_width;
    height = m_height;
}

bool text_view::empty() const { return m_width == 0 || m_height == 0; }
