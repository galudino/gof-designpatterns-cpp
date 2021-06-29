#ifndef SKIP_LISTITERATOR_H
#define SKIP_LISTITERATOR_H

#include "ListIterator.h"
#include "SkipList.h"

template <class Item>
class SkipListIterator : public ListIterator<Item> {
public:
    SkipListIterator(const List<Item> *aList) : ListIterator<Item>(aList) {}
    // virtual void First();
    // virtual void Next();
    // virtual bool IsDone() const;
    // virtual Item CurrentItem() const;
};

#endif /* SKIP_LISTITERATOR_H */
