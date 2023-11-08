#include <iostream>
#include <string>
using namespace std;
#include "menu.h"

int main()
{
    char userInput;
    cin >> userInput;
    userInput = userInput.toupper();
    if(userInput == "R")
    {
      menuObject.callMovieRec();  
    }
    else if(userInput == "S")
    {
        menuObject.callSearch();
    }
    else if(userInput == "P")
    {
        menuObject.callSettings();
    }
    else if(userInput == "Q")
    {
        menuObject.signOut();
    }
    
    return 0;
}