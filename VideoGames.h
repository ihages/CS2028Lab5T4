#ifndef __MOVIES_HPP
#define __MOVIES_HPP
#include <iostream>

class VideoGames {
private:
    std::string title;
    int playtime; //Total play time of the video game

public:
    //Getters
    int getPlayTime() const { return playtime; }
    std::string getTitle() const { return title; }

    //Setters
    void setPlayTime(int newPlayTime) { playtime = newPlayTime; }

    //Constructors
    VideoGames() : title(""), playtime(0) {}   //Default Constructor

    VideoGames(std::string newTitle) : title(newTitle), playtime(0) {}

    //Functions
    void Play();

};

#endif
