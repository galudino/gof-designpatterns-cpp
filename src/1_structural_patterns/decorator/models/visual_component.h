#ifndef VISUAL_COMPONENT_H
#define VISUAL_COMPONENT_H

class visual_component {
public:
    visual_component();

    virtual void draw();
    virtual void resize();
    // ...
};

#endif /* VISUAL_COMPONENT_H */
