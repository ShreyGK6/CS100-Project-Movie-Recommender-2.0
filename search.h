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
    void searchMain();
    char askingForOption();
};

#endif