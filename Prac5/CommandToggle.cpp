#include "CommandToggle.h"

CommandToggle::CommandToggle() {
}

CommandToggle::~CommandToggle() {
}

void CommandToggle::execute(device* dev) {
    dev->toggleAction();
}
