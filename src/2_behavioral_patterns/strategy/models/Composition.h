#ifndef COMPOSITION_H
#define COMPOSITION_H

class Compositor;
class Component;

class Composition {
public:
    Composition(Compositor *);
    void Repair();

    Compositor *compositor() const { return _compositor; }
    Component *components() const { return _components; }
    
    int componentCount() const { return _componentCount; }
    int lineWidth() const { return _lineWidth; }
    int *lineBreaks() const { return _lineBreaks; }
    int lineCount() const { return _lineCount; }
private:
    Compositor *_compositor;
    Component *_components; // the list of components
    int _componentCount;    // the number of components
    int _lineWidth;         // the Composition's line width
    int *_lineBreaks;       // the position of linebreaks
                            // in components
    int _lineCount;         // the number of lines
};

#endif // COMPOSITION_H
