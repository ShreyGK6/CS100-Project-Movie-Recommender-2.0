#ifndef __MENU_H__
#define __MENU_H__

#include "settings.h"
#include "Instructions.h"
#include "userpass.h"
#include "preferences.h"

class menu
{
    public:

    menu();
    void display(userpass &setup, prefs &options);
    void options();
    char askingForInput();

    void callSettings(userpass &setup, prefs &options);  //make all functions this line and below private; public due to tests
    void callMovieRec(prefs options);
    void callSearch();
    void callOverview();
    void signOut();
};

#endif