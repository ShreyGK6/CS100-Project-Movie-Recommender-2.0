#include <iostream>
#include "database.h" 
#include "search.h"
#include <string>
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

void searchMovie::searchMain()
{
    char filter = askingForOption();
}