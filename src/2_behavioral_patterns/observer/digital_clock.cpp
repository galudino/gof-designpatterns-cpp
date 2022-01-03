#include "digital_clock.h"
#include "clock_timer.h"
#include <iostream>

digital_clock::digital_clock(clock_timer *c) : m_subject(c) {
    m_subject->attach(this);
}

digital_clock::~digital_clock() {
    m_subject->detach(this);
}

void digital_clock::update(subject *s) {
    if (s == m_subject) {
        draw();
    }
}

void digital_clock::draw() {
    // get the new values from the subject

    int hour = m_subject->hour();
    int minute = m_subject->minute();
    // etc.

    // draw the digital clock
    std::cout << hour << ":" << minute << std::endl;
}
