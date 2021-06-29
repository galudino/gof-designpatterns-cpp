#ifndef FONT_H
#define FONT_H

class Font {
public:
    Font(const char *name) : _name(name) {}
    const char *name() const { return _name; }

private:
    const char *_name;
};

#endif /* FONT_H */
