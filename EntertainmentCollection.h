#ifndef __ENTERTAINMENTCOLLECTION_HPP
#define __ENTERTAINMENTCOLLECTION_HPP
#include "Exceptions.h"
#include "VideoGames.h"

const int SIZE = 10;

template <class T> 
class EntertainmentCollection {
private:
	T items[SIZE];
	int index = 0; //current highest point of the shelf

public:

	int getIndex() { return index; }
	
	//Functions
	void addItem(T inItem);

	T remItem();

	bool const isEmpty();

	bool const isFull();

};

#endif
