#include "GlyphFactory.h"
#include "Character.h"
#include "Row.h"
#include "Column.h"

GlyphFactory::GlyphFactory() {
    for (int i = 0; i < NCHARCODES; ++i) {
        _character[i] = 0;
    }
}

GlyphFactory::~GlyphFactory() {
    for (auto i = 0; i < sizeof _character / sizeof *_character; i++) {
        delete _character[i];
    }
}

Character *GlyphFactory::CreateCharacter(char c) {
    /*
    if (!_character[c]) {
        _character[c] = new Character(c);
    }

    return _character[c];
    */
    return nullptr;
}

Row *GlyphFactory::CreateRow() { return new Row; }

Column *GlyphFactory::CreateColumn() { return new Column; }
