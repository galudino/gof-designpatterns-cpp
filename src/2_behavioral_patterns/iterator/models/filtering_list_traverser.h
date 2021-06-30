#ifndef FILTERING_LIST_TRAVERSER_H
#define FILTERING_LIST_TRAVERSER_H

template <class Item>
class filtering_list_traverser {
public:
    filtering_list_traverser(list<Item> *l);
    bool traverse();

protected:
    virtual bool process_item(const Item &) = 0;
    virtual bool test_item(const Item &) = 0;

private:
    list_iterator<Item> m_iterator;
};

template <class Item>
void filtering_list_traverser<Item>::traverse() {
    bool result = false;

    for (m_iterator.first(); !m_iterator.done(); m_iterator.next()) {
        if (test_item(m_iterator.CurrentItem())) {
            result = process_item(m_iterator.current_item());

            if (result == false) {
                break;
            }
        }
    }
    return result;
}

#endif /* FILTERING_LIST_TRAVERSER_H */
