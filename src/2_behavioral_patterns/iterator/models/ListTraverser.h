#ifndef LIST_TRAVERSER_H
#define LIST_TRAVERSER_H

#include "ListIterator.h"

template <class Item>
class ListTraverser {
public:
    ListTraverser(List<Item> *aList);
    bool Traverse();

protected:
    virtual bool ProcessItem(const Item &) = 0;

private:
    ListIterator<Item> _iterator;
};

template <class Item>
ListTraverser<Item>::ListTraverser(List<Item> *aList) : _iterator(aList) {}

template <class Item>
bool ListTraverser<Item>::Traverse() {
    bool result = false;

    for (_iterator.First(); !_iterator.IsDone(); _iterator.Next()) {
        result = ProcessItem(_iterator.CurrentItem());

        if (result == false) {
            break;
        }
    }
    return result;
}

#endif /* LIST_TRAVERSER */
