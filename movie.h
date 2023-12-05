#ifndef __MOVIE_H
#define __MOVIE_H
#include <iostream>
#include <vector>
#include "preferences.h"
using namespace std;

class Movie
{
public:
    string genre;
    string maturityRating;
    string actor;
    string director;
    int releaseDate;
    string title;
    double rating;
    Movie();
    Movie(string title, int releaseDate, double rating, string maturityRating, string genre, string actor, string director);
    void display() const;
    vector<string> getGenre();
    vector<string> getActor();
    vector<string> getDirector();
    string getMaturityRating();
    int getReleaseDate();
    double getRating();
    bool isValidForAge(int age, prefs options);
    bool operator<(Movie other);
    void setMaturity(prefs options);
};

#endif