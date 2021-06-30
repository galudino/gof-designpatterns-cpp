#ifndef ITERATOR_H
#define ITERATOR_H

template <class Item>
class iterator {
public:
    virtual ~iterator() {}

    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool done() const = 0;
    virtual Item current_item() const = 0;

protected:
    iterator() {}
};

#endif /* ITERATOR_H */
