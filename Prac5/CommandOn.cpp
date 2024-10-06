#include "CommandOn.h"

CommandOn::CommandOn(Group* dev) : Command(dev) {
}

CommandOn::~CommandOn() {
}

void CommandOn::execute() {
    device->turnOnAction();
}
