#ifndef GLYPH_H
#define GLYPH_H

class glyph_context;
class font;
class window;

class glyph {
public:
    virtual ~glyph() { }

    virtual void draw(window *w, glyph_context &context) { }

    virtual void set_font(font *f, glyph_context &context) { }
    virtual font *font(glyph_context &context) const { return nullptr; }

    virtual void first(glyph_context &context) { }
    virtual void next(glyph_context &context) { }
    virtual bool is_done(glyph_context &context) { return false; }
    virtual glyph *current(glyph_context &context) { return nullptr; }

    virtual void insert(glyph *g, glyph_context &context) { }
    virtual void remove(glyph_context &context) { }

protected:
    glyph() { }
};

#endif /* GLYPH_H */
