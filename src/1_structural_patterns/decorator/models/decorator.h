#ifndef DECORATOR_H
#define DECORATOR_H

#include "visual_component.h"

class decorator : public visual_component {
public:
    decorator(visual_component *contents) : m_component(contents) { }

    void draw() override {
        m_component->draw();
    }
    
    void resize() override {
        m_component->resize();
    }
    // ...
private:
    visual_component *m_component = nullptr;
};

#endif /* DECORATOR_H */
