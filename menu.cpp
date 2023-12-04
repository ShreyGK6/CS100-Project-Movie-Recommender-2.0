#include "menu.h"
#include "movierec.h"
#include "database.h"
#include "movie.h"
#include "preferences.h"
#include "userpass.h"
#include "settings.h"
#include "Instructions.h"
#include "search.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

menu::menu()
{
}

void menu::callSettings(userpass &setup, prefs &options)
{
    Settings profile;
    profile.changeprefs(setup, options);
    display(setup, options);
}

void menu::callMovieRec(prefs options)
{
    Database db;
    string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    db.loadFromTSV(filename);
    cout << "Calling movie recommendator..." << endl;
    cout << endl;
    MovieRec movierec;
    cout << "Top Movies Based on Your Profile Selections: " << endl;
    cout << endl;
    movierec.movieRecommendationOverall(options);
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Top Movies Based on Your Selected Genre: " << endl;
    cout << endl;
    movierec.movieRecByGenre(options);

    cout << "Going back to menu..." << endl << endl;
    menu menuObject;
    userpass setup;
    prefs preference;
    menuObject.display(setup, preference);
}

void menu::callOverview()
{
    instructions instructionsPage;
    instructionsPage.display();
}

void menu::callSearch()
{
    searchMovie searching;
    searching.searchMain();
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

void menu::display(userpass &setup, prefs &options)
{
    char input = askingForInput();
    if (input == 'r')
    {
        cout << "You have selected the movie recommendations. Going there..." << endl;
        callMovieRec(options);
    }
    else if (input == 's')
    {
        cout << "You have selected the movie searcher. Going there..." << endl;
        callSearch();
    }
    else if (input == 'p')
    {
        cout << "You have selected the profile settings. Going there..." << endl;  
        callSettings(setup, options);
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
        cout << "You have entered an invalid input." << endl << endl;
        display(setup, options);
    }
}
