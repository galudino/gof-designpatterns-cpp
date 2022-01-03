#ifndef BORDER_DECORATOR_H
#define BORDER_DECORATOR_H

#include "decorator.h"

class border_decorator : public decorator {
public:
    border_decorator(visual_component *component, int border_width) : decorator(component), m_width(border_width) { }

    void draw() override;
private:
    void draw_border(int width);
private:
    int m_width = 0;
};

#endif /* BORDER_DECORATOR_H */
