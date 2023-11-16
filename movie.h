#ifndef __MOVIE_H
#define __MOVIE_H
#include <iostream>
#include <vector>
using namespace std;

class Movie {
    public:
        string genre; 
        string maturityRating;
        string actor;
        string director;
        int releaseDate;
        string title;
        double rating;
        Movie();
        Movie(string title, int releaseDate, double rating, string maturityRating, string genre,  string actor, string director );
        void display();
        vector <string> getGenre();
        vector <string> getActor();
        vector <string> getDirector(); 
        string getMaturityRating();
        int getReleaseDate();
        double getRating();

};

#endif