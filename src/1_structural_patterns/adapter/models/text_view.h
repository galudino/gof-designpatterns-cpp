#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H

#include "coord.h"
#include <utility>

class text_view {
public:
    text_view() { }

    std::pair<float, float> origin() const {
        return std::make_pair(m_x, m_y);
    }
    
    std::pair<float, float> extent() const {
        return std::make_pair(m_width, m_height);
    }

    virtual bool empty() const {
        return m_width == 0 || m_height == 0;
    }

private:
    float m_x = 1.0;
    float m_y = 2.0;
    float m_width = 3.0;
    float m_height = 4.0;
};

#endif /* TEXT_VIEW_H */
