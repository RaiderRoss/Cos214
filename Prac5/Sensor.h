#ifndef SENSOR_H
#define SENSOR_H
class Sensor {
    public:
        Sensor();
        ~Sensor();
        virtual void detect() = 0;
};
#endif