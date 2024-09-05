#ifndef Truck_H
#define Truck_H
class TruckerMan
{
private:
    /* data */
public:
    TruckerMan();
    virtual ~TruckerMan();
    virtual void update() = 0;
};

#endif