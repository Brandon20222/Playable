#include <iostream>
#include "Playable.h"
#include "Record.h"
#include "Movie.h"
#include "Game.h"
#include <vector>
#include <string>
using namespace std;

int main() {
	
	
	
	//Playable* record = new Record("Cheznut", tracks);


	Playable** items = new Playable * [3];
	//Playable* movie = new Movie("Five Finger Doom", "Horror", 1996, "Todd Fisch", "A movie about a serial killer in the woods stalking new arrivals");
	items[1] = new Movie("Five Finger Doom", "Horror", 1996, "Todd Fisch", "A movie about a serial killer in the woods stalking new arrivals");
	items[1]->play();
	cout << endl;

	//Playable* game = new Game("Medieval Conquest", "Medieval Era", 20, "Capture other teams kingdom", 30);
	items[2] = new Game("Medieval Conquest", "Medieval Era", 20, "Capture other teams kingdom", 30);
	items[2]->play();
	cout << endl;

	vector <string> tracks;
	tracks.push_back("Shalt heights");
	tracks.push_back("Salty ridges");
	items[3] = new Record("Cheznut", tracks);
	items[3]->play();

}

