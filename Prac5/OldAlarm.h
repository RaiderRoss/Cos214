#ifndef OLDALARM_H
#define OLDALARM_H
#include "State.h"
#include "LockState.h"
#include "Unlocked.h"
class OldAlarm {
    private:
        State* state;
        std::string name;
    public:
        OldAlarm(std::string name);
        ~OldAlarm();
        void identifyAlarmStatus();
        void toggle();
        void off();
        void on();
        void setState(State* s);
};

#endif