#ifndef __SEARCH_H__
#define __SEARCH_H__
#include <string>
#include <iostream>
#include "database.h"
#include "movie.h"
using namespace std;

struct searching
{
    vector<string> genre;
    string maturityRating;
    vector<string> actor;
    vector<string> director;
    int releaseDate;
    double rating;
    searching() :maturityRating(""), releaseDate(-1), rating(-1.0){}
};

class searchMovie
{
    public:
    friend class MovieRec;
    searching recs;
    searchMovie();
    void displayOptions();
    void searchMain();
    char askingForOption();
    // void otherPathways();
    void outputOrError(vector<Movie> possibleSelections);

    private:
    void getGenre(vector<string> &newgenre);
    string getMaturityRating();
    void getActor(vector<string> &newactor);
    void getDirector(vector<string> &newdirector);
    int getDate();
    double getRating();
    vector<Movie> possibleSelections;
};

#endif