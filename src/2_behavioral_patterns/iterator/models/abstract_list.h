#ifndef ABSTRACT_LIST_H
#define ABSTRACT_LIST_H

template <class Item>
class abstract_list {
public:
    virtual iterator<Item> *create_iterator() const = 0;
    // ...
};

#endif /* ABSTRACT_LIST_H */
