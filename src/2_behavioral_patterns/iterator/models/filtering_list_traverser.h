#ifndef FILTERING_LIST_TRAVERSER_H
#define FILTERING_LIST_TRAVERSER_H

template <typename T>
class filtering_list_traverser {
public:
    filtering_list_traverser(list<T> *l);
    bool traverse();

protected:
    virtual bool process_item(const T &item) = 0;
    virtual bool test_item(const T &item) = 0;

private:
    list_iterator<T> m_iterator;
};

template <typename T>
void filtering_list_traverser<T>::traverse() {
    auto result = false;

    for (m_iterator.first(); !m_iterator.done(); m_iterator.next()) {
        if (test_item(m_iterator.current_item())) {
            result = process_item(m_iterator.current_item());

            if (result == false) {
                break;
            }
        }
    }
    
    return result;
}

#endif /* FILTERING_LIST_TRAVERSER_H */
