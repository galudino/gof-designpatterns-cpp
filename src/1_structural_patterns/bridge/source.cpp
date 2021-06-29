/*!
    \file       source.cpp
    \brief      Source file

    \author
    \date
 */

#include <iostream>

void ApplicationWindow::DrawContents() { GetView()->DrawOn(this); }

void IconWindow::DrawContents() {
    WindowImp *imp = GetWindowImp();
    if (imp != 0) {
        imp->DeviceBitmap(_bitmapName, 0.0, 0.0);
    }
}

void Window::DrawRect(const Point &p1, const Point &p2) {
    WindowImp *imp = GetWindowImp();
    imp->DeviceRect(p1.X(), p1.Y(), p2.X(), p2.Y());
}

void XWindowImp::DeviceRect(Coord x0, Coord y0, Coord x1, Coord y1) {
    int x = round(min(x0, x1));
    int y = round(min(y0, y1));
    int w = round(abs(x0 - x1));
    int h = round(abs(y0 - y1));
    XDrawRectangle(_dpy, _winid, _gc, x, y, w, h);
}

void PMWindowImp::DeviceRect(Coord x0, Coord y0, Coord x1, Coord y1) {
    Coord left = min(x0, x1);
    Coord right = max(x0, x1);
    Coord bottom = min(y0, y1);
    Coord top = max(y0, y1);
    PPOINTL point[4];
    point[0].x = left;
    point[0].y = top;
    point[1].x = right;
    point[2].x = right;
    point[3].x = left;
    point[1].y = top;
    point[2].y = bottom;
    point[3].y = bottom;
    if ((GpiBeginPath(_hps, 1L) == false) ||
        (GpiSetCurrentPosition(_hps, &point[3]) == false) ||
        (GpiPolyLine(_hps, 4L, point) == GPI_ERROR) ||
        (GpiEndPath(_hps) == false)) {
        // report error
    } else {
        GpiStrokePath(_hps, 1L, 0L);
    }
}

WindowImp *Window::GetWindowImp() {
    if (_imp == 0) {
        _imp = WindowSystemFactory::Instance()->MakeWindowImp();
    }
    return _imp;
}
