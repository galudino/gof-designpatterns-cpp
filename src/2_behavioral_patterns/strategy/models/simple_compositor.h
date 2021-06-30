#ifndef SIMPLE_COMPOSITOR_H
#define SIMPLE_COMPOSITOR_H

#include "compositor.h"

class simple_compositor : public compositor {
public:
    simple_compositor();

    virtual int compose(float natural[], float stretch[], float shrink[],
                        int component_count, int line_width, int breaks[]);
    // ...
};

#endif // SIMPLE_COMPOSITOR_H
