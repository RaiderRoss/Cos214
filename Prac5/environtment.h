#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H
#include <iostream>
#include <vector>
#include <memory>
#include "SensorLight.h"
#include "SensorMotion.h"
/**
 * @file Environment.h
 * @class Environment
 * @brief Manages a collection of SensorLight and SensorMotion objects.
 * 
 * The Environment class is responsible for maintaining and managing a collection of 
 * SensorLight and SensorMotion objects. It provides methods to add, remove, and list 
 * these sensor objects.
 */

/**
 * @fn Environment::Environment()
 * @brief Constructs an Environment object.
 * 
 * Initializes the Environment object and prepares it to manage sensor objects.
 */

/**
 * @fn Environment::~Environment()
 * @brief Destructs the Environment object.
 * 
 * Cleans up resources used by the Environment object.
 */

/**
 * @fn void Environment::addLight(SensorLight* light)
 * @brief Adds a SensorLight object to the environment.
 * 
 * @param light A pointer to the SensorLight object to be added.
 */

/**
 * @fn void Environment::addMotion(SensorMotion* motion)
 * @brief Adds a SensorMotion object to the environment.
 * 
 * @param motion A pointer to the SensorMotion object to be added.
 */

/**
 * @fn void Environment::removeLight(SensorLight* light)
 * @brief Removes a SensorLight object from the environment.
 * 
 * @param light A pointer to the SensorLight object to be removed.
 */

/**
 * @fn void Environment::removeMotion(SensorMotion* motion)
 * @brief Removes a SensorMotion object from the environment.
 * 
 * @param motion A pointer to the SensorMotion object to be removed.
 */

/**
 * @fn void Environment::listLights()
 * @brief Lists all SensorLight objects in the environment.
 * 
 * Outputs the details of all SensorLight objects currently managed by the environment.
 */

/**
 * @fn void Environment::listMotions()
 * @brief Lists all SensorMotion objects in the environment.
 * 
 * Outputs the details of all SensorMotion objects currently managed by the environment.
 */
class Environment {
    private:
        std::vector<std::unique_ptr<SensorLight>> lightSensor;
        std::vector<std::unique_ptr<SensorMotion>> motionSensor;
    public:
        Environment();
        ~Environment();
        void add(Sensor* sen);
        std::vector<std::unique_ptr<SensorLight>>& getLights();
        std::vector<std::unique_ptr<SensorMotion>>& getMotions();
        void remove(Sensor* sen);
        void notifyLights();
        void notifyMotions();
        void listLights();
        void listMotions();
};
#endif