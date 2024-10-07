#ifndef SENSORMOTION_H
#define SENSORMOTION_H
#include "Sensor.h"
class SensorMotion : public Sensor {
    public:
        SensorMotion(Group* g);
        ~SensorMotion();
        virtual void detect();
        virtual std::string getSensorType();
};
#endif
