#ifndef __DATABASE_H
#define __DATABASE_H
#include <vector>
#include <string>
#include <iostream>
#include "movie.h"
using namespace std;

class Database
{
private:
    vector<Movie> movies;

public:
    void loadFromTSV(string &filename);
    void displayMovies();
    vector<Movie> getMoviesbyGenre(string genre);
    vector<Movie> getMoviesbyActor(string actor);
    vector<Movie> getMoviesbyDirector(string director);
    vector<Movie> getMoviesbyMaturityRating(string maturityRating);
    vector<Movie> getMoviesbyReleaseDate(int releaseDate);
    vector<Movie> getMoviesbyRating(double rating);
    void insert(Movie movie);
    vector<Movie> filter(string genre, int age, string actor, string director);
};

#endif