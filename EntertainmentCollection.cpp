#include "EntertainmentCollection.h"

template<class T> 
void EntertainmentCollection<T>::addItem(T inItem) {
	if (index < SIZE) {
		items[index] = inItem;
		index++;
	} else {
		throw FullShelf("Full Entertainment Collection",0);
	}
}

template<class T> 
T EntertainmentCollection<T>::remItem() {
	if (index > 0) {
		index--;
		return items[index];
	} else {
		throw EmptyShelf("Empty Entertainment Collection", 1);
	}
}

template<class T> 
bool const EntertainmentCollection<T>::isEmpty(){
	return index == 0;
}

template<class T> 
bool const EntertainmentCollection<T>::isFull(){
	return index == SIZE;
}


template class EntertainmentCollection<VideoGames>;
