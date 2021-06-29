#include "XWindowImp.h"
#include "Coord.h"

void XWindowImp::DeviceRect(Coord x0, Coord y0, Coord x1, Coord y1) {
    int x = coord::round(coord::min(x0, x1));
    int y = coord::round(coord::min(y0, y1));
    int w = coord::round(coord::abs(x0 - x1));
    int h = coord::round(coord::abs(y0 - y1));
    XDrawRectangle(_dpy, _winid, _gc, x, y, w, h);
}

void XWindowImp::XDrawRectangle(Display *, Drawable, GC, int, int, int, int) {}
