#include "Shelf.h"

void Shelf::addMovie(Movies inMovie) {
	if (index < SIZE) {
		items[index] = inMovie;
		index++;
	}
	throw FullShelf("Full Shelf",0);
}

Movies Shelf::remMovie() {
	if (index > 0) {
		index--;
		return items[index];
	}
	throw EmptyShelf("Empty Shelf", 1);
}

bool const Shelf::isEmpty(){
	return index == 0;
}

bool const Shelf::isFull(){
	return index == SIZE;
}
