#ifndef ITERATOR_PTR_H
#define ITERATOR_PTR_H

template <typename T>
class iterator_ptr {
public:
    iterator_ptr(iterator<T> *i) : m_it(i) {}
    iterator_ptr(const iterator_ptr &) = delete;
    ~iterator_ptr() { delete m_it; }

    iterator<T> *operator->() { return m_it; }
    iterator<T> &operator*() { return *m_it; }

    iterator_ptr &operator=(const iterator_ptr &it) = delete;

private:
    iterator<T> *m_it;
};

#endif /* ITERATOR_PTR_H */
