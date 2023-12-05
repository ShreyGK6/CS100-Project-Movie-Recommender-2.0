#include <iostream>
#include "database.h" 
#include "search.h"
#include "movie.h"
#include "menu.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

searchMovie::searchMovie()
{}

void searchMovie::getGenre(vector<string> &newgenre)
{
    cout << "in genre" << endl;
    cout << recs.genre.size() << endl;
    for (int i = 0; i < recs.genre.size(); i++) {
        cout << "in for" << endl;
        newgenre.push_back(recs.genre.at(i));
    }
}

string searchMovie::getMaturityRating()
{
    return recs.maturityRating;
}

void searchMovie::getActor(vector<string> &newactor)
{
    for (int i = 0; i < recs.actor.size(); i++) {
        newactor.push_back(recs.actor.at(i));
    }
}

void searchMovie::getDirector(vector<string> &newdirector)
{
    for (int i = 0; i < recs.director.size(); i++) {
        newdirector.push_back(recs.director.at(i));
    }
}

int searchMovie::getDate()
{
    return recs.releaseDate;
}

double searchMovie::getRating()
{
    return recs.rating;
}

void searchMovie::outputOrError(vector<Movie> possibleSelections)
{
    if(possibleSelections.empty())
    {
        cout << endl << "Could not get any movies by that search." << endl;
    }
    else
    {
        sort(possibleSelections.rbegin(), possibleSelections.rend());
        for (int i = 0; i < min((int)possibleSelections.size(), 5); i++)
        {
            possibleSelections[i].display();
        }
        // for(int i = 0; i < possibleSelections.size(); i++)
        // {
        //     possibleSelections[i].display();
        // }
    }
}

void searchMovie::displayOptions()
{
    cout << "How do you want to search moves by? Here are the following options:" << endl;
    cout << "- g for genre" << endl;
    cout << "- r for maturity rating" << endl;
    cout << "- a for actor" << endl;
    cout << "- d for director" << endl;
    cout << "- n for movie rating" << endl;
    cout << "- y for release date" << endl;
    cout << "- m to back to the menu" << endl;
}

// void searchMovie::otherPathways()
// {
//     cout << "Do you want to search again or go back to menu?" << endl;
//     cout << "- s for movie searcher" << endl;
//     cout << "- m for menu" << endl;
//     char input;
//     cin >> input;
//     if(input == 's')
//     {
//         searchMain();
//     }
//     else if(input == 'm')
//     {
//         menu menuObject;
//         userpass setup;
//         prefs options;
//         menuObject.display(setup, options);
//     }
//     else
//     {
//         cout << endl << "You have selected an invalid input. Please select again." << endl;
//         otherPathways();
//     }
// }

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
    string filename = "/class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    Database database;
    bool loaded = database.loadFromTSV(filename);
    char filterLetter;
    if (loaded == true) {
        do {
            filterLetter = askingForOption();
            if(filterLetter == 'g')
            {
                vector<string> genreSelection;
                int numberOfStrings;
                cout << endl << "You have decided to find movies by genre. Please type in the number of genres you want to input or input 0 to go back:" << endl;
                cin >> numberOfStrings;
                cin.ignore();
                if (numberOfStrings != 0){
                    cout << "Please type in the genre(s) you wish to have movies on:" << endl;
                    for(int i = 0; i < numberOfStrings; ++i) 
                    {
                        string inputString;
                        getline(cin, inputString);
                        genreSelection.push_back(inputString);
                        recs.genre.push_back("Drama");
                    }
                    possibleSelections = database.getMoviesbyGenre(genreSelection);
                    outputOrError(possibleSelections);
                }
            }
            else if(filterLetter == 'r')
            {
                string maturitySelection;
                int numberOfStrings;
                cout << endl << "You have decided to find movies by maturity rating. Please type in the maturity rating you wish to have movies on or type none to go back:" << endl;
                getline(cin, maturitySelection);  
                if (maturitySelection != "none") {      
                    possibleSelections = database.getMoviesbyMaturityRating(maturitySelection);
                    outputOrError(possibleSelections);
                }
            }
            else if(filterLetter == 'a')
            {
                vector<string> actorSelection;
                int numberOfStrings;
                cout << endl << "You have decided to find movies by actor. Please type in the number of actors you want to input or type 0 to go back:" << endl;
                cin >> numberOfStrings;
                cin.ignore();
                if (numberOfStrings != 0) {
                    cout << "Please type in the actor(s) you wish to have movies on:" << endl;
                    for(int i = 0; i < numberOfStrings; ++i) 
                    {
                        string inputString;
                        getline(cin, inputString);
                        actorSelection.push_back(inputString);
                        recs.actor.push_back(inputString);
                    }
                    possibleSelections = database.getMoviesbyActor(actorSelection);
                    outputOrError(possibleSelections);
                }
            }
            else if(filterLetter == 'n')
            {
                double movieRating;
                cout << endl << "You have decided to find movies by movie rating. Please type in the rating you wish to see movies on or type 0 to go back:" << endl;
                cin >> movieRating;
                if (movieRating != 0){
                    possibleSelections = database.getMoviesbyRating(movieRating);
                    outputOrError(possibleSelections);
                }
            }
            else if(filterLetter == 'y')
            {
                int releaseDate;
                cout << endl <<  "You have decided to find movies by release date. Please type in the release date you wish to see movies on or type in 0 to go back:" << endl;
                cin >> releaseDate;
                if (releaseDate != 0){
                    possibleSelections = database.getMoviesbyReleaseDate(releaseDate);
                    outputOrError(possibleSelections);
                }
            }
            else if(filterLetter == 'd')
            {
                vector<string> directorSelection;
                int numberOfStrings;
                cout << endl << "You have decided to find movies by director. Please type in the number of directors you want to input or type in 0 to go back:" << endl;
                cin >> numberOfStrings;
                cin.ignore();
                if (numberOfStrings != 0){
                    cout << "Please type in the director(s) you wish to have movies on:" << endl;
                    for(int i = 0; i < numberOfStrings; ++i) 
                    {
                        string inputString;
                        getline(cin, inputString);
                        directorSelection.push_back(inputString);
                        recs.director.push_back(inputString);
                    }
                    possibleSelections = database.getMoviesbyActor(directorSelection);
                    outputOrError(possibleSelections);
                }
            }
            else if (filterLetter != 'm')
            {
                cout << endl << "You have entered an invalid input. Please select again." << endl << endl;
            }
            cout << endl;
        }
        while (filterLetter != 'm');
    }
}
