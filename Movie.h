#ifndef MOVIE_H
#define MOVIE_H
#include "Playable.h"
#include <iostream>
using namespace std;

class Movie :
    public Playable
{
private:
    string name;
    string genre;
    int year;
    string director;
    string plot;
public:
    // Constructors
    Movie();
    Movie(string name, string genre, int year, string director, string plot);
    // Getters and setters
    string getName();
    string getGenere();
    int getYear();
    string getDirector();
    string getPlot();
    void setName(string name);
    void setGenre(string genre);
    void setYear(int year);
    void setDirector(string director);
    void setPlot(string plot);
    //Overrided play function
    void play()override;



};

#endif


