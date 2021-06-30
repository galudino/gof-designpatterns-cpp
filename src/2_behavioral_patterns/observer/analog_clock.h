#ifndef ANALOG_CLOCK_H
#define ANALOG_CLOCK_H

#include "observer.h"
#include "widget.h"

class analog_clock : public widget, public observer {
public:
    analog_clock(clock_timer *);
    virtual void update(subject *);
    virtual void draw();
    // ...
};

#endif /* ANALOG_CLOCK_H */
