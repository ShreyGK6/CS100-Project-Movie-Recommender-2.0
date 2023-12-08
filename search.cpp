#include <iostream>
#include "database.h" 
#include "search.h"
#include "movie.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;


void searchMovie::getGenres(vector<string> &newgenre)
{
    for (int i = 0; i < recs.genres.size(); i++) {
        newgenre.push_back(recs.genres.at(i));
    }
}

string searchMovie::getMaturityRating()
{
    return recs.maturityRating;
}

void searchMovie::getActor(vector<string> &newactor)
{
    for (int i = 0; i < recs.actors.size(); i++) {
        newactor.push_back(recs.actors.at(i));
    }
}

void searchMovie::getDirector(vector<string> &newdirector)
{
    for (int i = 0; i < recs.directors.size(); i++) {
        newdirector.push_back(recs.directors.at(i));
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

char searchMovie::askingForOption()
{
    char userInput;
    displayOptions();
    cin >> userInput;
    cin.ignore();
    return userInput;
}

void searchMovie::searchMain(searchMovie &find)
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
                string inputString;
                cout << endl << "You have decided to find movies by genre." << endl;
                do {
                    cout << "Please type in the genre you wish to have movies on or type done when you're done:" << endl;
                    getline(cin, inputString);
                    cout << endl;
                    inputString[0] = toupper(inputString[0]);
                    for (int i = 1; i < inputString.length(); i++){
                        inputString[i] = tolower(inputString[i]);
                    }
                    if (inputString != "Done"){
                        genreSelection.push_back(inputString);
                        recs.genres.push_back(inputString);
                    }
                }
                while (inputString != "Done");
                if (genreSelection.size() != 0) {
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
                cout << endl;
            }
            else if(filterLetter == 'a')
            {
                vector<string> actorSelection;
                string inputString;
                int numberOfStrings;
                cout << endl << "You have decided to find movies by actor." << endl;
                do {
                    cout << "Please type in the actor(ess) you wish to have movies on or type done when you're done:" << endl;
                    getline(cin, inputString);
                    cout << endl;
                    inputString[0] = toupper(inputString[0]);
                    for (int i = 1; i < inputString.length(); i++){
                        if (isspace(inputString[i]) != 0){
                            i= i + 1;
                            inputString[i] = toupper(inputString[i]);
                        }
                        else {
                            inputString[i] = tolower(inputString[i]);
                        }
                    }
                    if (inputString != "Done") {
                        actorSelection.push_back(inputString);
                        recs.actors.push_back(inputString);
                    }
                }
                while (inputString != "Done");
                if (actorSelection.size() != 0) {
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
                cout << endl;
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
                cout << endl;
            }
            else if(filterLetter == 'd')
            {
                vector<string> directorSelection;
                string inputString;
                int numberOfStrings;
                cout << endl << "You have decided to find movies by director." << endl;
                do{
                    cout << "Please type in the director you wish to have movies on or type done when you're done:" << endl;
                    getline(cin, inputString);
                    cout << endl;
                    inputString[0] = toupper(inputString[0]);
                    for (int i = 1; i < inputString.length(); i++){
                        if (isspace(inputString[i]) != 0){
                            i= i + 1;
                            inputString[i] = toupper(inputString[i]);
                        }
                        else {
                            inputString[i] = tolower(inputString[i]);
                        }
                    }
                    if (inputString != "Done") {
                        directorSelection.push_back(inputString);
                        recs.directors.push_back(inputString);
                    }
                }
                while (inputString != "Done");
                if (directorSelection.size() != 0){
                    possibleSelections = database.getMoviesbyActor(directorSelection);
                    outputOrError(possibleSelections);
                }
            }
            else if (filterLetter != 'm')
            {
                cout << endl << "You have entered an invalid input. Please select again." << endl << endl;
            }
        }
        while (filterLetter != 'm');
    }
}
