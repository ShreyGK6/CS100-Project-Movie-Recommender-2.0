#include "menu.h"
#include "movierec.h"
#include "database.h"
#include "movie.h"
#include "start.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

menu::menu()
{
}

void menu::callSettings()
{
    cout << "Calling settings..." << endl;
}

void menu::callMovieRec()
{
    Database db;
    string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    db.loadFromTSV(filename);
    cout << "Calling movie recommendator..." << endl;
    cout << endl;
    struct preferences preference;
    preference.actor = "Morgan Freeman";
    preference.genre = "Comedy";
    preference.age = 55;
    preference.director = "Martin Scorsese";
    string genre = "Action";
    MovieRec movierec;
    cout << "Top Movies Based on Your Profile Selections: " << endl;
    cout << endl;
    movierec.movieRecommendationOverall(preference);
    cout << endl;
    cout << "Top Movies Based on Your Selected Genre: " << endl;
    cout << endl;
    movierec.movieRecByGenre(genre);
    movierec.backToMenu();
}

void menu::callOverview()
{
    cout << "Calling overview..." << endl;
}

void menu::callSearch()
{
    cout << "Calling movie searcher..." << endl;
}

void menu::signOut()
{
    cout << "Signed out" << endl;
}

void menu::options()
{
    cout << "- r for movie recommendation" << endl;
    cout << "- s for movie searcher" << endl;
    cout << "- p for profile settings" << endl;
    cout << "- o for overview" << endl;
    cout << "- q for signing out" << endl;
}

char menu::askingForInput()
{
    char userInput;
    cout << "Please select an option for menu options:" << endl;
    options();
    cin >> userInput;
    return userInput;
}

void menu::display()
{
    char input = askingForInput();
    if (input == 'r')
    {
        cout << "You have selected the movie recommendations. Going there..." << endl;
        callMovieRec();
    }
    else if (input == 's')
    {
        cout << "You have selected the movie searcher. Going there..." << endl;
        callSearch();
    }
    else if (input == 'p')
    {
        cout << "You have selected the profile settings. Going there..." << endl;
        callSettings();
    }
    else if (input == 'o')
    {
        cout << "You have selected the overview. Going there..." << endl;
        callOverview();
    }
    else if (input == 'q')
    {
        cout << "You have selected to signout. Signing out..." << endl;
        signOut();
    }
    else
    {
        cout << "You have entered an invalid input." << endl
             << endl;
        display();
    }
}