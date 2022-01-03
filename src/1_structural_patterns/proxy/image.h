#ifndef IMAGE_H
#define IMAGE_H

#include "graphic.h"
#include <iostream>

class image : public graphic {
public:
    image(const char *file); // loads image from a file
    virtual ~image() { }

    void draw(const point &at) override;
    void handle_mouse(event &event) override;

    point &extent() override;

    void load(std::istream &from) override;
    void save(std::ostream &to) override;

    friend std::ostream &operator<<(std::ostream &os, const image &i);
    friend std::istream &operator>>(std::istream &is, image &i);

private:
    point m_extent;
    std::string m_filename;
};

#endif /* IMAGE_H */
