#ifndef SENSORLIGHT_H
#define SENSORLIGHT_H
#include "Sensor.h"
class SensorLight : public Sensor {
    public:
        SensorLight();
        ~SensorLight();
        virtual void detect();
};
#endif
