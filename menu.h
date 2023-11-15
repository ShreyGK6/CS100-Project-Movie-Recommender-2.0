#ifndef __MENU_H__
#define __MENU_H__

class menu
{
    public:

    menu();
    void display();
    void options();
    char askingForInput();

    void callSettings();  //make all functions this line and below private; public due to tests
    void callMovieRec();
    void callSearch();
    void callOverview();
    void signOut();
};

#endif