#ifndef DEVICE_H
#define DEVICE_H
#include "Group.h"
#include "Locked.h"
#include "Off.h"
#include "On.h"
#include "Unlocked.h"
class device : public Group {
   protected:
	State* state;

   public:
	device(std::string name);

	virtual ~device();
	virtual std::vector<unique_ptr<Group>>& getChildren();

	virtual void getStatus(int) = 0;

	virtual void toggleAction() = 0;
	virtual void turnOnAction() = 0;
	virtual void turnOffAction() = 0;

	virtual string getDeviceType() = 0;

	void setState(State* s);
};

#endif
