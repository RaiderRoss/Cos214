#include "CommandToggle.h"

CommandToggle::CommandToggle(Group* dev) : Command(dev) {
}

CommandToggle::~CommandToggle() {
}

void CommandToggle::execute() {
    device->toggleAction();
}
