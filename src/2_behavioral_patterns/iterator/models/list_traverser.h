#ifndef LIST_TRAVERSER_H
#define LIST_TRAVERSER_H

#include "list.h"

template <typename T>
class list_traverser {
public:
    list_traverser(list<T> *l) : m_iterator(l) {}
    bool traverse();

protected:
    virtual bool process_item(const T &item) = 0;

private:
    list_iterator<T> m_iterator;
};

template <typename T>
bool list_traverser<T>::traverse() {
    auto result = false;

    for (m_iterator.first(); !m_iterator.done(); m_iterator.next()) {
        result = process_item(m_iterator.current_item());

        if (result == false) {
            break;
        }
    }
    
    return result;
}

#endif /* LIST_TRAVERSER */
