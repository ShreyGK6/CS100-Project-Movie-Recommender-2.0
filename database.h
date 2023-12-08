#ifndef __DATABASE_H
#define __DATABASE_H
#include <vector>
#include <string>
#include <iostream>
#include "movie.h"
#include "preferences.h"
using namespace std;

class Database
{
private:
    vector<Movie> movies;

public:
    bool loadFromTSV(string &filename);
    void displayMovies();
    vector<Movie> getMoviesbyGenre(vector<string> genre);
    vector<Movie> getMoviesbyActor(vector <string> actor);
    vector<Movie> getMoviesbyDirector(vector <string> director);
    vector<Movie> getMoviesbyMaturityRating(string maturityRating);
    vector<Movie> getMoviesbyReleaseDate(int releaseDate);
    vector<Movie> getMoviesbyRating(double rating);
    void insert(Movie movie);
    vector<Movie> filter(vector <string> genre, int age, vector <string> actor, vector <string> director, prefs options);
};

#endif