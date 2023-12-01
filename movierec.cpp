#include <iostream>
#include "movierec.h"
#include "database.h"
#include "preferences.h"
#include "movie.h"
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
    string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    db.loadFromTSV(filename);
    // cout << "read from db" << endl;
    vector<Movie> filteredMovies = db.filter(genre, age, actor, director);
    sort(filteredMovies.rbegin(), filteredMovies.rend());
    for (int i = 0; i < min((int)filteredMovies.size(), maxMovieShown); i++)
    {
        filteredMovies[i].display();
    }
}

void MovieRec::movieRecByGenre(prefs options)
{
    vector <string> genre;
    options.getgenre(genre);
    Database db;
    string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    db.loadFromTSV(filename);
    vector<Movie> genreFilteredMovies = db.getMoviesbyGenre(genre);
    sort(genreFilteredMovies.rbegin(), genreFilteredMovies.rend());
    for (int i = 0; i < min((int)genreFilteredMovies.size(), maxMovieShown); i++)
    {
        genreFilteredMovies[i].display();
    }
}

void MovieRec::movieRecommendationMaturityRating(prefs options) {
    int age = options.getage();
    Movie movie;
    bool valid = movie.isValidForAge(age);
    string maturityrating= movie.getMaturityRating();
    if (valid == true){
        Database db;
        string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
        db.loadFromTSV(filename);
        vector<Movie> maturity = db.getMoviesbyMaturityRating(maturityrating);
        sort(maturity.rbegin(), maturity.rend());
        for (int i = 0; i < min((int)maturity.size(), maxMovieShown); i++)
    {
        maturity[i].display();
    }
    }
    else {
        cout << "We couldn't find any movies for your age range." << endl;
    }
}

void MovieRec::movieRecommendationoutput(){
    Database db;
    string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    db.loadFromTSV(filename);

    char answer;
    prefs options;
    int checker = 0;

    do {
        movieRecommendationOverall(options);
        movieRecByGenre(options);
        movieRecommendationMaturityRating(options);
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