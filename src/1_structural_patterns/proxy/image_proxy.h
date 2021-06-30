#ifndef IMAGE_PROXY_H
#define IMAGE_PROXY_H

#include "graphic.h"
#include "image.h"
#include "point.h"

class event;

class image_proxy : public graphic {
public:
    image_proxy(const char *imagefile);
    virtual ~image_proxy();

    virtual void draw(const point &at);
    virtual void handle_mouse(event &event);

    virtual const point &get_extent();

    virtual void load(std::istream &from);
    virtual void save(std::ostream &to);

protected:
    image *get_image();

private:
    image *m_image;
    point m_extent;
    char *m_filename;
};

#endif /* IMAGE_PROXY_H */
