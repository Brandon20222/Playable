#include "Game.h"
#include <iostream>
using namespace std;

// Constructors
Game::Game() {
	name = "Unkown";
	genre = "Unkown";
	numPlayers = 0;
	winCondition = "None";
	playTime = 0;
}
Game::Game(string name, string genre, int numPlayers, string winCondition, int playTime) {
	this->name = name;
	this->genre = genre;
	this->numPlayers = numPlayers;
	this->winCondition = winCondition;
	this->playTime = playTime;
}
// Getters and Setters
string Game::getName() {
	return name;
}
string Game::getGenre() {
	return genre;
}
int Game::getNumPlayers(){
	return numPlayers;
}
string Game::getWinCondition(){
	return winCondition;
}
int Game::getPlayTime() {
	return playTime;
}
void Game::setName(string name) {
	this->name = name;
}
void Game::setGenre(string genre) {
	this->genre = genre;
}
void Game::setNumPlayers(int numPlayers) {
	this->numPlayers = numPlayers;
}
void Game::setWinCondition(string winCondition) {
	this->winCondition = winCondition;
}
void Game::setPlayTime(int playTime) {
	this->playTime = playTime;
}
// Overrided function
void Game::play() {
	cout << "Game name: " << getName() << endl
		<< "Genre: " << getGenre() << endl
		<< "Number of Players: " << getNumPlayers() << endl
		<< "Win Condition: " << getWinCondition() << endl
		<< "Play Time: " << getPlayTime() << endl;
}