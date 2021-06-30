#ifndef GLYPH_H
#define GLYPH_H

class glyph_context;
class font;
class window;

class glyph {
public:
    virtual ~glyph();

    virtual void draw(window *, glyph_context &);

    virtual void set_font(font *, glyph_context &);
    virtual font *get_font(glyph_context &);

    virtual void first(glyph_context &);
    virtual void next(glyph_context &);
    virtual bool is_done(glyph_context &);
    virtual glyph *current(glyph_context &);

    virtual void insert(glyph *, glyph_context &);
    virtual void remove(glyph_context &);

protected:
    glyph();
};

#endif /* GLYPH_H */
