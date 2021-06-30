set(flyweight_src
    character.h
    character.cpp
    column.h
    font.h
    font.cpp
    glyph.h
    glyph.cpp
    glyph_context.h
    glyph_context.cpp
    glyph_factory.h
    glyph_factory.cpp
    row.h
)

add_library(flyweight_lib SHARED ${flyweight_src})
