#ifndef WINDOW_IMP_H
#define WINDOW_IMP_H

#include "coord.h"
#include "point.h"

class window_imp {
public:
    virtual void top() = 0;
    virtual void bottom() = 0;
    virtual void set_extent(const point &pos) = 0;
    virtual void set_origin(const point &pos) = 0;

    virtual void device_rect(float x0, float y0, float x1, float y1) = 0;
    virtual void device_text(const char *text, float x, float y) = 0;
    virtual void device_bitmap(const char *bitmap, float x, float y) = 0;
    // lots more functions for drawing on windows...
protected:
    window_imp() = default;
};

#endif /* WINDOW_IMP */
