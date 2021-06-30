#ifndef WINDOW_H
#define WINDOW_H

class visual_component;

class window {
public:
    void set_contents(visual_component *contents);

private:
    visual_component *m_contents;
};

#endif /* WINDOW_H */
