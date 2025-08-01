#ifndef RECORD_H
#define RECORD_H
#include "Playable.h"
#include <iostream>
#include <vector>
using namespace std;

class Record :
    public Playable
{
private:
    string artist;
    vector <string> tracks;
public:
    // Constructors
    Record();
    Record(string artist, vector <string> tracks);
    //Getters and setters
    string getArtist()const;
    vector<string> getTracks();
    void setArtist(string artist);
    void setTracks(vector <string> tracks);
    // Overrided function
    void play() override;

};

#endif

