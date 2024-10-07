#ifndef SENSORMOTION_H
#define SENSORMOTION_H
#include "Sensor.h"
class SensorMotion : public Sensor {
    public:
        SensorMotion();
        ~SensorMotion();
        virtual void detect();
};
#endif
