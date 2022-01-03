#ifndef GLYPH_CONTEXT_H
#define GLYPH_CONTEXT_H

class b_tree;
class font;

class glyph_context {
public:
    glyph_context() { }
    virtual ~glyph_context() { }

    virtual void next(int step = 1) { }
    virtual void insert(int quantity = 1) { }

    virtual font *font() const { return nullptr; }
    virtual void set_font(class font *f, int span = 1) { }

    int index() const { return m_index; }
    b_tree *fonts() const { return m_fonts; }

private:
    int m_index;
    b_tree *m_fonts;
};

#endif /* GLYPH_CONTEXT_H */
