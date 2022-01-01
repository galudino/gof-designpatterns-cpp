#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H

#include "coord.h"

class text_view {
public:
    text_view() { }

    void origin(float &x, float &y) const {
        x = m_x;
        y = m_y;
    }
    
    void extent(float &width, float &height) const {
        width = m_width;
        height = m_height;
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
