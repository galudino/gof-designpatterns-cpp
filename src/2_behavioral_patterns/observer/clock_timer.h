#ifndef CLOCK_TIMER_H
#define CLOCK_TIMER_H

#include "subject.h"

class clock_timer : public subject {
public:
    virtual int hour() { return 0; }
    virtual int minute() { return 0; }
    virtual int second() { return 0; }

    void tick();
};

#endif /* CLOCK_TIMER_H */
