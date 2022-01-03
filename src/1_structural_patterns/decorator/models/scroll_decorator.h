#ifndef SCROLL_DECORATOR_H
#define SCROLL_DECORATOR_H

#include "decorator.h"

class scroll_decorator : public decorator {
public:
    scroll_decorator(visual_component *contents) : decorator(contents) { }
};

#endif /* SCROLL_DECORATOR_H */
