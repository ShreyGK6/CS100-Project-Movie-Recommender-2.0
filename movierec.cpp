#include <iostream>
#include "movierec.h"
#include "database.h"
#include "preferences.h"
#include "movie.h"
#include "search.h"
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void MovieRec::movieRecommendationOverall(prefs options)
{
    vector<string> genre;
    options.getgenre(genre);
    int age = options.getage();
    vector<string> actor;
    options.getactor(actor);
    vector<string> director;
    options.getdirector(director);
    Database db;
    string filename = "/class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    bool loaded = db.loadFromTSV(filename);
    if (loaded == true) {
        vector<Movie> filteredMovies = db.filter(genre, age, actor, director, options);
        sort(filteredMovies.rbegin(), filteredMovies.rend());
        for (int i = 0; i < min((int)filteredMovies.size(), maxMovieShown); i++)
        {
            filteredMovies[i].display();
        }
    }
}

void MovieRec::movieRecByGenre(prefs options)
{
    vector<string> actor;
    vector<string> director;
    int age = options.getage();

    Database db;
    string filename = "/class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    bool loaded = db.loadFromTSV(filename);
    if (loaded == true){
        vector <string> genre;
        options.getgenre(genre);
        vector<Movie> genreFilteredMovies = db.filter(genre, age, actor, director, options);
        sort(genreFilteredMovies.rbegin(), genreFilteredMovies.rend());
        for (int i = 0; i < min((int)genreFilteredMovies.size(), maxMovieShown); i++)
        {
            genreFilteredMovies[i].display();
        }
    }
}

void MovieRec::movieRecommendationMaturityRating(prefs options) {
    int age = options.getage();
    Movie movie;
    bool valid = movie.isValidForAge(age, options);
    string maturityrating= movie.getMaturityRating();
    if (valid == true){
        Database db;
        string filename = "/class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
        bool loaded = db.loadFromTSV(filename);
        if (loaded == true) {
            vector<Movie> maturity = db.getMoviesbyMaturityRating(maturityrating);
            sort(maturity.rbegin(), maturity.rend());
            for (int i = 0; i < min((int)maturity.size(), maxMovieShown); i++)
            {
                maturity[i].display();
            }
        }
    }
    else {
        cout << "We couldn't find any movies for your age range." << endl;
        cout << endl;
    }
}

// string MovieRec::maturityrating(prefs options){
//     if (age > 0 && age < 10)
//     {
//         if (maturityRating == "G")
//         {
//             return true;
//         }
//     }
//     else if (age >= 10 && age < 13)
//     {
//         if (maturityRating == "G" or maturityRating == "PG")
//         {
//             return true;
//         }
//     }
//     else if (age >= 13 && age < 18)
//     {
//         if (maturityRating == "G" or maturityRating == "PG" or maturityRating == "PG-13")
//         {
//             return true;
//         }
//     }
//     else
//     {
//         return true;
//     }
//     return false;
// }

void MovieRec::movieRecommendationsearch(searchMovie find, prefs options) {
    vector<string> genre;
    find.getGenre(genre);
    int age = options.getage();
    vector<string> actor;
    find.getActor(actor);
    vector<string> director;
    find.getDirector(director);

    if (genre.size() == 0 && actor.size() == 0 && director.size() == 0) {
        cout << "No searches yet!" << endl;
        cout << "Please use the search function to get reccomendations for this category" << endl;
    }
    else {
    Database db;
    string filename = "/class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    bool loaded = db.loadFromTSV(filename);
    if (loaded == true) {
        vector<Movie> searches = db.filter(genre, age, actor, director, options);
        sort(searches.rbegin(), searches.rend());
        for (int i = 0; i < min((int)searches.size(), maxMovieShown); i++)
        {
            searches[i].display();
        }
        }
    }
}

void MovieRec::movieRecommendationoutput(prefs options){
    Database db;
    string filename = "/class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    bool loaded = db.loadFromTSV(filename);
    if (loaded == true) {
        char answer;
        searchMovie find;
        int checker = 0;

        do {
            cout << "---------- OVERALL ---------" << endl;
            movieRecommendationOverall(options);
            cout << "---------- GENRE ---------" << endl;
            movieRecByGenre(options);
            cout << "---------- MATURITY RATING ---------" << endl;
            movieRecommendationMaturityRating(options);
            cout << "---------- SEARCHES ---------" << endl;
            movieRecommendationsearch(find, options);
            cout << endl;
            cout << endl;
            cout << "If you would like to go back to the menu, please press m." << endl;
            if (answer != 'm' && checker >= 1) {
                cout << "Please input a valid response." << endl;
            }
            checker = checker + 1;
            cin >> answer;
        }
        while (answer != 'm');
    }
}



// void MovieRec::backToMenu()
// {
//     cout << "Do you want to go back to menu?" << endl;
//     cout << "- m for menu" << endl;
//     char input;
//     cin >> input;
//     if(input == 'r')
//     {
//         struct preferences preference;
//         movieRecommendationOverall(preference);
//         string genre;
//         movieRecByGenre(genre);
//     }
//     else if(input == 'm')
//     {
//         menu menuObject;
//         menuObject.display();
//     }
//     else
//     {
//         cout << endl << "You have selected an invalid input. Please select again." << endl;
//         backToMenu();
//     }
// }