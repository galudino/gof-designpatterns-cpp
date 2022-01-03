#ifndef IMAGE_PROXY_H
#define IMAGE_PROXY_H

#include "graphic.h"
#include "image.h"
#include "point.h"

class event;

class image_proxy : public graphic {
public:
    image_proxy(const char *filename);
    
    virtual ~image_proxy();
    void draw(const point &at) override;
    void handle_mouse(event &event) override;

    point &extent() override;

    void load(std::istream &from) override;
    void save(std::ostream &to) override;

protected:
    class image *image() const;

private:
    class image *m_image = nullptr;
    point m_extent;
    std::string m_filename;
};

#endif /* IMAGE_PROXY_H */
