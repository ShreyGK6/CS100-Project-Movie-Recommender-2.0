#ifndef __DATABASE_H
#define __DATABASE_H
#include <vector>
#include <string>
#include "movie.h"
using namespace std;

class Database {
    private:
        vector <Movie> movies;
    public:
        void loadFromTSV(string &filename);
        void displayMovies();
        // vector <Movie> getMoviesbyGenre(string genre);
        // vector <Movie> getMoviesbyMaturityRating(string maturityRating);
        // vector <Movie> getMoviesbyActor(string actor);
        // vector <Movie> getMoviesbyDirector(string director);
        // vector <Movie> getMoviesbyReleaseDate(string releaseDate);
        // vector <Movie> getMoviesbyRating(string rating);

};

#endif