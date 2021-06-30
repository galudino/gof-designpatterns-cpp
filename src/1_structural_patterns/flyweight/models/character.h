#ifndef CHARACTER_H
#define CHARACTER_H

#include "glyph.h"

class window;
class glyph_context;

class character : public glyph {
public:
    character(char);
    virtual void draw(window *, glyph_context &);
    char charcode() const { return m_charcode; }
private:
    char m_charcode;
};

#endif /* CHARACTER_H */
