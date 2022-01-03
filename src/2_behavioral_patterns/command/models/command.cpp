#include "command.h"

#include <iostream>

command::command() { std::cout << "command::command()" << std::endl; }

command::~command() { std::cout << "command::~command()" << std::endl; }
