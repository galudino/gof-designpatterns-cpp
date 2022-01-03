#ifndef REVERSE_LIST_ITERATOR_H
#define REVERSE_LIST_ITERATOR_H

#include "iterator.h"
#include "list.h"

template <typename T>
class reverse_list_iterator : public iterator<T> {
public:
    reverse_list_iterator(const list<T> *l) : m_list(l), m_current(m_list->count() - 1) {}
    
    virtual void first() { m_current = m_list->count() - 1; }
    virtual void next() { --m_current; }
    virtual bool done() const { return m_current < 0; }
    
    virtual T current_item() const {
        if (done()) {
            throw std::length_error("");
        }
        
        return m_list->get(m_current);
    }

private:
    const list<T> *m_list = nullptr;
    long m_current = 0L;
};

#endif /* REVERSE_LIST_ITERATOR_H */
