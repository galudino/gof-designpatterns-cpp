#ifndef IMAGE_H
#define IMAGE_H

#include "graphic.h"
#include <iostream>

class image : public graphic {
public:
    image(const char *file); // loads image from a file
    virtual ~image();

    virtual void draw(const point &at);
    virtual void handle_mouse(event &event);

    virtual const point &get_extent();

    virtual void load(std::istream &from);
    virtual void save(std::ostream &to);

    friend std::ostream &operator<<(std::ostream &os, const image &i);
    friend std::istream &operator>>(std::istream &is, image &i);

private:
    point m_extent;
    char *m_filename;
};

#endif /* IMAGE_H */
