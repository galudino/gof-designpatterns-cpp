#ifndef ITERATOR_PTR_H
#define ITERATOR_PTR_H

template <class Item>
class iterator_ptr {
public:
    iterator_ptr(iterator<Item> *i) : _i(i) {}
    iterator_ptr(const iterator_ptr &) = delete;
    ~iterator_ptr() { delete _i; }

    iterator<Item> *operator->() { return _i; }
    iterator<Item> &operator*() { return *_i; }

    iterator_ptr &operator=(const iterator_ptr &) = delete;

private:
    iterator<Item> *_i;
};

#endif /* ITERATOR_PTR_H */
