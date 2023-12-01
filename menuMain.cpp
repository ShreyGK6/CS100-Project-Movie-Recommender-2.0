#include <iostream>
#include <string>
#include "menu.h"
using namespace std;

int main()
{
    menu menuObject;
    userpass setup;
    prefs options;
    menuObject.display(setup, options);
    
    return 0;
}