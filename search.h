#ifndef __SEARCH_H__
#define __SEARCH_H__
#include <string>
#include <iostream>
#include "database.h"
#include "movie.h"
using namespace std;

struct searching
{
    vector<string> genres;
    string maturityRating;
    vector<string> actors;
    vector<string> directors;
    int releaseDate;
    double rating;
    searching() : maturityRating(""), releaseDate(-1), rating(-1.0){}
};

class searchMovie
{
    friend class MovieRec;
    public:
    searching recs;
    void displayOptions();
    void searchMain(searchMovie &find);
    char askingForOption();
    void outputOrError(vector<Movie> possibleSelections);

    private:
    void getGenres(vector<string> &newgenre);
    string getMaturityRating();
    void getActor(vector<string> &newactor);
    void getDirector(vector<string> &newdirector);
    int getDate();
    double getRating();
    vector<Movie> possibleSelections;
};

#endif