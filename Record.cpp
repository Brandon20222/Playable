#include "Record.h"

// Constructors
Record::Record() {
	artist = "Unknown";
	tracks.push_back("Placeholder1");
	tracks.push_back("Placeholder2");

}
Record::Record(string artist, vector <string> tracks) {
	this->artist = artist;
	this->tracks = tracks;
}

//Getters and setters
string Record::getArtist()const {
	return artist;
}
vector<string> Record::getTracks() {
	return tracks;
}
void Record::setArtist(string artist) {
	this->artist = artist;
}
void Record::setTracks(vector <string> tracks) {
	this->tracks = tracks;
}
// Overrided function
void Record::play() {
	for (int i = 0; i < tracks.size(); i++) {
		cout << getArtist() << "Track " << (i + 1) << ": " << tracks[i] << endl;
	}
}