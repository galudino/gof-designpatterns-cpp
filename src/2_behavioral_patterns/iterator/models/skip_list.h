#ifndef SKIP_LIST_H
#define SKIP_LIST_H

#include "list.h"

template <typename T>
class skip_list_iterator;

template <typename T>
class skip_list : public list<T> {
public:
    iterator<T> *create_iterator() const {
        return new skip_list_iterator(this);
    }
};

#endif /* SKIP_LIST_H */
