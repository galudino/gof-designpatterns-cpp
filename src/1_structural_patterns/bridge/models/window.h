#ifndef WINDOW_H
#define WINDOW_H

#include "view.h"
#include <array>

class point;
class window_imp;

class window {
public:
    window(view *contents) : m_contents(contents) {}

    // requests handled by window
    virtual void draw_contents() {}

    virtual void open() {}
    virtual void close() {}
    virtual void iconify() {}
    virtual void deiconify() {}

    // requests forwarded to implementation
    virtual void set_origin(const point &at) {}
    virtual void set_extent(const point &extent) {}
    virtual void raise() {}
    virtual void lower() {}

    virtual void draw_line(const point &p0, const point &p1) {}
    virtual void draw_rect(const point &p0, const point &p1);
    virtual void draw_polygon(const point vertices[], int vertex_count) {}
    virtual void draw_text(const char *text, const point &pos) {}

    class view *view() { return m_contents; }

protected:
    class window_imp *window_imp();

private:
    class window_imp *m_imp = nullptr;
    class view *m_contents = nullptr;   // the window's contents
};

#endif /* WINDOW_H */
