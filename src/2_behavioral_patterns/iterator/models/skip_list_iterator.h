#ifndef SKIP_LIST_ITERATOR_H
#define SKIP_LIST_ITERATOR_H

#include "list.h"
#include "skip_list.h"

template <typename T>
class skip_list_iterator : public list_iterator<T> {
public:
    skip_list_iterator(const list<T> *l) : list_iterator<T>(l) {}
};

#endif /* SKIP_LIST_ITERATOR_H */
