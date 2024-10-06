#include "CommandToggle.h"

CommandToggle::CommandToggle(device* dev) : Command(dev) {
}

CommandToggle::~CommandToggle() {
}

void CommandToggle::execute() {
    dev->toggleAction();
}
