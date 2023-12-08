#include <iostream>
#include <string>
#include "menu.h"
#include "search.h"
using namespace std;

int main()
{
    menu menuObject;
    userpass setup;
    prefs options;
    searchMovie find;
    menuObject.display(setup, options, find);
    
    return 0;
}