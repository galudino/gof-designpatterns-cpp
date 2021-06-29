#ifndef TEXT_MANIPULATOR_H
#define TEXT_MANIPULATOR_H

#include "Manipulator.h"

class TextShape;

class TextManipulator : public Manipulator {
public:
    TextManipulator(const TextShape *s);
    const TextShape *textShape() const { return _textShape; }

private:
    const TextShape *_textShape;
};

#endif /* TEXT_MANIPULATOR_H */
