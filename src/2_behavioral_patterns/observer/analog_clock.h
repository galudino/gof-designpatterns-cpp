#ifndef ANALOG_CLOCK_H
#define ANALOG_CLOCK_H

#include "observer.h"
#include "widget.h"

class analog_clock : public widget, public observer {
public:
    analog_clock(clock_timer *c) { }
    
    void update(subject *s) override { }
    void draw() override { }
    // ...
};

#endif /* ANALOG_CLOCK_H */
