#ifndef DIGITAL_CLOCK_H
#define DIGITAL_CLOCK_H

#include "widget.h"
#include "observer.h"

class clock_timer;
class subject;

class digital_clock : public widget, public observer {
public:
    digital_clock(clock_timer *c);
    
    virtual ~digital_clock();
    
    void update(subject *s) override;
    // overrides observer operation

    void draw() override;
    // overrides widget operation;
    // defines how to draw the digital clock
private:
    clock_timer *m_subject = nullptr;
};

#endif /* DIGITAL_CLOCK_H */
