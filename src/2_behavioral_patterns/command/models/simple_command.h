#ifndef SIMPLE_COMMAND_H
#define SIMPLE_COMMAND_H

template <class Receiver>
class simple_command : public command {
public:
    typedef void (Receiver::*action)();
    
    simple_command(Receiver *r, action a) : m_action(a), m_receiver(r) {}
    virtual void execute() { m_receiver->action(); }

private:
    action m_action;
    Receiver *m_receiver;
};

#endif // SIMPLE_COMMAND_H
