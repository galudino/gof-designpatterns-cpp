#include "command.h"

#include "list.h"

class macro_command : public command {
public:
    macro_command();
    ~macro_command();

    virtual void add(command *c) { m_commands->append(c); }
    virtual void remove(command *c) { m_commands->remove(c); }

    void execute() override;

private:
    list<command *> *m_commands = nullptr;
};
