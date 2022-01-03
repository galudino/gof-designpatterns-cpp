#ifndef MAP_SITE_H
#define MAP_SITE_H

class map_site {
public:
    virtual ~map_site() { }
    virtual void enter() = 0;
};

#endif /* MAP_SITE_H */
