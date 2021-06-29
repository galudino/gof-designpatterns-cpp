set(flyweight_src
    Character.h
    Character.cpp
    Column.h
    Font.h
    Font.cpp
    Glyph.h
    Glyph.cpp
    GlyphContext.h
    GlyphContext.cpp
    GlyphFactory.h
    GlyphFactory.cpp
    Row.h
)

add_library(flyweight_lib SHARED ${flyweight_src})
