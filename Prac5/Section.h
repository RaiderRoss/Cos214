#ifndef SECTION_H
#define SECTION_H
#include <iostream>
#include "Group.h"
#include <vector>
#include "Environtment.h"
/**
 * @file Section.h
 * @class Section
 * @brief Represents a section that can contain multiple groups.
 * 
 * The Section class is a specialized type of Group that can contain other groups as its children.
 * It provides methods to add, destroy, and manage these child groups.
 * 
 * @fn Section::Section(std::string name)
 * @brief Constructs a Section with the given name.
 * @param name The name of the section.
 * 
 * @fn Section::~Section()
 * @brief Destructor for the Section class.
 * 
 * @fn bool Section::addGroup(Group* gr)
 * @brief Adds a group to the section.
 * @param gr Pointer to the group to be added.
 * @return True if the group was added successfully, false otherwise.
 * 
 * @fn bool Section::destroyGroup()
 * @brief Destroys a group within the section.
 * @return True if a group was destroyed successfully, false otherwise.
 * 
 * @fn std::vector<unique_ptr<Group>>& Section::getChildren()
 * @brief Retrieves the child groups of the section.
 * @return A reference to a vector containing unique pointers to the child groups.
 * 
 * @fn std::string Section::getDeviceType()
 * @brief Gets the type of device represented by the section.
 * @return A string representing the device type.
 * 
 * @fn void Section::getStatus(int)
 * @brief Retrieves the status of the section.
 * @param An integer parameter for status retrieval (usage context-specific).
 * 
 * @fn void Section::toggleAction()
 * @brief Toggles the action state of the section.
 * 
 * @fn void Section::turnOnAction()
 * @brief Turns on the action state of the section.
 * 
 * @fn void Section::turnOffAction()
 * @brief Turns off the action state of the section.
 */
class Section : public Group {
   protected:
	std::vector<unique_ptr<Group>> children;

   public:
	Section(std::string name);
	~Section();
	bool addGroup(Group* gr);
	bool destroyGroup();
	virtual std::vector<unique_ptr<Group>>& getChildren();
	virtual string getDeviceType();
	virtual void getStatus(int);
	virtual void toggleAction();
	virtual void turnOnAction();
	virtual void turnOffAction();
};

#endif
