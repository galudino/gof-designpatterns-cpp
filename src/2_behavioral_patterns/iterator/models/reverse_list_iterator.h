#ifndef REVERSE_LIST_ITERATOR_H
#define REVERSE_LIST_ITERATOR_H

#include "iterator.h"
#include "list.h"

template <class Item>
class reverse_list_iterator : public iterator<Item> {
public:
    reverse_list_iterator(const list<Item> *l) : m_list(l), m_current(m_list->count() - 1) {}
    
    virtual void first() { m_current = m_list->count() - 1; }
    virtual void next() { --m_current; }
    virtual bool done() const { return m_current < 0; }
    
    virtual Item current_item() const {
        if (done()) {
            throw std::length_error("");
        }
        
        return m_list->get(m_current);
    }

private:
    const list<Item> *m_list;
    long m_current;
};

#endif /* REVERSE_LIST_ITERATOR_H */
