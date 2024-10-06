#include "CommandOff.h"

CommandOff::CommandOff(Group* dev) : Command(dev) {
}

CommandOff::~CommandOff() {
}

void CommandOff::execute() {
    device->turnOffAction();
}
