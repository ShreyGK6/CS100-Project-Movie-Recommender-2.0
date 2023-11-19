#ifndef __SEARCH_H__
#define __SEARCH_H__
#include <string>
#include <iostream>
#include "database.h"
#include "movie.h"
using namespace std;

class searchMovie
{
    public:
    searchMovie();
    void displayOptions();
    vector<Movie> searchMain();
    char askingForOption();
};

#endif