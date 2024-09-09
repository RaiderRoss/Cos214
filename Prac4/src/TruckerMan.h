#ifndef Truck_H
#define Truck_H

class FarmUnit;
class TruckerMan
{
private:
    /* data */
public:
    TruckerMan();
    virtual ~TruckerMan();
    virtual void update(FarmUnit * unit) = 0;
};

#endif