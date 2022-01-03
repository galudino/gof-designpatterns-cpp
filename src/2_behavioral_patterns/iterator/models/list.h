#ifndef LIST_H
#define LIST_H

#include "iterator.h"
#include <stdexcept>
#include <iostream>

template <typename T>
class list;

template <typename T>
class list_iterator : public iterator<T> {
public:
    list_iterator(const list<T> *l) : m_list(l), m_current(0) {}
    
    virtual void first() { m_current = 0; }
    virtual void next() { ++m_current; }
    virtual bool done() const { return m_current >= m_list->count(); }
    
    virtual T current_item() const {
        if (done()) {
            throw std::out_of_range("Iterator out of bounds");
        }
        
        return m_list->get(m_current);
    }

private:
    const list<T> *m_list = nullptr;
    long m_current = 0L;
};

template <typename T>
class list {
public:
    static constexpr auto DEFAULT_LIST_CAPACITY = 256;

    list(long size = DEFAULT_LIST_CAPACITY) : m_size(size), m_count(0) {
        m_items = new T[size];
    }
    
    list(const list &l) : m_items(new T[l.m_size]), m_size(l.m_size), m_count(l.m_count) {
        std::copy(l._items, l._items + l._count, m_items);
    }
    
    list(list &&l) : m_items(std::exchange(l.m_items, nullptr)), m_size(l.m_size), m_count(l.m_count)  {
        
    }
    
    ~list() { delete m_items; }
    
    list &operator=(const list &l) {
        delete m_items;
        
        m_items = new T[l.m_size];
        std::copy(l.m_items, l.m_items + l.m_count, m_items);
        m_size = l.m_size;
        m_count = l.m_count;
        
        return *this;
    }
    
    list &operator=(list &&l) {
        m_items = std::exchange(l.m_items);
        m_size = l.m_size;
        m_count = l.m_count;
        return *this;
    }

    long count() const { return m_count; }
    
    T &get(long index) const {
        if (index >= m_size) {
            throw std::out_of_range("Index out of range");
        }
        
        return m_items[index];
    }
    
    T &first() const {
        if (m_size == 0) {
            throw std::length_error("Cannot invoke first() when List is empty");
        }
        
        return m_items[0];
    }
    
    T &last() const {
        if (m_size == 0) {
            throw std::length_error("Cannot invoke last() when List is empty");
        }
        
        return m_items[m_size - 1];
    }
    
    bool includes(const T &item) const;

    void append(const T &item);
    void prepend(const T &item);

    void remove(const T &item);
    void remove_last() { --m_count; }
    
    void remove_first() {
        std::copy(m_items, m_items + m_count, m_count + 1);
        --m_count;
    }
    
    void remove_all() { m_count = 0; }

    T &top() const { return last(); }
    void push(const T &item) { append(item); }
    T &pop() { remove_last(); }
    
    iterator<T> *create_iterator() const {
        return new list_iterator<T>(this);
    }

private:
    void grow();
    
    T *m_items = nullptr;
    
    long m_size = 0L;
    long m_count = 0L;
};

template <typename T>
void list<T>::grow() {
    auto new_size = m_size << 1;
    auto new_items = new T[new_size];
    std::copy(m_items, m_items + m_count, new_items);
    
    delete m_items;
    m_items = new_items;
    m_size = new_size;
}

template <typename T>
bool list<T>::includes(const T &item) const {
    for (auto i = 0; i < count(); i++) {
        if (m_items[i] == item) {
            return true;
        }
    }
    return false;
}

template <typename T>
void list<T>::append(const T &item) {
    if (m_count == m_size) {
        grow();
    }
    
    m_items[m_count++] = item;
}

template <typename T>
void list<T>::prepend(const T &item) {
    if (m_count == m_size) {
        grow();
    }
    
    std::copy(m_items, m_items + m_count, m_items + 1);
    m_items[0] = item;
}

template <typename T>
void list<T>::remove(const T &item) {
    for (auto i = 0; i < count(); i++) {
        if (m_items[i] == item) {
            std::copy(m_items, m_items + m_count, m_items + (i - 1));
        }
    }
}

#endif /* LIST_H */
