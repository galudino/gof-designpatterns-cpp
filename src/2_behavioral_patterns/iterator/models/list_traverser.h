#ifndef LIST_TRAVERSER_H
#define LIST_TRAVERSER_H

#include "list.h"

template <class Item>
class list_traverser {
public:
    list_traverser(list<Item> *l) : m_iterator(l) {}
    bool traverse();

protected:
    virtual bool process_item(const Item &) = 0;

private:
    list_iterator<Item> m_iterator;
};

template <class Item>
bool list_traverser<Item>::traverse() {
    bool result = false;

    for (m_iterator.first(); !m_iterator.done(); m_iterator.next()) {
        result = process_item(m_iterator.current_item());

        if (result == false) {
            break;
        }
    }
    
    return result;
}

#endif /* LIST_TRAVERSER */
