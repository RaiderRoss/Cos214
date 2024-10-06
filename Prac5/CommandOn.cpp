#include "CommandOn.h"

CommandOn::CommandOn(device* dev) : Command(dev) {
}

CommandOn::~CommandOn() {
}

void CommandOn::execute() {
    dev->turnOnAction();
}
