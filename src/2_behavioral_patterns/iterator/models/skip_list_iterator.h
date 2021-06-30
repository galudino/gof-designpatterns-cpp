#ifndef SKIP_LIST_ITERATOR_H
#define SKIP_LIST_ITERATOR_H

#include "list.h"
#include "skip_list.h"

template <class Item>
class skip_list_iterator : public list_iterator<Item> {
public:
    skip_list_iterator(const list<Item> *l) : list_iterator<Item>(l) {}
};

#endif /* SKIP_LIST_ITERATOR_H */
