#ifndef FONT_H
#define FONT_H

class font {
public:
    font(const char *name) : m_name(name) {}
    const char *name() const { return m_name; }

private:
    const char *m_name;
};

#endif /* FONT_H */
