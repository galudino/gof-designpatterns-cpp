#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H

#include "coord.h"

class text_view {
public:
    text_view();
    void origin(float &x, float &y) const;
    void extent(float &width, float &height) const;
    virtual bool empty() const;

private:
    float m_x;
    float m_y;
    float m_width;
    float m_height;
};

#endif /* TEXT_VIEW_H */
