#ifndef TEXT_MANIPULATOR_H
#define TEXT_MANIPULATOR_H

#include "manipulator.h"

class text_shape;

class text_manipulator : public manipulator {
public:
    text_manipulator(const text_shape *s) : manipulator(), m_text_shape(s) { }
    const class text_shape *text_shape() const { return m_text_shape; }
private:
    const class text_shape *m_text_shape = nullptr;
};

#endif /* TEXT_MANIPULATOR_H */
