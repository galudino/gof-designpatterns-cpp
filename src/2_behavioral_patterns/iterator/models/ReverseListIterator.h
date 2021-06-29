#ifndef REVERSE_LIST_ITERATOR_H
#define REVERSE_LIST_ITERATOR_H

#include "Iterator.h"
#include "List.h"

template <class Item>
class ReverseListIterator : public Iterator<Item> {
public:
    ReverseListIterator(const List<Item> *aList);
    virtual void First();
    virtual void Next();
    virtual bool IsDone() const;
    virtual Item CurrentItem() const;

private:
    const List<Item> *_list;
    long _current;
};

template <class Item>
ReverseListIterator<Item>::ReverseListIterator(const List<Item> *aList)
    : _list(aList), _current(_list->Count() - 1) {}

template <class Item>
void ReverseListIterator<Item>::First() {
    _current = _list->Count() - 1;
}

template <class Item>
void ReverseListIterator<Item>::Next() {
    _current--;
}

template <class Item>
bool ReverseListIterator<Item>::IsDone() const {
    return _current < 0;
}

template <class Item>
Item ReverseListIterator<Item>::CurrentItem() const {
    if (IsDone()) {
        throw IteratorOutOfBounds("Iterator out of bounds");
    }
    return _list->Get(_current);
}

#endif /* REVERSE_LIST_ITERATOR_H */
