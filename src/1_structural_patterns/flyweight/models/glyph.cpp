#include "glyph.h"

#include <iostream>

glyph::glyph() {  }

glyph::~glyph() {  }

void glyph::draw(window *, glyph_context &) {
  
}

void glyph::set_font(font *, glyph_context &) {

}

font *glyph::get_font(glyph_context &) {

    return nullptr;
}

void glyph::first(glyph_context &) {

}

void glyph::next(glyph_context &) {

}

bool glyph::is_done(glyph_context &) {
    return false;
}

glyph *glyph::current(glyph_context &) {
    return nullptr;
}

void glyph::insert(glyph *, glyph_context &) {

}

void glyph::remove(glyph_context &) {

}
