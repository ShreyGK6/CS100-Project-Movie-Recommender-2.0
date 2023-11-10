#include <iostream>
#include "database.h" 
#include "movie.h"
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

void Database::loadFromTSV(string &filename) {
    ifstream file(filename);
    
    if (!file.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        string genre, maturityRating, actor, director, title, temp;
        int releaseDate;
        double rating;
        istringstream istrings(line);
        if (getline(istrings, title, '\t') &&
            (istrings >> releaseDate) &&
            (istrings >> rating) &&
            getline(istrings, temp, '\t') &&
            getline(istrings, maturityRating, '\t') &&
            getline(istrings, genre, '\t') &&
            getline(istrings, actor, '\t') &&
            getline(istrings, director, '\t')) {
            Movie movie(title, releaseDate, rating, maturityRating, genre, actor, director);
            movies.push_back(movie);
        }
    }
}

    void Database::displayMovies(){
        for (int i = 0; i < movies.size(); i++){
            movies[i].display();
        }
    }

    // vector <Movie> Database::getMoviesbyGenre(string genre){
    //     vector <Movie> genreSpecificMovie;
    //     for (int i = 0; i < movies.size(); i++){
    //         vector <string> genres = movies[i].getGenre();
    //         for (string eachGenre: genres){
    //             if (eachGenre == genre){
    //                 genreSpecificMovie.push_back(movies[i]);
    //             }
    //         }
    //     }
    // }

    // vector <Movie> Database::getMoviesbyActor(string actor){
    //     vector <Movie> actorSpecificMovie;
    //     for (int i = 0; i < movies.size(); i++){
    //         vector <string> actors = movies[i].getActor();
    //         for (string eachActor: actors){
    //             if (eachActor == actor){
    //                 actorSpecificMovie.push_back(movies[i]);
    //             }
    //         }
    //     }
    // }

    // vector <Movie> Database::getMoviesbyDirector(string director){
    //     vector <Movie> directorSpecificMovie;
    //     for (int i = 0; i < movies.size(); i++){
    //         vector <string> directors = movies[i].getDirector();
    //         for (string eachDirector: directors){
    //             if (eachDirector == director){
    //                 directorSpecificMovie.push_back(movies[i]);
    //             }
    //         }
    //     }
    // }

    // vector <Movie> Database::getMoviesbyMaturityRating(string &maturityRating){
    //     vector <Movie> maturityRatingSpecificMovie;
    //     for (int i = 0; i < movies.size(); i++){
    //         if (movies[i].getMaturityRating() == maturityRating){
    //             maturityRatingSpecificMovie.push_back(movies[i]);
    //         }
    //     }
    // }

    // vector <Movie> Database::getMoviesbyReleaseDate(string releaseDate){
    //     vector <Movie> releaseDateSpecificMovie;
    //     for (int i = 0; i < movies.size(); i++){
    //         if (movies[i].getReleaseDate() == releaseDate){
    //             releaseDateSpecificMovie.push_back(movies[i]);
    //         }
    //     }
    // }

    // vector <Movie> Database::getMoviesbyRating(string rating){
    //     vector <Movie> ratingSpecificMovie;
    //     for (int i = 0; i < movies.size(); i++){
    //         if (movies[i].getRating() == rating){
    //             ratingSpecificMovie.push_back(movies[i]);
    //         }
    //     }
    // }