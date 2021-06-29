#ifndef IMAGE_H
#define IMAGE_H

#include "Graphic.h"
#include <iostream>

class Image : public Graphic {
public:
    Image(const char *file); // loads image from a file
    virtual ~Image();

    virtual void Draw(const Point &at);
    virtual void HandleMouse(Event &event);

    virtual const Point &GetExtent();

    virtual void Load(std::istream &from);
    virtual void Save(std::ostream &to);

    friend std::ostream &operator<<(std::ostream &os, const Image &i);
    friend std::istream &operator>>(std::istream &is, Image &i);

private:
    Point _extent;
    char *_fileName;
};

#endif /* IMAGE_H */
