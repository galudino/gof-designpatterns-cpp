#ifndef LIST_H
#define LIST_H

#include "Iterator.h"
#include "ListIterator.h"
#include <stdexcept>
#include <iostream>

template <class Item>
class List {
public:
    static constexpr auto DEFAULT_LIST_CAPACITY = 256;

    List(long size = DEFAULT_LIST_CAPACITY) : _size(size), _count(0) {
        _items = new Item[size];
    }
    
    List(const List &l) : _items(new Item[l._size]), _size(l._size), _count(l._count) {
        std::copy(l._items, l._items + l._count, _items);
    }
    
    List(List &&l) : _items(std::exchange(l._items, nullptr)), _size(l._size), _count(l._count)  {
        
    }
    
    ~List() { delete _items; }
    
    List &operator=(const List &l) {
        delete _items;
        
        _items = new Item[l._size];
        std::copy(l._items, l._items + l._count, _items);
        _size = l._size;
        _count = l._count;
        
        return *this;
    }
    
    List &operator=(List &&l) {
        _items = std::exchange(l._items);
        _size = l._size;
        _count = l._count;
        return *this;
    }

    long Count() const { return _count; }
    
    Item &Get(long index) const {
        if (index >= _size) {
            throw std::out_of_range("Index out of range");
        }
        
        return _items[index];
    }
    
    Item &First() const {
        if (_size == 0) {
            throw std::length_error("Cannot invoke First() when List is empty");
        }
        
        return _items[0];
    }
    
    Item &Last() const {
        if (_size == 0) {
            throw std::length_error("Cannot invoke Last() when List is empty");
        }
        
        return _items[_size - 1];
    }
    
    bool Includes(const Item &) const;

    void Append(const Item &);
    void Prepend(const Item &);

    void Remove(const Item &);
    void RemoveLast() { --_count; }
    
    void RemoveFirst() {
        std::copy(_items, _items + _count, _count + 1);
        --_count;
    }
    
    void RemoveAll() { _count = 0; }

    Item &Top() const { return Last(); }
    void Push(const Item &anItem) { Append(anItem); }
    Item &Pop() { RemoveLast(); }
    
    Iterator<Item> *CreateIterator() const {
        return new ListIterator<Item>(this);
    }

private:
    void Grow();
    
    Item *_items;
    long _size;
    long _count;
};

template <class Item>
void List<Item>::Grow() {
    auto new_size = _size << 1;
    auto new_items = new Item[new_size];
    std::copy(_items, _items + _count, new_items);
    
    
    delete _items;
    _items = new_items;
    _size = new_size;
}

template <class Item>
bool List<Item>::Includes(const Item &anItem) const {
    for (long i = 0; i < Count(); i++) {
        if (_items[i] == anItem) {
            return true;
        }
    }
    return false;
}

template <class Item>
void List<Item>::Append(const Item &anItem) {
    if (_count == _size) {
        Grow();
    }
    
    _items[_count++] = anItem;
}

template <class Item>
void List<Item>::Prepend(const Item &anItem) {
    if (_count == _size) {
        Grow();
    }
    
    std::copy(_items, _items + _count, _items + 1);
    _items[0] = anItem;
}

template <class Item>
void List<Item>::Remove(const Item &anItem) {
    for (auto i = 0; i < Count(); i++) {
        if (_items[i] == anItem) {
            std::copy(_items, _items + _count, _items + (i - 1));
        }
    }
}

#endif /* LIST_H */
