#include "command.h"

#include "list.h"

class macro_command : public command {
public:
    macro_command();
    virtual ~macro_command();

    virtual void add(command *);
    virtual void remove(command *);

    virtual void execute();

private:
    list<command *> *m_commands;
};
