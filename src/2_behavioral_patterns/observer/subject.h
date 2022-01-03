#ifndef SUBJECT_H
#define SUBJECT_H

#include "list.h"

class observer;

class subject {
public:
    virtual ~subject() { }

    virtual void attach(observer *o) { m_observers->append(o); }
    virtual void detach(observer *o) { m_observers->remove(o); }
    virtual void notify();

protected:
    subject();

private:
    list<observer *> *m_observers = nullptr;
};

#endif /* SUBJECT_H */
