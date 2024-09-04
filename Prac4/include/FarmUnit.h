#ifndef  FARMUNIT_H
#define  FARMUNIT_H

class  FarmUnit  {
public:
     FarmUnit ();
    ~ FarmUnit ();
protected:
    int capacity;
    virtual bool add();
    virtual bool remove();
};

#endif //  FARMUNIT_H
