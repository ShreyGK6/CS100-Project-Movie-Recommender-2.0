#ifndef __SORTSEARCH_H__
#define __SORTSEARCH_H__
#include <iostream>
#include <string>
#include <vector>
#include "search.h"
using namespace std;

class sortSearch {
public:
    sortSearch();
    static bool compareMoviesByReleaseDate(Movie firstMovie, Movie secondMovie);
    static bool compareMoviesByRating(Movie firstMovie, Movie secondMovie);
    vector <int> sortByReleaseDate();
    vector <double> sortByRating();
    void sortDisplay();

private: 
vector <Movie> movies;
};

#endif