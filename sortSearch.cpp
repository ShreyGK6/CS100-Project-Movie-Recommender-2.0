#include <string>
#include <iostream>
#include <algorithm>
#include "search.h"
#include "sortSearch.h"
#include "database.h"
using namespace std;

bool sortSearch::compareMoviesByReleaseDate(Movie firstMovie, Movie secondMovie) {
    return firstMovie.getReleaseDate() < secondMovie.getReleaseDate();
}

vector<int> sortSearch::sortByReleaseDate() {
    // Make a copy of the movies vector to preserve the original order
    vector<Movie> sortedMovies = movies;

    // Sort movies by release date using the defined comparison function
    sort(sortedMovies.begin(), sortedMovies.end(), compareMoviesByReleaseDate);

    // Populate the vector with release dates
    vector<int> sortedMoviesByYear;
    for (int i = 0; i < sortedMovies.size(); i++) {
        sortedMoviesByYear.push_back(sortedMovies[i].getReleaseDate());
    }

    // Return the vector containing release dates, now sorted
    return sortedMoviesByYear;
}

bool sortSearch::compareMoviesByRating(Movie firstMovie, Movie secondMovie) {
    return firstMovie.getRating() < secondMovie.getRating();
}

vector<double> sortSearch::sortByRating() {
    // Make a copy of the movies vector to preserve the original order
    vector<Movie> sortedMovies = movies;

    // Sort movies by rating using the defined comparison function
    sort(sortedMovies.begin(), sortedMovies.end(), compareMoviesByRating);

    // Populate the vector with ratings
    vector<double> sortedMoviesByRating;
    for (int i = 0; i < sortedMovies.size(); i++) {
        sortedMoviesByRating.push_back(sortedMovies[i].getRating());
    }

    // Return the vector containing ratings, now sorted
    return sortedMoviesByRating;
}

void sortSearch::sortDisplay() {
    // Assume movies is a member variable of sortSearch class
    // and it contains the list of movies you want to sort
    sortByReleaseDate();
    cout << "Movies have been sorted by Release Date." << endl;

    sortByRating();
    cout << "Movies have been sorted by Rating." << endl;
}