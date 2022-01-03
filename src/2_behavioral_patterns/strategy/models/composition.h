#ifndef COMPOSITION_H
#define COMPOSITION_H

class compositor;
class component;

class composition {
public:
    composition(compositor *c) : m_compositor(c) { }
    void repair();

    class compositor *compositor() const { return m_compositor; }
    component *components() const { return m_components; }
    
    int component_count() const { return m_component_count; }
    int line_width() const { return m_line_width; }
    int *line_breaks() const { return m_line_breaks; }
    int line_count() const { return m_line_count; }
private:
    class compositor *m_compositor = nullptr;
    component *m_components = nullptr;
    
    int m_component_count = 0;
    int m_line_width = 0;                   // the composition's line width
    int *m_line_breaks = nullptr;           // linebreak position in components
    int m_line_count = 0;
};

#endif // COMPOSITION_H
