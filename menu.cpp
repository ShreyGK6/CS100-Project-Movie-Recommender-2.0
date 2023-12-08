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
}

void menu::callMovieRec(prefs options, searchMovie find)
{
    MovieRec recs;
    recs.movieRecommendationoutput(options, find);
}

void menu::callOverview()
{
    instructions instructionsPage;
    instructionsPage.display();
}

void menu::callSearch(searchMovie& find)
{
    find.searchMain(find);
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

void menu::display(userpass &setup, prefs &options, searchMovie &find)
{   
    char input;
    do {
    input = askingForInput();
    if (input == 'r')
    {
        cout << "You have selected the movie recommendations. Going there..." << endl;
        cout << endl;
        cout << endl;
        callMovieRec(options, find);
    }
    else if (input == 's')
    {
        cout << "You have selected the movie searcher. Going there..." << endl;
        cout << endl;
        cout << endl;
        callSearch(find);
    }
    else if (input == 'p')
    {
        cout << "You have selected the profile settings. Going there..." << endl;
        cout << endl;
        cout << endl;  
        callSettings(setup, options);
    }
    else if (input == 'o')
    {
        cout << "You have selected the overview. Going there..." << endl;
        cout << endl;
        cout << endl;
        callOverview();
    }
    else if (input == 'q')
    {
        cout << "You have selected to signout. Signing out..." << endl;
        cout << endl;
        cout << endl;
        cout << "Signed out" << endl;
    }
    else
    {
        cout << "You have entered an invalid input." << endl << endl;
        display(setup, options, find);
    }
    }
    while (input != 'q');
}

