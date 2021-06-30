#ifndef WINDOW_H
#define WINDOW_H

#include "view.h"

class point;
class window_imp;

class window {
public:
    window(view *contents) : m_imp(nullptr), m_contents(contents) {}

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

    virtual void draw_line(const point &, const point &) {}
    virtual void draw_rect(const point &, const point &);
    virtual void draw_polygon(const point[], int n) {}
    virtual void draw_text(const char *, const point &) {}

    view *get_view() { return m_contents; }

protected:
    window_imp *get_window_imp();

private:
    window_imp *m_imp;
    view *m_contents; // the window's contents
};

#endif /* WINDOW_H */
