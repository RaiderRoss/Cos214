#include "OldAlarm.h"

OldAlarm::OldAlarm(State* s) {
    this->state = s;
}

void OldAlarm::identifyAlarmStatus() {

}

void OldAlarm::toggle() {
    setState(state->toggle());
}

void OldAlarm::off() {
    setState(state->disengage());
}

void OldAlarm::on() {
    setState(state->engage());
}

void OldAlarm::setState(State* s) {
    delete state;
    state = s;
}