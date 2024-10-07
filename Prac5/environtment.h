#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H
#include <iostream>
#include <vector>
#include <memory>
#include "SensorLight.h"
#include "SensorMotion.h"
class Environment {
    private:
        std::vector<std::unique_ptr<SensorLight>> lights;
        std::vector<std::unique_ptr<SensorMotion>> motions;
    public:
        Environment();
        ~Environment();
        void addLight(SensorLight* light);
        void addMotion(SensorMotion* motion);
        void removeLight(SensorLight* light);
        void removeMotion(SensorMotion* motion);
        void listLights();
        void listMotions();
};
#endif