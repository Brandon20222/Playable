#include "Movie.h"

// Constructors
Movie::Movie() {
	name = "Unkown";
	genre = "Unkown";
	year = 1980;
	director = "Unkown";
	plot = "Unkown";
}
Movie::Movie(string name, string genre, int year, string director, string plot) {
	this->name = name;
	this->genre = genre;
	this->year = year;
	this->director = director;
	this->plot = plot;
}
// Getters and setters
string Movie::getName() {
	return name;
}
string Movie::getGenere() {
	return genre;
}
int Movie::getYear() {
	return year;
}
string Movie::getDirector() {
	return director;
}
string Movie::getPlot() {
	return plot;
}
void Movie::setName(string name) {
	this->name = name;
}
void Movie::setGenre(string genre) {
	this->genre = genre;
}
void Movie::setYear(int year) {
	this->year = year;
}
void Movie::setDirector(string director) {
	this->director = director;
}
void Movie::setPlot(string plot) {
	this->plot = plot;
}
//Overrided play function
void Movie::play() {
	cout << "Movie name: " << getName() << endl
		<< "Genre: " << getGenere() << endl
		<< "Year: " << getYear() << endl
		<< "Director: " << getDirector() << endl
		<< "Plot: " << getPlot() << endl;
}
