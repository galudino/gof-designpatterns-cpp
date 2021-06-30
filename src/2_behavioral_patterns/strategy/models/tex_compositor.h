#ifndef TEX_COMPOSITOR_H
#define TEX_COMPOSITOR_H

#include "compositor.h"

class tex_compositor : public compositor {
public:
    tex_compositor();

    virtual int compose(float natural[], float stretch[], float shrink[],
                        int component_count, int line_width, int breaks[]);
    // ...
};

#endif // TEX_COMPOSITOR_H
