#ifndef GLYPH_FACTORY_H
#define GLYPH_FACTORY_H

class character;
class column;
class row;

const int NCHARCODES = 128;

class glyph_factory {
public:
    glyph_factory();
    virtual ~glyph_factory();

    virtual character *create_character(char);
    virtual row *create_row();
    virtual column *create_column();
    // ...
private:
    character *m_character[NCHARCODES];
};

#endif /* GLYPH_FACTORY_H */
