#ifndef DECORATOR_H
#define DECORATOR_H

#include "visual_component.h"

class decorator : public visual_component {
public:
    decorator(visual_component *);

    virtual void draw();
    virtual void resize();
    // ...
private:
    visual_component *m_component;
};

#endif /* DECORATOR_H */
