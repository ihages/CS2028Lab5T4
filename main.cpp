#include "VideoGames.h"
#include "EntertainmentCollection.h"

#include <iostream>
#include <string>

int main() {
	
	EntertainmentCollection<VideoGames> shelf;
	while (true) {
		std::cout << "\n1. Add a video game to the shelf\n2. Remove a video game from the shelf\n3. See how many video games are currently on the shelf\n4. Quit" << std::endl;
		int opChoice = 0;
		
		opChoice = 0;
		std::cin >> opChoice;
		if (opChoice == 1) {
			//add video game
			try {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Igitnore '\n' for getline
				std::cout << "\nWhat is the title of the video game you would like to add?" << std::endl;
				std::string title;
				std::getline(std::cin,title);
				VideoGames *videogame = new VideoGames(title);	//Dynamically create a new video game
				shelf.addItem(*videogame);
				std::cout << title << " was added to the shelf." << std::endl;
			}
			catch (FullShelf) {
				std::cout << "Tried adding too many video games to the entertainment collection. Try removing a video game before adding another." << std::endl;
			}

		}
		else if (opChoice == 2) {
			//remove video game
			try {
				std::cout << "\nRemoved " << shelf.remItem().getTitle() << " from the shelf." << std::endl;
			}
			catch(EmptyShelf) {
				std::cout << "Tried removing a video game when there are no video games in the entertainment collection. Please add a video game before trying to remove." << std:: endl;
			}
			
		}
		else if (opChoice == 3) {
			//count video games
			std::cout << "\nThere are " << shelf.getIndex() << " video games in the shelf." << std::endl;
		}
		else if (opChoice == 4) {
			//exit the program
			return 0;	
		}
		else {
			std::cout << "\nInvalid input. Please choose a number from the list." << std::endl;
		}
	}
	return 0;
}
