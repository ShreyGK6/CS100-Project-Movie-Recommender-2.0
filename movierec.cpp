#include <iostream>
#include "movierec.h"
#include "database.h"
#include "settings.h"
#include "start.h"
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void MovieRec::movieRecommendationOverall(struct preferences preference)
{
    string genre = preference.genre;
    int age = preference.age;
    string actor = preference.actor;
    string director = preference.director;
    Database db;
    string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    db.loadFromTSV(filename);
    vector<Movie> filteredMovies = db.filter(genre, age, actor, director);
    sort(filteredMovies.rbegin(), filteredMovies.rend());
    for (int i = 0; i < min((int)filteredMovies.size(), maxMovieShown); i++)
    {
        filteredMovies[i].display();
    }
}

void MovieRec::movieRecByGenre(string genre)
{
    Database db;
    string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    db.loadFromTSV(filename);
    vector<Movie> genreFilteredMovies = db.getMoviesbyGenre(genre);
    for (int i = 0; i < min((int)genreFilteredMovies.size(), maxMovieShown); i++)
    {
        genreFilteredMovies[i].display();
    }
}
