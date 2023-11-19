#ifndef __SEARCH_H__
#define __SEARCH_H__
#include <string>
#include <iostream>
#include "database.h"
using namespace std;

class searchMovie
{
    private:

    public:
    searchMovie();
    void displayOptions();
    void searchMain();
    char askingForOption();
};

#endif