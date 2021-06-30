#ifndef BORDER_DECORATOR_H
#define BORDER_DECORATOR_H

#include "decorator.h"

class border_decorator : public decorator {
public:
    border_decorator(visual_component *, int borderWidth);

    virtual void draw();

private:
    void draw_border(int);

private:
    int m_width;
};

#endif /* BORDER_DECORATOR_H */
