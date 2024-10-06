#ifndef OLDTHERMOSTAT_H
#define OLDTHERMOSTAT_H
#include "State.h"
class OldThermostat {
    private :
        State* state;
    public: 
        OldThermostat(State* state);
        void identifyStatus();
        void toggle();
        void off();
        void on();

        void setState(State* s);

};

#endif