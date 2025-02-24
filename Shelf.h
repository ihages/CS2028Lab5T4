#ifndef __SHELF_HPP
#define __SHELF_HPP
#include "Movies.h"
#include "Exceptions.h"

const int SIZE = 10;

class Shelf {
private:
	Movies items[SIZE];
	int index = 0; //current highest point of the shelf

public:

	int getIndex() { return index; }
	
	//Functions
	void addMovie(Movies inMovie);

	Movies remMovie();

	bool const isEmpty();

	bool const isFull();
};

#endif
