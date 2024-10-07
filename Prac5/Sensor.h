#ifndef SENSOR_H
#define SENSOR_H
class Group;
#include <string>
class Sensor {
    protected :
        Group* group;
    public:
        Sensor(Group* g);
        ~Sensor();
        virtual void detect() = 0;
        virtual std::string getSensorType() = 0;
};
#endif