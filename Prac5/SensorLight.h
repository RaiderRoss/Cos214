#ifndef SENSORLIGHT_H
#define SENSORLIGHT_H
#include "Sensor.h"
class SensorLight : public Sensor {
    public:
        SensorLight(Group* g);
        ~SensorLight();
        virtual void detect();
        virtual std::string getSensorType();
};
#endif
