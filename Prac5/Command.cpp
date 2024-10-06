#include "Command.h"
#include "Group.h"


Command::Command(Group* dev) {
    device = dev;
}

Command::~Command() {
}
