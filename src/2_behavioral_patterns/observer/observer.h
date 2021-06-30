#ifndef OBSERVER_H
#define OBSERVER_H

class subject;

class observer {
public:
    virtual ~observer() {}
    virtual void update(subject *s) = 0;

protected:
    observer() = default;
};

#endif /* OBSERVER_H */
