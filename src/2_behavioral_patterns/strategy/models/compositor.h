#ifndef COMPOSITOR_H
#define COMPOSITOR_H

class compositor {
public:
    virtual int compose(float natural[], float stretch[], float shrink[],
                        int component_count, int line_width, int breaks[]) = 0;

protected:
    compositor() {}
};

#endif // COMPOSITOR_H
