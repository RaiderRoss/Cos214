#include "CommandOn.h"

CommandOn::CommandOn() {
}

CommandOn::~CommandOn() {
}

void CommandOn::execute(device* dev) {
    dev->turnOnAction();
}
