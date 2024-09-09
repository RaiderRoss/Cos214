#ifndef ITERATOR_H
#define ITERATOR_H

class FarmUnit; 
class Iterator {
   protected:
	FarmUnit* current;

   public:
	Iterator();
	virtual ~Iterator();
	virtual FarmUnit* firstFarm() = 0;
	virtual FarmUnit* currentFarm() = 0;
	bool isDone();
	virtual FarmUnit* next() = 0;
};

#endif	// ITERATOR_H