#ifndef VIEW_H
#define VIEW_H

class application_window;

class view {
public:
    void draw_on(const application_window *w) const;
};

#endif /* VIEW_HPP */
