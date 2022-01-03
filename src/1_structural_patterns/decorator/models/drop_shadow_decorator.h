#ifndef DROP_SHADOW_DECORATOR_H
#define DROP_SHADOW_DECORATOR_H

#include "decorator.h"

class visual_component;

class drop_shadow_decorator : public decorator {
public:
    drop_shadow_decorator(visual_component *contents) : decorator(contents) { }
};

#endif /* DROP_SHADOW_DECORATOR_H */
