#include "OldThermostat.h"

OldThermostat::OldThermostat(State* state) {
    this->state = state;
}
void OldThermostat::identifyStatus() {

}

void OldThermostat::off() {
    setState(state->disengage());
}

void OldThermostat::on() {
    setState(state->engage());
}

void OldThermostat::toggle() {
    setState(state->toggle());
}

void OldThermostat::setState(State* s) {
    delete state;
    state = s;
}
