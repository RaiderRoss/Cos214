#include "Command.h"
#include "device.h"


Command::Command(device* dev) {
    this->dev = dev;
}

Command::~Command() {
}
