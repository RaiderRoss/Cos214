#include "CommandOff.h"

CommandOff::CommandOff() {
}

CommandOff::~CommandOff() {
}

void CommandOff::execute(device* dev) {
    dev->turnOffAction();
}
