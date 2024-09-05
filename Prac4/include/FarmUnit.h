#ifndef  FARMUNIT_H
#define  FARMUNIT_H

class  FarmUnit  {
public:
     FarmUnit ();
    ~ FarmUnit ();
    
    virtual bool add(FarmUnit* add);
    virtual bool remove(FarmUnit* remove);
    virtual void storeCrops(int store);
    virtual int getTotalCapacity();
protected:
    int capacity;
};

#endif //  FARMUNIT_H
