#include "menu.h"
#include <iostream>
#include <string>
using namespace std;

menu::menu()
{}

void menu::callSettings()
{
    cout << "Calling settings..." << endl;
}

void menu::callMovieRec()
{
    cout << "Calling movie recommendator..." << endl;
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
    if(input == 'r')
    {
        cout << "You have selected the movie recommendations. Going there..." << endl;  
        callMovieRec();  
    }
    else if(input == 's')
    {
        cout << "You have selected the movie searcher. Going there..." << endl;  
        callSearch();
    }
    else if(input == 'p')
    {
        cout << "You have selected the profile settings. Going there..." << endl;  
        callSettings();
    }
    else if(input == 'o')
    {
        cout << "You have selected the overview. Going there..." << endl;  
        callOverview();
    }
    else if(input == 'q')
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