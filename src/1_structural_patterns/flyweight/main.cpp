#include "font.h"
#include "glyph_context.h"

int main() {
    auto gc = glyph_context();
    auto times_12 = new font("Times-Roman-12");
    auto times_italic_12 = new font("Times-Italic-12");
    
    gc.set_font(times_12, 6);
    gc.insert(6);
    gc.set_font(times_italic_12, 6);

    return 0;
}
