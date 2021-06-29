/*!
    \file       header.hpp
    \brief      Header file

    \author
    \date
 */

#ifndef HEADER_HPP
#define HEADER_HPP

class Window {
public:
    Window(View *contents);
    // requests handled by window
    virtual void DrawContents();
    virtual void Open();
    virtual void Close();
    virtual void Iconify();
    virtual void Deiconify();
    // requests forwarded to implementation
    virtual void SetOrigin(const Point &at);
    virtual void SetExtent(const Point &extent);
    virtual void Raise();
    virtual void Lower();
    virtual void DrawLine(const Point &, const Point &);
    virtual void DrawRect(const Point &, const Point &);
    virtual void DrawPolygon(const Point[], int n);
    virtual void DrawText(const char *, const Point &);

protected:
    WindowImp *GetWindowImp();
    View *GetView();

private:
    WindowImp *_imp;
};

class WindowImp {
public:
    virtual void ImpTop() = 0;
    virtual void ImpBottom() = 0;
    virtual void ImpSetExtent(const Point &) = 0;
    virtual void ImpSetOrigin(const Point &) = 0;
    virtual void DeviceRect(Coord, Coord, Coord, Coord) = 0;
    virtual void DeviceText(const char *, Coord, Coord) = 0;
    virtual void DeviceBitmap(const char *, Coord, Coord) = 0;
    // lots more functions for drawing on windows...
protected:
    WindowImp();
};

class ApplicationWindow : public Window {
public:
    // ...
    virtual void DrawContents();
};

class IconWindow : public Window {
public:
    // ...
    virtual void DrawContents();

private:
    const char *_bitmapName;
};

class XWindowImp : public WindowImp {
public:
    XWindowImp();
    virtual void DeviceRect(Coord, Coord, Coord, Coord);
    // remainder of public interface...
private:
    // lots of X window system-specific state, including: Display* _dpy;
    Drawable _winid; // window id
    GC _gc;          // window graphic context
};

class PMWindowImp : public WindowImp {
public:
    PMWindowImp();
    virtual void DeviceRect(Coord, Coord, Coord, Coord);
    // remainder of public interface...
private:
    // lots of PM window system-specific state, including:
    HPS _hps;
};

#endif /* HEADER_HPP */
