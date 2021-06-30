#ifndef LIST_H
#define LIST_H

#include "iterator.h"
#include <stdexcept>
#include <iostream>

template <class Item>
class list;

template <class Item>
class list_iterator : public iterator<Item> {
public:
    list_iterator(const list<Item> *l) : m_list(l), m_current(0) {}
    
    virtual void first() { m_current = 0; }
    virtual void next() { ++m_current; }
    virtual bool done() const { return m_current >= m_list->count(); }
    virtual Item current_item() const {
        if (done()) {
            throw std::out_of_range("Iterator out of bounds");
        }
        return m_list->get(m_current);
    }

private:
    const list<Item> *m_list;
    long m_current;
};

template <class Item>
class list {
public:
    static constexpr auto DEFAULT_LIST_CAPACITY = 256;

    list(long size = DEFAULT_LIST_CAPACITY) : m_size(size), m_count(0) {
        m_items = new Item[size];
    }
    
    list(const list &l) : m_items(new Item[l._size]), m_size(l._size), m_count(l._count) {
        std::copy(l._items, l._items + l._count, m_items);
    }
    
    list(list &&l) : m_items(std::exchange(l._items, nullptr)), m_size(l._size), m_count(l._count)  {
        
    }
    
    ~list() { delete m_items; }
    
    list &operator=(const list &l) {
        delete m_items;
        
        m_items = new Item[l._size];
        std::copy(l._items, l._items + l._count, m_items);
        m_size = l._size;
        m_count = l._count;
        
        return *this;
    }
    
    list &operator=(list &&l) {
        m_items = std::exchange(l._items);
        m_size = l._size;
        m_count = l._count;
        return *this;
    }

    long count() const { return m_count; }
    
    Item &get(long index) const {
        if (index >= m_size) {
            throw std::out_of_range("Index out of range");
        }
        
        return m_items[index];
    }
    
    Item &first() const {
        if (m_size == 0) {
            throw std::length_error("Cannot invoke first() when List is empty");
        }
        
        return m_items[0];
    }
    
    Item &last() const {
        if (m_size == 0) {
            throw std::length_error("Cannot invoke last() when List is empty");
        }
        
        return m_items[m_size - 1];
    }
    
    bool includes(const Item &) const;

    void append(const Item &);
    void prepend(const Item &);

    void remove(const Item &);
    void remove_last() { --m_count; }
    
    void remove_first() {
        std::copy(m_items, m_items + m_count, m_count + 1);
        --m_count;
    }
    
    void remove_all() { m_count = 0; }

    Item &top() const { return last(); }
    void push(const Item &i) { append(i); }
    Item &pop() { remove_last(); }
    
    iterator<Item> *create_iterator() const {
        return new list_iterator<Item>(this);
    }

private:
    void grow();
    
    Item *m_items;
    long m_size;
    long m_count;
};

template <class Item>
void list<Item>::grow() {
    auto new_size = m_size << 1;
    auto new_items = new Item[new_size];
    std::copy(m_items, m_items + m_count, new_items);
    
    delete m_items;
    m_items = new_items;
    m_size = new_size;
}

template <class Item>
bool list<Item>::includes(const Item &anItem) const {
    for (long i = 0; i < count(); i++) {
        if (m_items[i] == anItem) {
            return true;
        }
    }
    return false;
}

template <class Item>
void list<Item>::append(const Item &anItem) {
    if (m_count == m_size) {
        grow();
    }
    
    m_items[m_count++] = anItem;
}

template <class Item>
void list<Item>::prepend(const Item &anItem) {
    if (m_count == m_size) {
        grow();
    }
    
    std::copy(m_items, m_items + m_count, m_items + 1);
    m_items[0] = anItem;
}

template <class Item>
void list<Item>::remove(const Item &anItem) {
    for (auto i = 0; i < count(); i++) {
        if (m_items[i] == anItem) {
            std::copy(m_items, m_items + m_count, m_items + (i - 1));
        }
    }
}

#endif /* LIST_H */
