#ifndef GAME_H
#define GAME_H
#include "Playable.h"
#include <iostream>
using namespace std;

class Game :
    public Playable
{
private:
    string name;
    string genre;
    int numPlayers;
    string winCondition;
    int playTime;
public:
    // Constructors
    Game();
    Game(string name, string genre, int numPlayers, string winCondition, int playTime);
    // Getters and Setters
    string getName();
    string getGenre();
    int getNumPlayers();
    string getWinCondition();
    int getPlayTime();
    void setName(string name);
    void setGenre(string genre);
    void setNumPlayers(int numPlayers);
    void setWinCondition(string winCondition);
    void setPlayTime(int playTime);
    // Overrided function
    void play();

};

#endif

