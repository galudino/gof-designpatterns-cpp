#ifndef SIMPLE_COMMAND_H
#define SIMPLE_COMMAND_H

#include <functional>

template <typename T>
class simple_command : public command {
public:
    using action = std::function<void(void)>;
    
    simple_command(T *r, action a) : m_action(a), m_receiver(r) {}
    
    virtual void execute() { m_receiver->action(); }
private:
    action m_action;
    T *m_receiver = nullptr;
};

#endif // SIMPLE_COMMAND_H
