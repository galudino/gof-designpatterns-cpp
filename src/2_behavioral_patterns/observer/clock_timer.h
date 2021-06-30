#ifndef CLOCK_TIMER_H
#define CLOCK_TIMER_H

#include "subject.h"

class clock_timer : public subject {
public:
    clock_timer();

    virtual int hour();
    virtual int minute();
    virtual int second();

    void tick();
};

#endif /* CLOCK_TIMER_H */
