#include <iostream>
#include "database.h" 
#include "search.h"
#include "movie.h"
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

searchMovie::searchMovie()
{}

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
        string genreSelection;
        cout << "You have decided to find movies by genre. Please type in the genre you wish to have movies on:" << endl;
        cin >> genreSelection;
        possibleSelections = database.getMoviesbyGenre(genreSelection);
        if(possibleSelections.empty())
        {
            cout << "Could not get any movies by that search." << endl;
        }
        else
        {
            for(int i = 0; i < 5; i++)
            {
                possibleSelections[i].display();
            }
        }
    }
    else if(filterLetter  == 'm')
    {
        string maturitySelection;
        cout << "You have decided to find movies by maturity rating. Please type in the maturity rating you wish to have movies on:" << endl;
        cin >> maturitySelection;
        possibleSelections = database.getMoviesbyMaturityRating(maturitySelection);
        if(possibleSelections.empty())
        {
            cout << "Could not get any movies by that search." << endl;
        }
        else
        {
            for(int i = 0; i < 5; i++)
            {
                possibleSelections[i].display();
            }
        }
    }
    else if(filterLetter == 'a')
    {
        string actorSelection;
        cout << "You have decided to find movies by actor. Please type in the actor you wish to have movies on:" << endl;
        getline(cin, actorSelection);
        possibleSelections = database.getMoviesbyActor(actorSelection);
        if(possibleSelections.empty())
        {
            cout << "Could not get any movies by that search." << endl;
        }
        else
        {
            for(int i = 0; i < possibleSelections.size(); i++)
            {
                possibleSelections[i].display();
            }
        }
    }
    else if(filterLetter == 'n')
    {
        double movieRating;
        cout << "You have decided to find movies by movie rating. Please type in the rating you wish to see movies on:" << endl;
        cin >> movieRating;
        possibleSelections = database.getMoviesbyRating(movieRating);
        if(possibleSelections.empty())
        {
            cout << "Could not get any movies by that search." << endl;
        }
        else
        {
            for(int i = 0; i < possibleSelections.size(); i++)
            {
                possibleSelections[i].display();
            }
        }
    }
    else if(filterLetter == 'r')
    {
        int releaseDate;
        cout << "You have decided to find movies by release date. Please type in the rating you wish to see movies on:" << endl;
        cin >> releaseDate;
        possibleSelections = database.getMoviesbyReleaseDate(releaseDate);
        if(possibleSelections.empty())
        {
            cout << "Could not get any movies by that search." << endl;
        }
        else
        {
            for(int i = 0; i < possibleSelections.size(); i++)
            {
                possibleSelections[i].display();
            }
        }
    }
    else if(filterLetter == 'd')
    {
        string directorSelection;
        cout << "You have decided to find movies by director. Please type in the director you wish to see movies on:" << endl;
        getline(cin, directorSelection);
        possibleSelections = database.getMoviesbyDirector(directorSelection);
        if(possibleSelections.empty())
        {
            cout << "Could not get any movies by that search." << endl;
        }
        else
        {
            for(int i = 0; i < possibleSelections.size(); i++)
            {
                possibleSelections[i].display();
            }
        }
    }
}