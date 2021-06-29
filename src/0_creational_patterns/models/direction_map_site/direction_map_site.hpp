#ifndef DIRECTION_MAP_SITE_HPP
#define DIRECTION_MAP_SITE_HPP

enum Direction { North, South, East, West };

class MapSite {
public:
    virtual void Enter() = 0;
};

#endif /* DIRECTION_MAP_SITE_HPP */
