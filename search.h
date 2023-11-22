#ifndef __SEARCH_H__
#define __SEARCH_H__
#include <string>
#include <iostream>
#include "database.h"
#include "movie.h"
using namespace std;

struct searching
{
    string genre;
    string maturityRating;
    string actor;
    string director;
    int releaseDate;
    double rating;
    searching() : genre(""), maturityRating(""), actor(""), director(""), releaseDate(0), rating(0.0){}
};

class searchMovie
{
    public:
    searching movie;
    searchMovie();
    void displayOptions();
    void searchMain();
    char askingForOption();
    void otherPathways();
    void outputOrError(vector<Movie> possibleSelections);

    private:
    string getGenre();
    string getMaturityRating();
    string getActor();
    string getDirector();
    int getDate();
    double getRating();
};

#endif