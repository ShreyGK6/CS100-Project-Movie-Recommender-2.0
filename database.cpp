#include <iostream>
#include "database.h"
#include "movie.h"
#include "preferences.h"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

bool Database::loadFromTSV(string &filename)
{
    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Error opening file: " << filename << endl;
        return false;
    }
    else {
        string line;
        while (getline(file, line))
        {
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
                getline(istrings, director, '\t'))
            {
                Movie movie(title, releaseDate, rating, maturityRating, genre, actor, director);
                movies.push_back(movie);
            }
        }
        return true;
    }
}

void Database::displayMovies()
{
    for (int i = 0; i < movies.size(); i++)
    {
        movies[i].display();
    }
}

vector<Movie> Database::getMoviesbyGenre(vector<string> genre)
{
    vector<Movie> genreSpecificMovie;
    for (int i = 0; i < movies.size(); i++)
    {
        vector<string> genres = movies[i].getGenre();
        for (string eachGenre : genres)
        {
            if (find(genre.begin(), genre.end(), eachGenre) != genre.end())
            {
                genreSpecificMovie.push_back(movies[i]);
            }
        }
    }
    return genreSpecificMovie;
}

vector<Movie> Database::getMoviesbyActor(vector<string> actor)
{
    vector<Movie> actorSpecificMovie;
    for (int i = 0; i < movies.size(); i++)
    {
        vector<string> actors = movies[i].getActor();
        for (string eachActor : actors)
        {
            if (find(actor.begin(), actor.end(), eachActor) != actor.end())
            {
                actorSpecificMovie.push_back(movies[i]);
            }
        }
    }
    return actorSpecificMovie;
}

vector<Movie> Database::getMoviesbyDirector(vector<string> director)
{
    vector<Movie> directorSpecificMovie;
    for (int i = 0; i < movies.size(); i++)
    {
        vector<string> directors = movies[i].getDirector();
        for (string eachDirector : directors)
        {
            if (find(director.begin(), director.end(), eachDirector) != director.end())
            {
                directorSpecificMovie.push_back(movies[i]);
            }
        }
    }
    return directorSpecificMovie;
}

vector<Movie> Database::getMoviesbyMaturityRating(string maturityRating)
{
    vector<Movie> maturityRatingSpecificMovie;
    for (int i = 0; i < movies.size(); i++)
    {
        if (movies[i].getMaturityRating() == maturityRating)
        {
            maturityRatingSpecificMovie.push_back(movies[i]);
        }
    }
    return maturityRatingSpecificMovie;
}

vector<Movie> Database::getMoviesbyReleaseDate(int releaseDate)
{
    vector<Movie> releaseDateSpecificMovie;
    for (int i = 0; i < movies.size(); i++)
    {
        if (movies[i].getReleaseDate() == releaseDate)
        {
            releaseDateSpecificMovie.push_back(movies[i]);
        }
    }
    return releaseDateSpecificMovie;
}

vector<Movie> Database::getMoviesbyRating(double rating)
{
    vector<Movie> ratingSpecificMovie;
    for (int i = 0; i < movies.size(); i++)
    {
        if (movies[i].getRating() == rating)
        {
            ratingSpecificMovie.push_back(movies[i]);
        }
    }
    return ratingSpecificMovie;
}

void Database::insert(Movie movie)
{
    movies.push_back(movie);
}

vector<Movie> Database::filter(vector <string> genre, int age, vector <string> actor, vector <string> director, prefs options)
{
    vector<Movie> filteredMovies;
    for (int i = 0; i < movies.size(); i++)
    {
        int matched = 0;
        if (movies[i].isValidForAge(age, options) == true)
        {        
            vector<string> genres = movies[i].getGenre();
            for (string eachGenre : genres)
            {
                // if (eachGenre == genre)
                if (find(genre.begin(), genre.end(), eachGenre) != genre.end())
                {
                    matched++;
                }
            }
            if (actor.size() != 0) {
                vector<string> actors = movies[i].getActor();
                for (string eachActor : actors)
                {
                    // if (eachActor == actor)
                    if (find(actor.begin(), actor.end(), eachActor) != actor.end())
                    {
                        matched++;
                    }
                }
            }
            if (director.size() != 0) {
                vector<string> directors = movies[i].getDirector();
                for (string eachDirector : directors)
                {
                    // if (eachDirector == director)
                    if (find(director.begin(), director.end(), eachDirector) != director.end())
                    {
                        matched++;
                    }
                }
            }
            if (actor.size()==0 && director.size()==0) {
                if (matched == 1) {
                    filteredMovies.push_back(movies[i]);
                }
            }
            else if (actor.size()==0 || director.size()==0) {
                if (matched == 2) {
                    filteredMovies.push_back(movies[i]);
                }
            }
            else if (actor.size() > 0 && director.size() > 0){
                if (matched >= 2)
                {
                    filteredMovies.push_back(movies[i]);
                }
            }
        
        }

    }
    return filteredMovies;
}
