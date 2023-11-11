#include "menu.h"
#include <iostream>
#include <string>
using namespace std;

menu::menu()
{}

void menu::callSettings()
{}

void menu::callMovieRec()
{}

void menu::callOverview()
{}

void menu::callSearch()
{}

void menu::signOut()
{}

void menu::display()
{
    char userInput;
    cout << "Please select an option for menu options: " << endl;
    cin >> userInput;
    if(userInput == 'r')
    {
        cout << "You have selected the movie recommendations. Going there..." << endl;  
        callMovieRec();  
    }
    else if(userInput == 's')
    {
        cout << "You have selected the movie searcher. Going there..." << endl;  
        callSearch();
    }
    else if(userInput == 'p')
    {
        cout << "You have selected the profile settings. Going there..." << endl;  
        callSettings();
    }
    else if(userInput == 'o')
    {
        cout << "You have selected the overview. Going there..." << endl;  
        callOverview();
    }
    else if(userInput == 'q')
    {
        cout << "You have selected to signout. Signing out..." << endl;  
        signOut();
    }
    else
    {
        cout << "You have entered an invalid input." << endl << endl;
        display();
    }
}