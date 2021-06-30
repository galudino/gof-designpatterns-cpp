#ifndef SKIP_LIST_H
#define SKIP_LIST_H

#include "list.h"

template <class Item>
class skip_list_iterator;

template <class Item>
class skip_list : public list<Item> {
public:
    iterator<Item> *create_iterator() const {
        return new skip_list_iterator(this);
    }
};

#endif /* SKIP_LIST_H */
