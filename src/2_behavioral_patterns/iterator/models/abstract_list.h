#ifndef ABSTRACT_LIST_H
#define ABSTRACT_LIST_H

template <typename T>
class abstract_list {
public:
    virtual iterator<T> *create_iterator() const = 0;
    // ...
};

#endif /* ABSTRACT_LIST_H */
