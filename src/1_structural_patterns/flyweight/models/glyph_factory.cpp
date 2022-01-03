#include "glyph_factory.h"
#include "character.h"
#include "row.h"
#include "column.h"

glyph_factory::glyph_factory() {
    for (auto &character : m_character) {
        character = nullptr;
    }
}

glyph_factory::~glyph_factory() {
    for (auto character : m_character) {
        delete character;
    }
}

character *glyph_factory::create_character(char c) {
    return nullptr;
}

row *glyph_factory::create_row() { return new row; }

column *glyph_factory::create_column() { return new column; }
