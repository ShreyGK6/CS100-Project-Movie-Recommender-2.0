#include <iostream>
#include "database.h" 
#include "search.h"
#include "movie.h"
#include <string>
#include <vector>
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
    cout << "- t for title" << endl;
    cout << "- r for rating" << endl;
}

char searchMovie::askingForOption()
{
    char userInput;
    displayOptions();
    cin >> userInput;
    return userInput;
}

vector<Movie> searchMovie::searchMain()
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
    }
    return possibleSelections;
}