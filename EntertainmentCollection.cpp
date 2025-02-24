#include "EntertainmentCollection.h"



template<class T> 
void EntertainmentCollection<T>::addItem(T inItem) {
	if (index < SIZE) {
		items[index] = inItem;
		index++;
	}
	throw FullShelf("Full Shelf",0);
}

template<class T> 
T EntertainmentCollection<T>::remItem() {
	if (index > 0) {
		index--;
		return items[index];
	}
	throw EmptyShelf("Empty Shelf", 1);
}

template<class T> 
bool const EntertainmentCollection<T>::isEmpty(){
	return index == 0;
}

template<class T> 
bool const EntertainmentCollection<T>::isFull(){
	return index == SIZE;
}

void decShelf(){
	EntertainmentCollection<Movies> shelf;
}

