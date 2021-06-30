#ifndef DIGITAL_CLOCK_H
#define DIGITAL_CLOCK_H

#include "widget.h"
#include "observer.h"

class clock_timer;
class subject;

class digital_clock : public widget, public observer {
public:
    digital_clock(clock_timer *);
    virtual ~digital_clock();

    virtual void update(subject *);
    // overrides observer operation

    virtual void draw();
    // overrides widget operation;
    // defines how to draw the digital clock
private:
    clock_timer *m_subject;
};

#endif /* DIGITAL_CLOCK_H */
