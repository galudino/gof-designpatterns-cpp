#ifndef SUBJECT_H
#define SUBJECT_H

#include "list.h"

class observer;

class subject {
public:
    virtual ~subject();

    virtual void attach(observer *);
    virtual void detach(observer *);
    virtual void notify();

protected:
    subject();

private:
    list<observer *> *m_observers;
};

#endif /* SUBJECT_H */
