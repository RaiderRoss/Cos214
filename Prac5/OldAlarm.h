#ifndef OLDALARM_H
#define OLDALARM_H
#include "State.h"
class OldAlarm {
    private:
        State* state;
    public:
        OldAlarm(State* state);
        void identifyAlarmStatus();
        void toggle();
        void off();
        void on();

        void setState(State* s);
};

#endif