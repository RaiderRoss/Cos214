#include "CommandOff.h"

CommandOff::CommandOff(device* dev) : Command(dev) {
}

CommandOff::~CommandOff() {
}

void CommandOff::execute() {
    dev->turnOffAction();
}
