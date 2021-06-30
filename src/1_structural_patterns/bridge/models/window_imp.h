#ifndef WINDOW_IMP_H
#define WINDOW_IMP_H

#include "coord.h"
#include "point.h"

class window_imp {
public:
    virtual void top() = 0;
    virtual void bottom() = 0;
    virtual void set_extent(const point &) = 0;
    virtual void set_origin(const point &) = 0;

    virtual void device_rect(float, float, float, float) = 0;
    virtual void device_text(const char *, float, float) = 0;
    virtual void device_bitmap(const char *, float, float) = 0;
    // lots more functions for drawing on windows...
protected:
    window_imp() = default;
};

#endif /* WINDOW_IMP */
