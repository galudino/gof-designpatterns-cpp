#ifndef SKIP_LIST_H
#define SKIP_LIST_H

#include "List.h"

template <class Item>
class SkipListIterator;

template <class Item>
class SkipList : public List<Item> {
public:
    Iterator<Item> *CreateIterator() const;
};

template <class Item>
Iterator<Item> *SkipList<Item>::CreateIterator() const {
    return new SkipListIterator<Item>(this);
}

#endif /* SKIP_LIST_H */
