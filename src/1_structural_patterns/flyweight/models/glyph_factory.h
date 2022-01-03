#ifndef GLYPH_FACTORY_H
#define GLYPH_FACTORY_H

#include <array>

class character;
class column;
class row;

constexpr auto NCHARCODES = 128;

class glyph_factory {
public:
    glyph_factory();
    virtual ~glyph_factory();

    virtual character *create_character(char ch);
    virtual row *create_row();
    virtual column *create_column();
    // ...
private:
    std::array<character *, NCHARCODES> m_character;
};

#endif /* GLYPH_FACTORY_H */
