#ifndef CHARACTER_H
#define CHARACTER_H

#include "glyph.h"

class window;
class glyph_context;

class character : public glyph {
public:
    character(char ch) : m_charcode(ch) { }
    void draw(window *w, glyph_context &context) override { }
    
    char charcode() const { return m_charcode; }
private:
    char m_charcode = '\0';
};

#endif /* CHARACTER_H */
