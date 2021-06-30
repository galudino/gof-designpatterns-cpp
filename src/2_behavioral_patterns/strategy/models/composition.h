#ifndef COMPOSITION_H
#define COMPOSITION_H

class compositor;
class component;

class composition {
public:
    composition(compositor *);
    void repair();

    compositor *get_compositor() const { return m_compositor; }
    component *components() const { return m_components; }
    
    int component_count() const { return m_component_count; }
    int line_width() const { return m_line_width; }
    int *line_breaks() const { return m_line_breaks; }
    int line_count() const { return m_line_count; }
private:
    compositor *m_compositor;
    component *m_components;
    
    int m_component_count;
    int m_line_width;           // the composition's line width
    int *m_line_breaks;         // linebreak position in components
    int m_line_count;
};

#endif // COMPOSITION_H
