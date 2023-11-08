#ifndef __MENU_H__
#define __MENU_H__
#include "setting.h"

class menu
{
    private:

    menu menuObject;

    public:

    void callSettings();
    void callMovieRec();
    void callSearch();
    void callOverview();
    void signOut();
};

#endif