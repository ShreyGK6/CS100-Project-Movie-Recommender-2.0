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
    void sortByReleaseDate();
    void sortByRating();
    void sortDisplay();

private: 
vector <Movie> movies;
};

#endif