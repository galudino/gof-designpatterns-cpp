#include "glyph_factory.h"
#include "character.h"
#include "row.h"
#include "column.h"

glyph_factory::glyph_factory() {
    for (int i = 0; i < NCHARCODES; ++i) {
        m_character[i] = 0;
    }
}

glyph_factory::~glyph_factory() {
    for (auto i = 0; i < sizeof m_character / sizeof *m_character; i++) {
        delete m_character[i];
    }
}

character *glyph_factory::create_character(char c) {
    return nullptr;
}

row *glyph_factory::create_row() { return new row; }

column *glyph_factory::create_column() { return new column; }
