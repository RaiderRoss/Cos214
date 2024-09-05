#ifndef  FARMUNIT_H
#define  FARMUNIT_H

class  FarmUnit  {
public:
     FarmUnit ();
    ~ FarmUnit ();
        int capacity;
    virtual bool add(FarmUnit* add);
    virtual bool remove(FarmUnit* remove);
    virtual void storeCrops(int store);
    virtual int getTotalCapacity();
};

#endif //  FARMUNIT_H
