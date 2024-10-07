#ifndef OLDTHERMOSTAT_H
#define OLDTHERMOSTAT_H
#include "State.h"
#include <iostream>
#include <string>
#include "Off.h"
#include "On.h"
/** 
 * @file OldThermostat.h
 * @class OldThermostat
 * @brief Represents an old thermostat with basic state management.
 * 
 * The OldThermostat class provides methods to manage and toggle the state of the thermostat.
 */

/**
 * @fn OldThermostat::OldThermostat(State* state)
 * @brief Constructor that initializes the thermostat with a given state.
 * @param state Pointer to the initial state of the thermostat.
 */

/**
 * @fn void OldThermostat::identifyStatus()
 * @brief Identifies and prints the current status of the thermostat.
 */

/**
 * @fn void OldThermostat::toggle()
 * @brief Toggles the state of the thermostat between on and off.
 */

/**
 * @fn void OldThermostat::off()
 * @brief Turns the thermostat off.
 */

/**
 * @fn void OldThermostat::on()
 * @brief Turns the thermostat on.
 */

/**
 * @fn void OldThermostat::setState(State* s)
 * @brief Sets the state of the thermostat.
 * @param s Pointer to the new state of the thermostat.
 */
class OldThermostat {
    private :
        State* state;
        std::string name;
    public: 
        OldThermostat(std::string name);
        ~OldThermostat();
        void identifyStatus();
        void toggle();
        void off();
        void on();
        void setState(State* s);

};

#endif