#include <iostream>
#include "database.h" 
#include "search.h"
#include "movie.h"
// #include "menu.h"
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

searchMovie::searchMovie()
{}

void searchMovie::getGenre(vector<string> &newgenre)
{
    for (int i = 0; i < movie.genre.size(); i++) {
        newgenre.push_back(movie.genre.at(i));
    }
}

string searchMovie::getMaturityRating()
{
    return movie.maturityRating;
}

void searchMovie::getActor(vector<string> &newactor)
{
    for (int i = 0; i < movie.actor.size(); i++) {
        newactor.push_back(movie.actor.at(i));
    }
}

void searchMovie::getDirector(vector<string> &newdirector)
{
    for (int i = 0; i < movie.director.size(); i++) {
        newdirector.push_back(movie.director.at(i));
    }
}

int searchMovie::getDate()
{
    return movie.releaseDate;
}

double searchMovie::getRating()
{
    return movie.rating;
}

void searchMovie::outputOrError(vector<Movie> possibleSelections)
{
    if(possibleSelections.empty())
    {
        cout << endl << "Could not get any movies by that search." << endl;
    }
    else
    {
        for(int i = 0; i < possibleSelections.size(); i++)
        {
            possibleSelections[i].display();
        }
    }
}

void searchMovie::displayOptions()
{
    cout << "How do you want to search moves by? Here are the following options:" << endl;
    cout << "- g for genre" << endl;
    cout << "- m  for maturity rating" << endl;
    cout << "- a for actor" << endl;
    cout << "- d for director" << endl;
    cout << "- n for movie rating" << endl;
    cout << "- r for release date" << endl;
}

void searchMovie::otherPathways()
{
    // cout << "Do you want to search again or go back to menu?" << endl;
    // cout << "- s for movie searcher" << endl;
    // cout << "- m for menu" << endl;
    // char input;
    // cin >> input;
    // if(input == 's')
    // {
    //     searchMain();
    // }
    // else if(input == 'm')
    // {
    //     menu menuObject;
    //     userpass setup;
    //     prefs options;
    //     menuObject.display(setup, options);
    // }
    // else
    // {
    //     cout << endl << "You have selected an invalid input. Please select again." << endl;
    //     otherPathways();
    // }
    cout << "in menu" << endl;
}

char searchMovie::askingForOption()
{
    char userInput;
    displayOptions();
    cin >> userInput;
    cin.ignore();
    return userInput;
}

void searchMovie::searchMain()
{
    vector<Movie> possibleSelections;
    string filename = "/home/csmajs/skoth011/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    Database database;
    database.loadFromTSV(filename);
    char filterLetter = askingForOption();
    if(filterLetter == 'g')
    {
        vector<string> genreSelection;
        int numberOfStrings;
        cout << endl << "You have decided to find movies by genre. Please type in the number of genres you want to input:" << endl;
        cin >> numberOfStrings;
        cin.ignore();
        cout << "Please type in the genre(s) you wish to have movies on:" << endl;
        for(int i = 0; i < numberOfStrings; ++i) 
        {
            string inputString;
            getline(cin, inputString);
            cout << inputString << endl;
        }
        possibleSelections = database.getMoviesbyGenre(genreSelection);
        for (int i= 0; i < possibleSelections.size()-1; i++){
            possibleSelections[i].display();
            cout << endl;
        }
        outputOrError(possibleSelections);
    }
    else if(filterLetter == 'm')
    {
        string maturitySelection;
        int numberOfStrings;
        cout << endl << "You have decided to find movies by maturity rating. Please type in the maturity rating you wish to have movies on:" << endl;
        getline(cin, maturitySelection);        
        possibleSelections = database.getMoviesbyMaturityRating(maturitySelection);
        outputOrError(possibleSelections);
    }
    else if(filterLetter == 'a')
    {
        vector<string> actorSelection;
        int numberOfStrings;
        cout << endl << "You have decided to find movies by actor. Please type in the number of genres you want to input:" << endl;
        cin >> numberOfStrings;
        cin.ignore();
        cout << "Please type in the actor(s) you wish to have movies on:" << endl;
        for(int i = 0; i < numberOfStrings; ++i) 
        {
            string inputString;
            getline(cin, inputString);
            actorSelection.push_back(inputString);
        }
        possibleSelections = database.getMoviesbyActor(actorSelection);
        outputOrError(possibleSelections);
    }
    else if(filterLetter == 'n')
    {
        double movieRating;
        cout << endl << "You have decided to find movies by movie rating. Please type in the rating you wish to see movies on:" << endl;
        cin >> movieRating;
        possibleSelections = database.getMoviesbyRating(movieRating);
        outputOrError(possibleSelections);
    }
    else if(filterLetter == 'r')
    {
        int releaseDate;
        cout << endl <<  "You have decided to find movies by release date. Please type in the rating you wish to see movies on:" << endl;
        cin >> releaseDate;
        possibleSelections = database.getMoviesbyReleaseDate(releaseDate);
        outputOrError(possibleSelections);
    }
    else if(filterLetter == 'd')
    {
        vector<string> directorSelection;
        int numberOfStrings;
        cout << endl << "You have decided to find movies by director. Please type in the number of genres you want to input:" << endl;
        cin >> numberOfStrings;
        cin.ignore();
        cout << "Please type in the director(s) you wish to have movies on:" << endl;
        for(int i = 0; i < numberOfStrings; ++i) 
        {
            string inputString;
            getline(cin, inputString);
            directorSelection.push_back(inputString);
        }
        possibleSelections = database.getMoviesbyActor(directorSelection);
        outputOrError(possibleSelections);
    }
    else
    {
        cout << endl << "You have entered an invalid input. Please select again." << endl << endl;
        searchMain();
    }
    cout << endl;
    otherPathways();
}